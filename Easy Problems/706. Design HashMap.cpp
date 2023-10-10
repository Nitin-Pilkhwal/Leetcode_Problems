#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
using namespace std;

class MyHashMap {
public:
    // int d[1000001];
    std::vector<std::pair<int,int>> map;
    MyHashMap() {
        // fill(d,d+1000001,-1);
    }
    
    void put(int key, int value) {
        // d[key]=value;
        for(auto& it:map){
            if(it.first==key){
                it.second=value;
                return;
            }
        }
        map.push_back(std::make_pair(key,value));
    }
    
    int get(int key) {
        // return d[key];
        for(const auto it:map){
            if(it.first==key){
                return it.second;
            }
        }
        return -1;
    }
    
    void remove(int key) {
        // d[key]=-1;
        for(auto it=map.begin();it!=map.end();it++){
            if(it->first==key){
                map.erase(it);
                return ;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
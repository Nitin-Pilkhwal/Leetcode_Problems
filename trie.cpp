#include <iostream>
using namespace std;

struct Node{
    Node* links[26] = {NULL};
    bool flag = false;

    bool isContainKey(char ch){
        return (links[ch-'a'] != NULL);
    }

    void put(char ch,Node* node){
        links[ch-'a'] = node;
    }

    Node* get(char ch){
        return links[ch-'a'];
    }

    void setEnd(){
        flag = true;
    }
    bool isEnd(){
        return flag;
    }
};

class Trie {
private:
    Node* root;

public:
    Trie() {
        root = new Node();
    }
    
    void insert(string word) {
        Node* temp = root;
        for(int i=0;i<word.size();i++){
            char ch = word[i];
            if(!temp->isContainKey(ch)){
                temp->put(ch, new Node);
            }
            temp = temp->get(ch);
        }
        temp->setEnd();
    }
    
    bool search(string word) {
        Node* temp = root;
        for(int i=0;i<word.size();i++){
            char ch = word[i];
            if(!temp->isContainKey(ch)){
                return false;
            }
            temp = temp->get(ch);
        }
        return temp->isEnd();
        
    }
    
    bool startsWith(string word) {
        Node* temp = root;
        for(int i=0;i<word.size();i++){
            char ch = word[i];
            if(!temp->isContainKey(ch)){
                return false;
            }
            temp = temp->get(ch);
        }
        return true;
    }
};
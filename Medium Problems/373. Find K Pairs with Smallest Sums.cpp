#include <iostream>
#include <queue>

using namespace std;

    class  node{
        // i and j are index not the pair value
        public:
        int i;
        int j;
        long long sum;
        node(int a,int b,long long c){
            this->i=a;
            this->j=b;
            this->sum=c;
        }
    };
    class compare {
public:
    bool operator()( node* a, node* b){
        return a->sum > b->sum;
    }
};

class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        priority_queue<node*,vector<node*>,compare> q;
        vector<vector<int>> ans;
        // for(int i=0;i<nums1.size();i++){
        //     for(int j=0;j<nums2.size();j++){
        //         long long sum = nums1[i]+nums2[j];
        //             node* temp = new node(i,j,sum);
        //         if(p.size()<k){
        //             p.push(temp);
        //         }
        //         else if(sum<p.top()->sum){
        //             p.pop();
        //             p.push(temp);
        //         }
        //         else if(sum == p.top()->sum){

        //         }
        //         else break;
        //     }
        // }
        // while(!p.empty()){
        //     ans.push_back({nums1[p.top()->i],nums2[p.top()->j]});
        //     p.pop();
        // }
        for(int i=0;i<nums1.size();i++){
            long long sum = nums1[i]+nums2[0];
            node* temp = new node(i,0,sum);
            q.push(temp);
        }
        while(k-- && !q.empty()){
            int pos1 = q.top()->i;
            int pos2 = q.top()->j;
            long long sum = q.top()->sum;
            ans.push_back({nums1[q.top()->i],nums2[q.top()->j]});
            q.pop();
            if(pos2+1<nums2.size()){
                node* temp = new node(pos1,pos2+1,sum - nums2[pos2] + nums2[pos2+1]);
                q.push(temp);
            }
        }
        return ans;
    }
};
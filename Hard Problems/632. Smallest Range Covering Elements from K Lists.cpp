#include <iostream>
#include <string>
#include <queue>
#include <limits.h>
#include <algorithm>
using namespace std;

class Solution {
public:
    class node{
        public:
        int data;
        int row;
        int col;
        node(int data,int row,int col){
            this->data = data;
            this->col = col;
            this->row = row;
        }
    };
    class compare{
        public:
        bool operator()(node* a,node* b){
            return a->data > b->data;
        }
    };
    vector<int> smallestRange(vector<vector<int>>& nums) {
        int l=INT_MAX,r=INT_MIN;
        priority_queue<node*,vector<node*>,compare> pq;

        for(int i=0;i<nums.size();i++){
            int element = nums[i][0];
            node* temp = new node(element,i,0);
            r = max(r,element);
            l = min(l,element);
            pq.push(temp);
        }
        int start = l,end = r;
        while(!pq.empty()){
            node* top = pq.top();
            pq.pop();
            l = top->data;
            if(r-l<end-start){
                start = l;
                end = r;
            }
            if(top->col+1 < nums[top->row].size()){
                r = max(r,nums[top->row][top->col+1]);
                node* temp = new node(nums[top->row][top->col+1],top->row,top->col+1);
                pq.push(temp);
            }
            else break; // We will break because it has reached end of a list and the range must    contain atleast one element form each list
        }
        if(pq.empty()) cout<<"Empty";
        else cout<<"Not Empty "<<pq.size();
        return {start,end};
    }
};
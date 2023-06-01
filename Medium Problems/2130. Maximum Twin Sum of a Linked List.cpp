#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <limits.h>
#include <algorithm>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    int pairSum(ListNode* head) {
        int m=INT_MIN;
        vector<int> v;
        ListNode* ptr=head;
        while(ptr!=NULL){
            v.push_back(ptr->val);
            // cout<<ptr->val<<' ';
            ptr=ptr->next;
        }
        int n=v.size()/2,size=v.size();
        for(int i=0;i<n;i++){
            if(v[i]+v[size-i-1]>m) m=v[i]+v[size-i-1];
            cout<<m<<' ';
        }
        return m;
    }
};
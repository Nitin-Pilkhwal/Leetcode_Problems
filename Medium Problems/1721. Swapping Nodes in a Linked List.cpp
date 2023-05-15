#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* p=head,*q=head,*curr=head;
        int n=1;
        while(curr!=NULL){
            if(n<k) p=p->next;
            if(n>k) q=q->next;

            curr=curr->next;
            n++;
        }
        swap(p->val,q->val);
        return head;

    }
};
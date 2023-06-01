#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* s,*f;
        ListNode* dummy= new ListNode(0);
        dummy->next=head;
        ListNode* curr=dummy;
        while(curr->next!=NULL && curr->next->next!=NULL){
            ListNode* slow=curr->next;
            ListNode* fast=curr->next->next;
            curr->next=fast;
            slow->next=fast->next;
            fast->next=slow;
            curr=curr->next->next;
        }
        return dummy->next;
    }
};
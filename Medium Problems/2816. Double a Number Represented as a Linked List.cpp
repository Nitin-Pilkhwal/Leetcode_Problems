#include <iostream>
#include <map>
#include <vector>
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
    ListNode* doubleIt(ListNode* head) {
        if(head->val >4)
            head = new ListNode (0,head);
        ListNode * ptr = head;
        while(ptr){
            ptr->val = (ptr->val * 2) %10;
            if(ptr->next && ptr->next->val>4) ptr->val++;
            ptr=ptr->next;
        }
        return head;
    }
};
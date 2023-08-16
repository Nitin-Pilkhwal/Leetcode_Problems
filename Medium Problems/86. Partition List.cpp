#include <iostream>
#include <vector>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode after(0),before(0);
        ListNode* b=&before;
        ListNode* a=&after;
        while(head){
            if(head->val<x){
                b->next=head;
                b=head;
            }
            else{
                a->next = head;
                a=head;
            }
            head=head->next;
        }
        a->next = nullptr;
        b->next = after.next;
        return before.next;
    }
};
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
    ListNode* insertionSortList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* p1=head,*p2=head,*pos=NULL;
        while(p1){
            p2=p1->next;
            while(p2){
                if(p1->val > p2->val){
                    pos=p2;
                }
                p2=p2->next;
            }
            if(pos){
                int x = pos->val;
                pos->val = p1->val;
                p1->val = x;
                pos=NULL;
            }
            else p1=p1->next;
        }
        return head;
    }
};
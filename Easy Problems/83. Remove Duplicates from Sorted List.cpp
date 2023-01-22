#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;


//   Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)
            return head;
        ListNode* ptr1;
        ptr1=head;
        while(ptr1->next){
            if(ptr1->val==ptr1->next->val){
                ptr1->next=ptr1->next->next;
            }
            else{
                ptr1=ptr1->next;
            }
        }
        return head;
    }
};
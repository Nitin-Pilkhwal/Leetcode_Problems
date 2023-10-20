#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

//  * Definition for singly-linked list.
  struct ListNode {
     int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {

public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy=new ListNode(0);
        ListNode* slow,*fast,*temp;
        dummy->next=head;
        slow=dummy;
        fast=dummy;
        for(int i=1;i<=n;i++) fast=fast->next;

        while(fast->next){
            slow=slow->next;
            fast=fast->next;
        }
        temp=slow->next;
        slow->next=slow->next->next;
        delete(temp);
        return dummy->next;
    }
};
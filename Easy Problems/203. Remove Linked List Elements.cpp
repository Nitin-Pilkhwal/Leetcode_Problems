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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* alpha=new ListNode(0);
        ListNode* ptr=alpha;
        while(head){
            if(head->val!=val){
                ptr->next=head;
				ptr=ptr->next;
            }
			head=head->next;
        }
		ptr->next=NULL;
        return alpha->next;
    }
};

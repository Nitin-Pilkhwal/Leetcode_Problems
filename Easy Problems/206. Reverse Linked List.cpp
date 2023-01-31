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
    ListNode* reverseList(ListNode* h) {
        ListNode* p,*cur,*nex;
        p=NULL;
        cur=h;
        nex=h;
        while(nex!=NULL){
            nex=nex->next;
            cur->next=p;
            p=cur;
            cur=nex;
        }
        h=p;
        return h;
    }
};
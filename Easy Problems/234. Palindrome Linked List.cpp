#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
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
    struct ListNode* reverse(struct ListNode* curr){
        struct ListNode *prev,*nex;
        prev=NULL;
        nex=NULL;
        while(curr){
            nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {

        //Bruteforce
        // if(!head) return false;
        
        // struct ListNode *ptr;
        // ptr = head;
        // vector<int> v;
        // while(ptr){ 
        //     v.push_back(ptr->val);
        //     ptr=ptr->next;
        // }
        // int i=0,j=v.size()-1;
        // while(i<=j){
        //     if(v[i]!=v[j]) return false;
        //     i++;
        //     j--;
        // }
        // return true;

        //optimized
        if(!head || !head->next) return true;
        
        struct ListNode *slow,*fast;
        slow = head;
        fast = head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        slow->next=reverse(slow->next);
        slow=slow->next;
        while(slow){
            if(slow->val!=head->val) return false;
            slow=slow->next;
            head=head->next;
        }
        return true;
    }
};
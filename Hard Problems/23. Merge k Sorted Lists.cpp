#include <iostream>
#include <unordered_map>
#include <map>
#include <queue>
using namespace std;
struct ListNode
{
	int val;
	ListNode* next;
	
	ListNode(int x){
	    val = x;
	    next = NULL;
	}
	
};

class compare{
    public:
        bool operator()(ListNode* a,ListNode* b){
            return a->val > b->val;
        }
};
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int k = lists.size();
        if(k==0) return NULL;
        priority_queue<ListNode*,vector<ListNode*>,compare> minheap;
        ListNode* head=NULL,*tail=NULL;
        for(int i=0;i<k;i++){
            if(lists[i]!=NULL){
                // ListNode* curr = lists[i];
                minheap.push(lists[i]);
            }
        }
        while(!minheap.empty()){
            ListNode* node = minheap.top();
            minheap.pop();
            if(head==NULL){
                tail = node;
                head = node;
            }
            else{
                ListNode* temp = new ListNode(node->val);
                tail->next = temp;
                tail=tail->next;
            }
            if(node->next != NULL){
                minheap.push(node->next);
            }
        }
        return head;
    }
};
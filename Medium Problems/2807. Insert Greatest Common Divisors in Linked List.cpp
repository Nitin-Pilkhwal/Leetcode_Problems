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
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    void insert(ListNode* head,int val){
        ListNode* node = new ListNode(val);
        node->next = head->next;
        head->next=node;
    }
    int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* ptr = head;
        while(ptr->next!=NULL){
            int a = ptr->val;
            int b = ptr->next->val;
            int c = gcd(a,b);
            insert(ptr,c);
            ptr=ptr->next->next;
        }
        return head;
    }
};
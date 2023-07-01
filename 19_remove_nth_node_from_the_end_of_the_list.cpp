#include <bits/stdc++.h>
using namespace std;


//  * Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };


// my approach o(n)::

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {


        if(head == NULL){
            return nullptr;
        }

        ListNode * curr = head;
        int count = 0;

        while(curr != NULL){
            curr = curr-> next;
            count++;
        }

        int idx = count - n;
        int curr_idx = 0;
        curr = head;

        if(idx == 0){
            head = head->next;
            return head;
        }

        while(curr_idx < idx){
            curr_idx++;
            if(curr_idx == idx){
                ListNode * temp = curr->next;
                curr->next = temp->next;
                delete temp;
            }
            curr = curr->next;
        }


        return head;
    }
};


// two pointer approach o(n)

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head->next == NULL) {
            return NULL;
        }
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        while (n > 0) {
            fast = fast->next;
            n--;
        }
        
        if (fast == NULL) {
            return head->next;
        }
        
        while (fast->next != NULL) {
            slow = slow->next;
            fast = fast->next;
        }
        
        slow->next = slow->next->next;
        return head;
    }
};





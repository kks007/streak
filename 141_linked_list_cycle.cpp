#include <bits/stdc++.h>

using namespace std;

//  * Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
//////




class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        map<int, int> occurence;
        
        ListNode * curr = head;

        while(curr != NULL){
            auto cur_val = curr -> val;
            occurence[cur_val]++;
            if(occurence[cur_val] > 1)
                return true;
            curr = curr-> next;
        }

        return false;

        
    }
};
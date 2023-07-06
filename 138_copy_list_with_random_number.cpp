#include <bits/stdc++.h>

using namespace std;

/*
    Given linked list w/ also a random pointer, construct deep copy

    Hash map {old -> new}, O(n) space
    Optimize interweave old and new nodes, O(1) space
    A -> A' -> B -> B' -> C -> C', A'.random = A.random.next

    Time: O(n)
    Space: O(n) -> can optimize to O(1)
*/


// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = nullptr;
        random = nullptr;
    }
};


class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*, Node*> nodes;
        Node* h = head;
        
        while (h){
            nodes[h] = new Node(h->val);
            h = h->next;
        }
        h = head;
        while (h){
            Node* newNode = nodes[h];
            newNode->next = nodes[h->next];
            newNode->random = nodes[h->random];
            h = h->next;
        }
        return nodes[head];
    }
};

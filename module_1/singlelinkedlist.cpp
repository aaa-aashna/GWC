#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

void insertAtBeginning (ListNode* &head, int val) {
    ListNode* newNode = new ListNode(val);
    newNode->next = head;
    head = newNode;
} 
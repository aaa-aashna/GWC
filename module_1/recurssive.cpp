#include <iostream>
using namespace std;

//recurrsive approach 
//reverse(head->next);
//front->next = head;
//head->next = NULL;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* reverseList(ListNode* head) {
    if(head == NULL || head->next == NULL)
        return head;

    ListNode* newHead = reverseList(head->next);
    head->next->next = head;
    head->next = NULL;

    return newHead;
}

//reverse(head->next);
//head->next->next = head;
//head->next = NULL;
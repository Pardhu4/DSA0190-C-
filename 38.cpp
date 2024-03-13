#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
ListNode* rotateRight(ListNode* head, int k) {
    if (!head || k == 0) return head;    
    int length = 1;
    ListNode *tail = head;
    while (tail->next) {
        tail = tail->next;
        length++;
    }    
    k = k % length;
    if (k == 0) return head;    
    ListNode *newTail = head;
    for (int i = 0; i < length - k - 1; i++) {
        newTail = newTail->next;
    }
    ListNode *newHead = newTail->next;
    newTail->next = NULL;
    tail->next = head;
    return newHead;
}
void printList(ListNode *head) {
    while (head) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}
int main() {
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    int k = 2; 
    cout << "Original list: ";
    printList(head);
    ListNode *rotatedHead = rotateRight(head, k);
    cout << "List after rotation: ";
    printList(rotatedHead);
    return 0;
}


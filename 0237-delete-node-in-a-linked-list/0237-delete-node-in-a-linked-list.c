/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
struct ListNode *ptr;

ptr=node->next;

node->val=ptr->val;

node->next=node->next->next;

free(ptr);
}
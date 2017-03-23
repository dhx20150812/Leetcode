/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    if(!head) return NULL;//空结点
    if(head && !head->next) return head;//单结点
    struct ListNode *result = head->next;
    struct ListNode *coming = head->next->next;
    head->next->next = head;//使第二个位置的后继指针指向第一个位置，以达到交换位置的效果
    head->next = swapPairs(coming);
    return result;
}

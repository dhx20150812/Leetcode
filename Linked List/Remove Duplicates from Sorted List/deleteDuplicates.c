/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if(!head) return NULL;
    if(!head->next) return head;
    struct ListNode *p = head;
    while(p)
    {
        while(p->next!= NULL && p->val == p->next->val)
            p->next = p->next->next;
        p = p->next;
    }
    return head;
}

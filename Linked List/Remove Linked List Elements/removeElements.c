/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    if(!head) return NULL;
    struct ListNode dummy;
    dummy.val = 0;
    dummy.next = head;
    struct ListNode *p = &dummy;
    while(p)
    {
        if(p->next!=NULL && p->next->val==val)
            p->next = p->next->next;
        else
            p = p->next;
    }
    return dummy.next;
}

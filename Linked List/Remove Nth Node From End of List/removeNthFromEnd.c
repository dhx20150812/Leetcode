/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    if (!head->next) return NULL;
    struct ListNode dummy,*p=&dummy,*q=head;
    dummy.next = head;
    int i=0;
    for(;i<n;i++)
        q = q->next;
    while(q)
    {
        p = p->next;
        q = q->next;
    }
    p->next = p->next->next;
    return dummy.next;
}

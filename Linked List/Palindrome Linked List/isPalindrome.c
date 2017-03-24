/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 /*
 这部分的思路详见隔壁的python解法
 */
struct ListNode* reverseList(struct ListNode* head) {
    if(!head) return NULL;
    if(!head->next) return head;
    struct ListNode *res = reverseList(head->next);
    head->next->next = head;
    head->next = NULL;
    return res;
}
bool isPalindrome(struct ListNode* head) {
    if(!head) return true;
    if(head && !head->next) return true;
    struct ListNode *fast=head,*slow=head;
    while(fast && fast->next){
        fast = fast->next->next;
        slow = slow->next;
    }
    struct ListNode *mid;
    if(!fast)
        mid = slow;
    else
        mid = slow->next;
    struct ListNode *p = reverseList(mid);
    struct ListNode *q = head;
    while(p){
        if(p->val != q->val)
            return false;
        p = p->next;
        q = q->next;
    }
    return true;
}

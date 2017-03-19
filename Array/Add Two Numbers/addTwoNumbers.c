/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int flag = 0,sum = 0;
    struct ListNode *l3 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode *p = l3;
    while(l1 || l2 || flag)
    {
        struct ListNode *new_node = (struct ListNode*)malloc(sizeof(struct ListNode));
        sum = (l1?l1->val:0)  + (l2?l2->val:0) + flag;
        flag = sum/10;
        new_node->val = sum%10;
        new_node->next = NULL;
        p = p->next= new_node;
        if(l1)
            l1 = l1->next;
        if(l2)
        l2 = l2->next;
    }
    return l3->next;
}
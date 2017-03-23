/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 /*
 在算法思路上参考了这篇博客http://blog.sina.com.cn/s/blog_725dd1010100tqwp.html
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    if(!headA || !headB) return NULL;
    struct ListNode *p = headA;
    while(p->next)
        p = p->next;
    p->next = headB;//将B结点接到A结点后面
    struct ListNode *fast=headA,*slow=headA;
    struct ListNode *mark;
    while(fast&& fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;
        if(fast == slow)//两者相遇，说明存在环，记录相遇的位置为mark
        {
            mark = fast;
            break;
        }
    }
    if(!fast || !fast->next) //没有形成环，说明两者之间没有交集
    {
        p->next = NULL;
        return NULL;
    }
    else
    {
        struct ListNode *start = headA;
        while(start != mark) //start从头结点开始，mark从环中相遇的位置开始，两者相遇的地方就是环的入口
        {
            start = start->next;
            mark = mark->next;
        }
        p->next = NULL;
        return mark;  
    }
}

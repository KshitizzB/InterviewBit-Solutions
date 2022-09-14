/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode *p=A, *q;
    while(p && p->next){
        if(p->val==p->next->val){
            q = p->next->next;
            if(q==NULL){
                p->next = NULL;
                break;
            }
            p->next = q;
        }
        if(p->val!=p->next->val) p = p->next;
    }
    return A;
}

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* A) {
    if(A->next==NULL) return A;
    ListNode* p = A;
    ListNode* r = p->next;
    while(1){
        ListNode* t = p->next->next;
        p->next->next = p;
        if(t==NULL || t->next==NULL){
            p->next = t;
            break;
        }
        p->next = t->next;
        p = t;   
    }
    return r;
}

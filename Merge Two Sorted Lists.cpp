/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    ListNode* r;
    if(A==NULL && B==NULL) return NULL;
    else if(A==NULL) return B;
    else if(B==NULL) return A;
    else{
        ListNode* p;
        if(A->val<=B->val){
            p = A;
            A = p->next;
        }
        else{
            p = B;
            B = p->next;
        }
        r = p;
        while(A && B){
            if(A->val<=B->val){
                p->next = A;
                p = A;
                A = p->next;
            }
            else{
                p->next = B;
                p = B;
                B = p->next;
            }
        }
        if(A==NULL) p->next = B;
        if(B==NULL) p->next = A;
    }
    return r;
}

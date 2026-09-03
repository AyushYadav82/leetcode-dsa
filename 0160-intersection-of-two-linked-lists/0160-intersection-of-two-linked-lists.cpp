/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a=headA;
        ListNode* b=headB;
        int diff=0;
        int lena=0,lenb=0;
        while(a!=NULL){
            lena++;
            a=a->next;
        }
        while(b!=NULL){
            lenb++;
            b=b->next;
        }
        //reset
        a=headA,b=headB;

        if(lena>lenb){
            diff=lena-lenb;
            while(diff--){
                a=a->next;
            }
        }
        else{
            diff=lenb-lena;
            while(diff--){
                b=b->next;
            }
        }
        while(a!=b){
            a=a->next;
            b=b->next;
        }
        return a;
    }
};
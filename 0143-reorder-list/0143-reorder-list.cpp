/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) {
        if(head==NULL || head->next==NULL) return;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        //divide in equal halfs

        ListNode* sechead=slow->next;
        slow->next=NULL;
        ListNode* prev=NULL;
        ListNode* curr=sechead;

        //reverse the second half

        while(curr!=NULL){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        //now merge

        ListNode* a=head;
        ListNode* b=prev;
        while(b!=NULL){
            ListNode* next=a->next;
            ListNode* pnext=b->next;
            a->next=b;
            b->next=next;
            a=next;
            b=pnext;
        }
    }
};
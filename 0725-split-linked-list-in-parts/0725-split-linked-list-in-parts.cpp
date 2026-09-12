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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int n=0;
        ListNode* curr=head;
        while(curr!=NULL){
            curr=curr->next;
            n++;
        }

        int size=n/k;
        int extra=n%k;

        vector<ListNode*> ans;
        for(int i=0;i<k;i++){
            int partsize=0;
            if(i<extra){
             partsize=size+1;
            }else{
                 partsize=size;
            }

            if(partsize==0){
                ans.push_back(NULL);
                continue;
            }
            ListNode* parthead=head;
            for(int j=1;j<partsize;j++){
                head=head->next;
            } 

            ListNode* next=head->next;
            head->next=NULL;

            ans.push_back(parthead);

            head=next;
        }
        return ans;
    }
};
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
            ListNode* Dummy=new ListNode(0);
            ListNode* temp1=list1;
            ListNode* temp2=list2;

            ListNode* dum=Dummy;

            while(temp1!=NULL && temp2!=NULL){
                    if(temp1->val<=temp2->val){
                        dum->next=temp1;
                        temp1=temp1->next;
                       dum=dum->next;
                    }
                    else{
                        dum->next=temp2;
                        temp2=temp2->next;
                        dum=dum->next;
                    }
                }
                if(temp1){
                    
                        dum->next=temp1;
                    
                

                }
                if(temp2){
                  
                        dum->next=temp2;
                        temp2=temp2->next;
                    
                }

       return Dummy->next;

    }
};

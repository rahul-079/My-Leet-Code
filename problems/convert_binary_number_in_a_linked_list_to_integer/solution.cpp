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
    int getDecimalValue(ListNode* head) {
        int x=0,y=0 ;
        ListNode* curr =head ;
        while(curr->next!=NULL){
            x++ ;
            curr=curr->next ;
        }
        
        while(head!=NULL){
            y=y+((head->val) * pow(2,x) );
            x-- ;
            head=head->next ;
        }
        return y ;
    }
};
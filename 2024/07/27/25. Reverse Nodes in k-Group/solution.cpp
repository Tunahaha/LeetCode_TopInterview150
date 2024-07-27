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
    int get_length(ListNode* head){
        ListNode* temp=head;
        int len=0;
        while(temp!=NULL){
            temp=temp->next;
            len++;
        }
        return len;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        int len=get_length(head);
        if(len<k){
            return head;
        }
        int position=0;
        ListNode* pre=NULL;
        ListNode* cur=head;
        while(position<k){
            ListNode* fast=cur->next;
            cur->next=pre;
            pre=cur;
            cur=fast;
            position++;
        }
        if(cur!=NULL){
            ListNode* recursionhead=reverseKGroup(cur,k);
            head->next=recursionhead;
        }
        return pre;
    }
};
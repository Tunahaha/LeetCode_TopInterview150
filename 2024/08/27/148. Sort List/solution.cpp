class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        ListNode *temp=head;
        vector<int> ans;
        while(temp!=NULL){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        temp=head;
        sort(ans.begin(),ans.end());
        head->val=ans[0];
        int i=1;
        while(temp!=NULL && i<ans.size()){
            temp=temp->next;
            temp->val=ans[i];
            i++;
        }
        return head;
    
    }
};
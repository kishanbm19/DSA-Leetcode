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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {

        if(head==nullptr)return {};
        int l=0;
      
        ListNode * ptr=head->next,*prev=head;
        int cnt=0,p=0;

        int mini=INT_MAX,maxi=INT_MIN;
        int dist=-1,num;
        while(ptr->next){
            cnt++;
            if((prev->val<ptr->val && ptr->next->val<ptr->val) ||((prev->val>ptr->val && ptr->next->val>ptr->val))){
                 if(p==0){dist=0;num=cnt;} 
                else {dist=cnt-p;
                mini=min(mini,dist);
                }
                p=cnt;
                 
                }

            prev=ptr;
            ptr=ptr->next;
            
            
        }
        if(p==0 || mini==INT_MAX)return {-1,-1};
        return {mini,p-num};

   
    }
};
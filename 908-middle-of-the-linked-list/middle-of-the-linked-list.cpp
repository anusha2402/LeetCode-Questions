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
    ListNode* middleNode(ListNode* head) {
         ListNode* node= head;
        int count=0;
        while(node!=NULL){
            count++;
            node= node->next;
        }
        int ans = count/2;
        count=0;
        node=head;
        while(count<ans){
           node = node->next;
           count++;
        }
        return node;   
        
    }
};
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next == nullptr){return nullptr;}
        vector<ListNode*> arr ;
        ListNode* temp = head;
        while(temp){
            arr.push_back(temp);
            temp=temp->next;
        }
        if(arr.size()-n == 0){return head->next;}
        arr[arr.size()-n-1]->next = arr[arr.size()-n]->next;
        return head;
        
    }
};

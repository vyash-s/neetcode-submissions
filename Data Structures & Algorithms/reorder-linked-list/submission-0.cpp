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
       vector<ListNode*> node;
       ListNode* itr = head;
       while(itr){
         node.push_back(itr);
         itr=itr->next;
       }
       int l=0;
       int r = node.size()-1;
       while(l<r){
          node[l]->next = node[r];
          l++;
          if(l>r) break;
          node[r]->next=node[l];
          r--;
       }
       node[l]->next=nullptr;
        
    }
};

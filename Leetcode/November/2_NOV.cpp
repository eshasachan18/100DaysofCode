Problem link-https://leetcode.com/explore/challenge/card/november-leetcoding-challenge/564/week-1-november-1st-november-7th/3517/
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
    ListNode* insertionSortList(ListNode* head) {
        ListNode* res = new ListNode(INT_MIN);
        ListNode* ptr = res;
        ListNode* next = head;
        ListNode* prev = res;
        
        while(next){
            ListNode* nextNode = next->next;
            
			//lookup the first bigger element in the "sorted" list.
            ptr = res;
            prev = res;
            while(ptr && ptr->val <= next->val){
                prev = ptr;
                ptr = ptr->next;
            }
			//connect the new node between prev->[new node]->ptr
            prev->next = next;
            next->next = ptr;
            
			//set next to the next new node to process.
            next = nextNode;
            
        }
        
        return res->next;
    }
};

/*
You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.

Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]
*/

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
 using namespace std;
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* tmp = list2;
        ListNode* HEAD = list1;
        if (list1 == NULL){
            return list2;
        }
        while(list1 != NULL){
           
            list2 = tmp;
            
            while(list2 != NULL){
                if(list1->val == list2->val){
                    ListNode* ln = new ListNode(list2->val,list1->next);
                    list1->next = ln;
                    tmp = list2->next;
                }
                else if(list1->val > list2->val){
                    ListNode* ln = new ListNode(list1->val,list1->next);
                    list1->val = list2->val;
                    list1->next = ln;
                    tmp = list2->next;
                   
                }
                list2 = list2->next;
               
            }

            if(list1->next == NULL){
                if(tmp !=NULL) {
                    list1->next = tmp;
                    tmp = NULL;
                }
            }
            list1 = list1->next;
        }
        return HEAD;

    }
};
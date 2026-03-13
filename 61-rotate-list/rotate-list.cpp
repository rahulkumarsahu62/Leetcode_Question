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
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(head == NULL || head->next == NULL ||
        k == 0)
        return head;

        // step 1:Find Length
        ListNode* temp = head;
        int len = 1;
        while(temp->next != NULL){
            temp = temp->next;
            len++;
        }

        // step 2: Make circular
        temp->next = head;

        // step 3: Reduce k
        k = k % len;

        // step 4: Move to new tail
        int move = len - k;
        ListNode* newTail = head;

        for(int i = 1; i < move; i++){
            newTail = newTail->next;
        }

        // step 5: Break the circle
        ListNode* newHead = newTail->next;
        newTail->next = NULL;

        return newHead;

    }
};
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp = head;
        ListNode* prev = NULL;

        while (temp != NULL) {
         if (temp->val == val) {
        if (prev == NULL) {         
         head = temp->next;
          delete temp;
         temp = head;
                } else {                     
          prev->next = temp->next;
          delete temp;
               temp = prev->next;
                }
            } else {
            prev = temp;
            temp = temp->next;
            }
        }

        return head;
    }
};
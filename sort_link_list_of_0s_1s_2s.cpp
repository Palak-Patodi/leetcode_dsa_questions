//time complexity:O(n)
//space complexity:O(1)
class Solution {
public:
    ListNode* segregate(ListNode* head) {
        int count[3] = {0, 0, 0}; 

        ListNode* temp = head;
        while (temp != nullptr) {
            count[temp->val]++;
            temp = temp->next;
        }

         temp = head;
        int i = 0;
        while (temp != nullptr) {
            if (count[i] == 0) {
                i++;
            } else {
                temp->val = i;  
                count[i]--;     
                temp = temp->next;  
            }
        }

        return head;  
    }
};

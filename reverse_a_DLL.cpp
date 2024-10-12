
class Solution {
public:
    DLLNode* reverseDLL(DLLNode* head) {
        DLLNode* temp = nullptr;
        DLLNode* current = head;

        while (current != nullptr) {
            temp = current->prev;
            current->prev = current->next;
            current->next = temp;

            current = current->prev;
        }

        if (temp != nullptr) {
            head = temp->prev;
        }

        return head;
    }
};

class Solution {
  public:
    void deleteAllOccurOfX(struct Node** head_ref, int x) {
          Node* curr = *head_ref;

        while (curr != nullptr) {
            if (curr->data == x) {
                if (curr == *head_ref) {
                    *head_ref = curr->next;
                    if (*head_ref) {
                        (*head_ref)->prev = nullptr;
                    }
                } else {
                    
                    if (curr->next) {
                        curr->next->prev = curr->prev;
                    }
                    if (curr->prev) {
                        curr->prev->next = curr->next;
                    }
                }

                Node* temp = curr;
                curr = curr->next;
                delete temp;
            } else {
                curr = curr->next;
            }
        }
    }
};
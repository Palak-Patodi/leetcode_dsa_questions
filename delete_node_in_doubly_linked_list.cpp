class Solution {
public:
    Node* deleteNode(Node* head, int x) {
        if (head == nullptr) {
            return nullptr;
        }
        
        Node* temp = head;

        if (x == 1) {
            head = temp->next;
            if (head != nullptr) {
                head->prev = nullptr;
            }
            delete temp;
            return head;
        }

        for (int cnt = 1; temp != nullptr && cnt < x; cnt++) {
            temp = temp->next;
        }

        if (temp == nullptr) {
            return head;
        }

        if (temp->next != nullptr) {
            temp->next->prev = temp->prev;
        }
        
        if (temp->prev != nullptr) {
            temp->prev->next = temp->next;
        }

        delete temp;
        return head;
    }
};

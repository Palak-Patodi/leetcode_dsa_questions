//time complexity:o(n)
//space compexity:o(1)

class Solution {
public:
    Node* reverseList(Node* head) {
        Node* prev = nullptr;
        Node* curr = head;
        Node* next = nullptr;
        
        while (curr != nullptr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        return prev;
    }

    Node* addOne(Node* head) {
        head = reverseList(head);

        Node* curr = head;
        int carry = 1;

        while (curr != nullptr) {
            int sum = curr->data + carry;
            curr->data = sum % 10;
            carry = sum / 10;

            if (carry == 0) break;
            if (curr->next == nullptr && carry != 0) {
                curr->next = new Node(carry);
                carry = 0;
            }
            curr = curr->next;
        }

        return reverseList(head);
    }
};

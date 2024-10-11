class Solution {
  public:
    Node* addNode(Node* head, int pos, int data) {
        if (head == nullptr) return head;
        
         Node* current = head;
        for (int i = 0; i < pos; i++) {
            if (current->next == nullptr) break;
            current = current->next;
        }

        Node* newNode = new Node(data);

        newNode->next = current->next;  
        if (current->next != nullptr) { 
            current->next->prev = newNode;  
        }
        current->next = newNode;       
        newNode->prev = current;       

        return head;
    }
};
class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
       node* newnode=new node(x);
        if (head == NULL) {
        head = newNode;
        return head;
        }
        Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    
    temp->next = newNode;
    
    return head;
    }
};
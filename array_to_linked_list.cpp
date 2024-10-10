class Solution {
  public:
    Node* constructLL(vector<int>& arr) {
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for (int i = 1; i < n; i++) {
        temp->next = new Node(arr[i]); 
        temp = temp->next; 
    }
    
    return head; 
    }
};
class Solution {
  public:
    Node* constructDLL(vector<int>& arr) {
     int n=arr.size();
       if (n == 0) return NULL;
    Node* head = new Node(arr[0]);
    Node* current = head;
    for (int i = 1; i < n; i++) {
        Node* newNode = new Node(arr[i]);
        current->next = newNode;  
        newNode->prev = current;  
        current = newNode;       
    }
    return head;
        }
    };
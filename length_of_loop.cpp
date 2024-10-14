class Solution {
  public:
    int countNodesinLoop(Node *head) {
        Node* slow = head;
        Node* fast = head;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                return countLoopNodes(slow);
            }
        }
        return 0;  
    }
    private:
    int countLoopNodes(Node* meetPoint) {
        int count = 1;
        Node* temp = meetPoint->next;
        while (temp != meetPoint) {
            ++count;
            temp = temp->next;
        }
        return count;
    }
};
class Solution {
  public:
    int getCount(struct Node* head) {
         Node*temp=head;
         int count=0;
         while(temp!=NULL){
             temp=temp->next;
             count++;
         }
         return count;
    }
};

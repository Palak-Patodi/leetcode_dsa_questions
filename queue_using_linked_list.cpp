void MyQueue:: push(int x)
{
  QueueNode* newNode = new QueueNode(x);
    if (rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
}


int MyQueue :: pop()
{
    if (front == NULL) {
        return -1;
    }
    int poppedData = front->data;
    QueueNode* temp = front;
    
    front = front->next;

   
    if (front == NULL) {
        rear = NULL;
    }

    delete temp;

    return poppedData;
}

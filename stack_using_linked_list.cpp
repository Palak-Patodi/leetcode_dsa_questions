class MyStack {
private:
    struct StackNode {
        int data;
        StackNode* next;
    };

    StackNode* top; 

public:
    
    MyStack() {
        top = NULL;
    }

    void push(int x) {
        StackNode* temp = new StackNode();
        temp->data = x;
        temp->next = top;
        top = temp;
    }

    int pop() {
        if (top == NULL) { 
            return -1; 
        }

        int poppedValue = top->data;
        StackNode* temp = top;
        top = top->next;
        delete temp;

        return poppedValue;
    }

};
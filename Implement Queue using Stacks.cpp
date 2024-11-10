class MyQueue {
public:
    stack<int> front;
    stack<int> rear;
    MyQueue() {
        // dequeue the above limit
    }
    
    void push(int x) {
        while(!rear.empty()){
            front.push(rear.top());
            rear.pop();
        }
        rear.push(x);
        while(!front.empty()){
            rear.push(front.top());
            front.pop();
        }
    }
    
    int pop() {
        int element=rear.top();
        rear.pop();
        return element;
    }
    
    int peek() {
        return rear.top();
    }
    
    bool empty() {
        return rear.size()==0;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
class MinStack {
private:
    struct Node {
        int data;
        int min;
        Node* next;
        Node(int val, int minVal) : data(val), min(minVal), next(nullptr) {}
    };
    
    Node* topNode;

public:
    MinStack() {
        topNode = nullptr;
    }

    void push(int val) {
        if (topNode == nullptr) {
            topNode = new Node(val, val);
        } else {
            int currentMin = std::min(val, topNode->min);
            Node* newnode = new Node(val, currentMin);
            newnode->next = topNode;
            topNode = newnode;
        }
    }

    void pop() {
        if (topNode == nullptr) return;
        Node* temp = topNode;
        topNode = topNode->next;
        delete temp;
    }

    int top() {
        return (topNode != nullptr) ? topNode->data : -1;
    }

    int getMin() {
        return (topNode != nullptr) ? topNode->min : -1;
    }
};

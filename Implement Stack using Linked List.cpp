//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct StackNode {
    int data;
    StackNode *next;

    StackNode(int a) {
        data = a;
        next = NULL;
    }
};


// } Driver Code Ends
class MyStack {
  private:
    StackNode *top;

  public:
    void push(int x) {
        // code here
        // if(top==NULL){
        //     top->data=x;
        //     top->next=NULL;
        //     return;
        // }
        // StackNode* temp=top;
        // while(temp!=NULL){
        //     temp=temp->next;
        // }
        // temp->data=x;
        // temp->next=NULL;
        StackNode* newnode=new StackNode(x);
        newnode->next=top;
        top=newnode;
    }

    int pop() {
        // code here
        if(top==NULL) return -1;
        // if(top->next==NULL){
        //     int element=top->data;
        //     top=NULL;
        //     return element;
        // }
        // StackNode* temp=top;
        // while(temp->next!=NULL){
        //     if(temp->next->next==NULL){
        //         int element=temp->next->data;
        //         temp->next=NULL;
        //         return element;
        //     }else temp=temp->next;
        // }
        // return temp->data;
        int element=top->data;
        StackNode* temp=top;
        top=top->next;
        delete(temp);
        return element;
    }

    MyStack() { 
        top = NULL; 
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        MyStack *sq = new MyStack();
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        int n = nums.size();
        int i = 0;
        while (i < n) {
            int QueryType = nums[i++];
            if (QueryType == 1) {
                int a = nums[i++];
                sq->push(a);
            } else if (QueryType == 2) {
                cout << sq->pop() << " ";
            }
        }
        cout << endl;
        cout << "~"
             << "\n";
        delete sq;
    }
}

// } Driver Code Ends
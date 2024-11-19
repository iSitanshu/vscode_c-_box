//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  private:
    void solve(vector<int>& arr,int target,int ind,int sum){
        if(ind==arr.size()){
            if(sum==target){
                count++;
            }
            return;
        }
        solve(arr,target,ind+1,sum);
        solve(arr,target,ind+1,sum+arr[ind]);
    }
  public:
    int count=0;
    int perfectSum(vector<int>& arr, int target) {
        // code here
        solve(arr,target,0,0);
        return count;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int target;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> target;
        cin.ignore(); // Ignore newline character after target input

        Solution solution;
        cout << solution.perfectSum(arr, target);
        cout << "\n~\n";
    }

    return 0;
}

// } Driver Code Ends
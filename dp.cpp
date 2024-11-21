//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
private:
    long long countDistinctSubsequences(string s) {
        const long long MOD = 1e9 + 7;
        int n = s.length();
        vector<long long> dp(n + 1, 0);
        unordered_map<char, int> last_occurrence;

        dp[0] = 1; // Base case: empty string has one subsequence

        for (int i = 1; i <= n; i++) {
            dp[i] = (2 * dp[i - 1]) % MOD;

            char current = s[i - 1];
            if (last_occurrence.find(current) != last_occurrence.end()) {
                dp[i] = (dp[i] - dp[last_occurrence[current] - 1] + MOD) % MOD;
            }
            last_occurrence[current] = i; // Update last occurrence of the current character
        }

        return dp[n];
    }

public:
    string betterString(string str1, string str2) {
        long long count1 = countDistinctSubsequences(str1);
        long long count2 = countDistinctSubsequences(str2);

        if (count1 > count2) return str1;
        if (count2 > count1) return str2;
        return str1; // If counts are equal, return str1
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str1, str2;
        // cin
        cin >> str1 >> str2;
        Solution obj;
        string ans = obj.betterString(str1, str2);
        cout << ans << "\n";

        cout << "~" << "\n";
    }
    return 0;
}
// } Driver Code Ends

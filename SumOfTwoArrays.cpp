#include <bits/stdc++.h> 
int ReturnNumber(vector<int>& a, int n) {
    string num = "";
    for (int i = 0; i < n; i++)
        num += to_string(a[i]);
    return stoi(num);
}

vector<int> findArraySum(vector<int>& a, int n, vector<int>& b, int m) {
    int s = ReturnNumber(a, n) + ReturnNumber(b, m);
    vector<int> ans;
    string str = to_string(s);
    for (int i = 0; i < str.length(); i++) {
        ans.push_back(str[i] - '0'); // Convert character to integer
    }
    return ans;
}

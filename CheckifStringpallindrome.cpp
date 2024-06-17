#include <bits/stdc++.h> 
void setString(string &str)
{

    for (int i = 0; i < str.size(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] - 'A' + 'a';
        }
    }
}
bool checkPalindrome(string s)
{
    int i = 0, e = s.size() - 1;
    int size = e;
    setString(s);
    while (i <= e) {
        while (!((s[i] >=  'a' && s[i] <='z') || (s[i] >='0' && s[i] <='9')))
                 i++;
        
        while (!((s[e] >=  'a' && s[e] <='z') || (s[e] >='0' && s[e] <='9')))    
            e--;

        if (i > size && e < 0)
            return true;
        if (s[i] != s[e]) 
             return false;
        
        i++;
        e--;
    }
    return true;
}

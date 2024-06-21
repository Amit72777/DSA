class Solution {
public:
    int compress(vector<char>&chars) 
{
       int i = 0, addindex = 0,n = chars.size();
       while (i<n){
        int j = i+1;
          while (j<n && chars[i] == chars[j]){
              j++;
        }
        chars[addindex++] = chars[i];
        int cnt = j-i;
        if (cnt > 1)
       { 
            string cntstr = to_string(cnt);
            for(char ch: cntstr){
                chars[addindex++] = ch;
            }
       }
           i = j;
       }
       return addindex;
    }
};

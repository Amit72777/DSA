#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
   int size = arr.size();
   vector<vector<int>>ans;
   for(int i=0;i<size;i++)
   {
      for(int j=i+1;j<size;j++)
      {
         if (arr[i]+arr[j] ==s)
         {
            ans.push_back({min(arr[i],arr[j]),max(arr[i],arr[j])});

         } 
      }
   }
   sort(ans.begin(), ans.end());
   return ans;
}

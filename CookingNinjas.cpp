#include <bits/stdc++.h> 
bool isPossible(vector<int> &rank, int size, int m, int mid)  // check mid is possible solution or not 
{
    int time =0;
    int food = 0;
    for (int i = 0; i<size; i++)
    {
        time = rank[i];
        int j = 2;
        while(time<=mid)
        {
            food++;
            time = time + (rank[i]*j);
            j++;
        }
        if (food >= m) return true;
    }
    return false;
}
int minCookTime(vector<int> &rank, int m)
{   
    int start = 0, end = 0, size = rank.size();
    int ans = -1;
    for (int i = 1;i<=m;i++)
        end += rank[size -1 ] * i;
    
    while(start<=end)
    {   int mid = start + (end -start)/2;
        if (isPossible(rank, size, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else 
            start  = mid +1;
    }
    return ans;
}

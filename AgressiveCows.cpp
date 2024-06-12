bool isPossible(vector<int>&stalls, int size, int k, int mid)
{   
    int coutCows = 1;
    int lastPosition = stalls[0];

    for(int i = 0; i < size; i++)
    {
      if (stalls[i] - lastPosition >= mid) {
        coutCows++;
        if (coutCows == k)
          return true;
        lastPosition = stalls[i];
      }
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int maxi  =-1 ;
    int size = stalls.size();
    for(int i = 0 ;i< size;i++)
    {
    
            maxi =  max(maxi, stalls[i]);
    }
    int s = 0, e = maxi, ans = -1;
    int mid = s + (e - s)/2;
    while(s<=e)
    {
        if (isPossible(stalls,size , k , mid))
        {    ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    }
    return ans ;
}

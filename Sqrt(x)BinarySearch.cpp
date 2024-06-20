class Solution {
public:
    int mySqrt(int x) {
        int s=1, e=x, ans = 0;
        if (x==1) return 1;
        while(s<e){
            long long  mid = s+(e-s)/2;
            long long int sqr = mid * mid;
            if (sqr <= x){ 
                ans = mid;
                s = mid+1;
            }
            else
             e = mid;
        }
        return ans;
    }
};

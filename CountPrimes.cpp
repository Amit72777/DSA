class Solution {
public:
    int countPrimes(int n) 
    {
        int num = 0;
        vector<bool>prime(n+2, true); // set all prime  inittaly 
        prime[0] = prime[1] = false; // 0 & 1 set non prime 
        for(int i = 2; i<n ;i++ ){
            if (prime[i]){
                num++;
                for(int j=2*i;j<n;j+=i){
                    prime[j] = 0; // a number  prime number divisible are not prime 
                }
            }
        }
        return num;
    }
};

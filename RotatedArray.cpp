class Solution {
public:
    void reverse(vector<int>& nums, int m, int n){
        while(m<=n){
            swap(nums[m], nums[n]);
            m++, n--;
        }
    }

    void rotate(vector<int>& nums, int k) {
        int size = nums.size() - 1;
        if (k > size)
            k = k % (size +1);
        reverse(nums, 0, size );
        reverse(nums, 0, k - 1);
        reverse(nums, k, size);
    }
};

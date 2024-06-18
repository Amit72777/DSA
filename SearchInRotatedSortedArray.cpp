#include <algorithm>
int search(vector<int>& arr, int n, int k)
{
  auto min_it = min_element(arr.begin(), arr.end());
    int min_index = distance(arr.begin(), min_it);
    int pivot = min_index;

    int s, e;
    if (arr[0] <= k && k <= arr[pivot - 1]) { 
        s = 0;
        e = pivot - 1; 
    } else {
        s = pivot;
        e = n - 1; 
    }
    
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] == k) {
            return mid;
        } else if (arr[mid] < k) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    
    return -1;

}

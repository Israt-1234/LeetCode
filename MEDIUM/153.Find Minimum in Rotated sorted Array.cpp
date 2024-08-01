class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int l = 0; int r = n-1;
        while(l<r){
            int mid = (l+r)/2;
            if(nums[mid] <= nums[r])
            r = mid;
            else if(nums[mid] >= nums[l])
            l = mid+1;
            else
            return nums[l];
            
        }
        return nums[l];
    }
};

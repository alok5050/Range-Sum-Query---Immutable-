class NumArray {
    vector <int> prefixSum;
public:
    NumArray(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n; ++i) {
            if(i == 0)
               prefixSum.push_back(nums[0]);
            else
            prefixSum.push_back(prefixSum.back() + nums[i]);
        }
    }
    
    int sumRange(int left, int right) {
         
        if(left == 0) return prefixSum[right];
        return prefixSum[right] - prefixSum[left - 1];  
    }
};

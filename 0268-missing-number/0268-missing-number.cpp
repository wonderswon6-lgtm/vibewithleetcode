
class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n = nums.size();

        // Step 1: Expected sum
        int sum = n * (n + 1) / 2;

        // Step 2: Actual sum
        int s2 = 0;

        for(int i = 0; i < n; i++)
        {
            s2 += nums[i];
        }

        // Step 3: Missing number
        return sum - s2;
    }
};

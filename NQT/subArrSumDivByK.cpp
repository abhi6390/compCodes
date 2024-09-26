class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k){

        // Optimal very similar to subarray sum equals k
        int count=0;
        if (nums.size()==1) 
            return nums[0]%k==0 ? 1 : 0;
        
        unordered_map<int, int> remainderCount;
        
        remainderCount[0]=1;
        int sum=0;
        
        for (int num : nums) {
            sum += num;

            int remainder = sum%k;
            if (remainder < 0) {
                remainder += k;
            }
            
            if (remainderCount.find(remainder)!=remainderCount.end()) {
                count += remainderCount[remainder];
            }
            remainderCount[remainder]++;
        }
        
        return count;
    }
};

/*
// BRUTEEE, T_T, gave TLE
        int count=0;
        if (nums.size()==1) {
            return nums[0]%k==0 ? 1 : 0;
        }

        for(int i =0; i<nums.size();i++)
        {
            int sum=0;
            for(int j=i; j<nums.size();j++)
            {
                sum+=nums[j];

                if(sum%k==0)
                    count++;

            }

        }
        return count;
    */

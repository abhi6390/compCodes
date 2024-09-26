class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // OPTIMAL using hashmaps
        int count=0;

        int n=nums.size();
        if(n==0)
            return 0;

        if (n==1) {
            return nums[0]==k ? 1 : 0;
        }

        unordered_map<int, int> prefixSum; //storing prefixSum in map, arr[i]+arr[i-1]
        int sum=0;

        for(int i=0; i<n; i++){
            sum+=nums[i];

            if(sum==k)
                count++;

            //check if the sum was present previously, if yes then update
            if(prefixSum.find(sum-k)!=prefixSum.end())
                count+=prefixSum[sum-k];

            prefixSum[sum]++;                                
        }
        return count;
    }
};

// BRUTE
/*

        if(nums.size()==0)
            return 0;

        if (nums.size()==1) {
            return nums[0] == k ? 1 : 0;
        }

        int count=0;
        for(int i=0; i<nums.size();i++)
        {
            int sum=0;
            for(int j=i; j<nums.size();j++){
                sum+=nums[j];

                if(sum==k)
                    count++;
            }
        }
        return count;


*/

// TC O(N*logN)
// SC O(1)

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        sort(nums.begin(),nums.end());
        int cnt=1;
        int d=nums[0];
        int res=1;
        for(int i=1;i<nums.size();i++){
           if(nums[i]==d+1) 
           {
              cnt++;
           }
           else if(nums[i]!=d)
           {
               cnt=1;
           }
           
           d=nums[i];
           res=max(res,cnt);
        }
        
        return res;
    }
};


// optimised code will discuss later

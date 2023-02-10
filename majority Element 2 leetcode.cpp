class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
    int k=nums.size()/3;
    unordered_map<int,int> mps;
    vector<int> result;
    for(auto it:nums){
    mps[it]++;
    }
    for(auto it:mps){
    if(it.second>k) {
    result.push_back(it.first);
    }
    }
    return result;
    }
    }

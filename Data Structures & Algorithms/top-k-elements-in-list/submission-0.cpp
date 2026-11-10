class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans; 
        unordered_map<int,int> umap;
        for(auto x : nums){
             umap[x]++;
        }
       vector<vector<int>> buckets(nums.size()+1);
           for(auto &[num,freq]:umap){
            buckets[freq].push_back(num);
           }
        for(int i=nums.size();i>=1;i--){
            for(auto x:buckets[i]){
                 ans.push_back(x);      
                if(ans.size()==k)
                return ans;
            }
        }
        return ans;
    }
};

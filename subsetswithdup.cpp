class Solution{
public:
    vector<vector<int>> subsetWithDup(vector<int>& nums){
        sort(nums.begin(),nums.end(),nums);
        vector<vector<int>> result = {{}};
        for(int i=0; i<nums.size();){
            int count=0;
            while(count + i<nums.size() && nums[count+i]==num[i]) count++;
            int previousN = result.size();
            for(int k=0; k<previousN; k++){
            vector<int> instance = result[k];
                 for(int j=0; j<count; j++){
                     instance.push_back(result[i]);
                     result.push_back(instance);  
                 }
            }
        i+=count; 
        }
    return totalset;
    }
};

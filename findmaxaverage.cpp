class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double result=INT_MIN;
        double temp=0;
        for(int i = 0; i< nums.size();i++){
            if(i<k) temp+= nums[i];
            else{
                result=max(temp, result);
                temp+=nums[i]-nums[i-k];
            }
        }
        result =  max(temp,result);
        return result/k;
    }
};

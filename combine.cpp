class Solution {
	public:
        vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result1;
	if(k==n || k==0){
	    vector<vector<int>> result;
	    vector<int> row;
	    for(int i = 1; i <= k; ++i) row.push_back(i);
	        result.push_back(row);
	    return result;
	}
	vector<vector<int>> result;
	result = combine(n-1, k-1);
	for(auto it = result.begin(); it != result.end(); ++it){
		it->push_back(n);
	}
   	result1 = combine(n-1, k);
	result.insert(result.end(), result1.begin(), result1.end());
	return result;
	}
};

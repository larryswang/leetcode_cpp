class Solution {
	public:
		int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
			unordered_map<int, int> abSum;    
			for(int i = 0; i < A.size(); ++i){
				for(int j = 0; j < B.size(); ++j){
					abSum[A[i]+B[j]]++;
				}
			}
			int result=0;
			for(int i = 0; i < C.size() ; ++i){
				for(int j = 0; j < D.size(); ++j){
					auto it = abSum.find(-C[i]-D[j]);
					if(it != abSum.end())
						result+=it->second;
				}
			}
			return result;
		}
};

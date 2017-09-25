class Solution{
public:
    vector<int> topKFrequent(vector<int>& nums, int k){
        unordered_map <int,int> map;
        for(int num : nums){
            map[num]++;
        }

        vector<int> result;
        priority_queue<pair<int, int>> queue;
        for(auto it = map.begin(); it != map.end(); ++it){
            queue.push(make_pair(it->second, it->first));
            if (queue.size() > (int)map.size() - k){
                result.push_back(queue.top().second);
                queue.pop();
            }
        }
        return result;
    }
};

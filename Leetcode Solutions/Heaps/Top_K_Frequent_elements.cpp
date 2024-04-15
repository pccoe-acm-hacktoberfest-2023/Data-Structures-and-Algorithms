class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for (auto it : nums) {
            mp[it]++;
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> min_heap;

        for (auto it : mp) {
            min_heap.push({ it.second, it.first });

            if (min_heap.size() > k) {
                min_heap.pop();
            }
        }

        vector<int> v;
        while (!min_heap.empty()) {
            v.push_back(min_heap.top().second);
            min_heap.pop();
        }

   

        return v;
    }
};

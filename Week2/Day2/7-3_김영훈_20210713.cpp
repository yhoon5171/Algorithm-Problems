bool compare(pair<int, int> a, pair<int, int> b){
    return a.second < b.second;
}

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> count;

        for (int i = 0; i < nums.size(); i++){
            if (count.find(nums[i]) != count.end())
                count[nums[i]]++;
            else count.insert(make_pair(nums[i], 1));
        }

        int max = max_element(count.begin(), count.end(), compare) -> first;

        return max;
    }
};
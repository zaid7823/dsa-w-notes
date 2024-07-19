// Brute is n^2, check every element with every other element
// Better Approach includes using a hashmap

vector < int > twoSum(vector < int > & nums, int target) {
    map<int, int> value;
    int first, second;
    for (int i = 0; i < nums.size(); i++) {
        if (value.find(target-nums[i]) != value.end()) {
            first = i;
            second = value[target-nums[i]];
            break;
        }
        else {
            value.insert({nums[i], i});
        }
    }
    return {second, first};
}

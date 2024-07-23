int missingNumber(vector < int > & nums) {
    int max = nums.size();
    int missing;
    max = max * (max + 1) / 2;
    for (auto it: nums) {
        missing = max = max - it;
    }
    return missing;
}

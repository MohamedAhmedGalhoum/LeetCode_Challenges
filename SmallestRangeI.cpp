// The intuition overhere is that, max(nums) and min(nums) are the ONLY two KEY variables in play here. Every other number can be fit in between and literally does not matter.

// So IF min(nums) + k ≥ max(nums) - k

// This means that we can add k or subtract k to EVERY NUMBER in the list, and somehow

// make them equal. So the difference would be equal to zero eventually

// else if min(nums) + k < max(nums) - k

// So this means we cannot level all numbers or make them equal. So the best difference we can get is basically their difference.

// [ max(nums) - k ] - [ min(nums) + k ]

class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        auto [Min, Max] = minmax_element(nums.begin(), nums.end());
        return max<int>(0, *Max - *Min - 2 * k);
    }
};

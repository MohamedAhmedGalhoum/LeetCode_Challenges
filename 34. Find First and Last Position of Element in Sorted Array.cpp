#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
    int RbinarySearch(const vector<int>& arr, int target) {
        int left = 0;
        int right = static_cast<int>(arr.size()) - 1;
        int mnPos = -1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] == target) {
                mnPos = mid;
                right = mid - 1; 
            } else if (arr[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return mnPos;
    }
    int LbinarySearch(const vector<int>& arr, int target) {
        int left = 0;
        int right = static_cast<int>(arr.size()) - 1;
        int mxPos = -1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] == target) {
                mxPos = mid;
                left = mid + 1; 
            } else if (arr[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return mxPos;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int firstPos = RbinarySearch(nums, target);
        if (firstPos == -1) {
            return {-1, -1};
        }
        int secondPos = LbinarySearch(nums, target);
        return {firstPos, secondPos};
    }
};

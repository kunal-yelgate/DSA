class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxValue = 0;
        int left = 0;
        int right = height.size() - 1;

        while( left <= right) {
            int area = min(height[left], height[right]);
            int width = right - left;
            int value = area * width;
            maxValue = max(maxValue, value);

            if(height[left] <= height[right]) {
                left++;
            } else {
                right--;
            }
        }
        return maxValue;
    }
};
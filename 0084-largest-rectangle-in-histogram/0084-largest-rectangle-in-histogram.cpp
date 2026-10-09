class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> ans(n, n);

        stack<int> st;

        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop();
            }
            if (!st.empty())
                ans[i] = st.top();
            st.push(i);
        }

        vector<int> ans1(n, -1);

        stack<int> st1;

        for (int i = 0; i < n; i++) {
            while (!st1.empty() && heights[st1.top()] >= heights[i]) {
                st1.pop();
            }
            if (!st1.empty())
                ans1[i] = st1.top();
            st1.push(i);
        }

        int maxArea = 0;

        for (int i = 0; i < n; i++) {
            int r = ans[i];
            int l = ans1[i];

            int width = r - l - 1;
            int area = heights[i] * width;

            if (area > maxArea) {
                maxArea = area;
            }
        }

        return maxArea;
    }
};
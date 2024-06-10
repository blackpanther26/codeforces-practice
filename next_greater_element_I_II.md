# NEXT GREATER ELEMENT I
// class Solution {
// public:
//     vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
//         vector<int> nge(nums1.size(), -1);
//         stack<int> st;
//         map<int,int> mp;
//         for (int num : nums2) {
//             while (!st.empty() && st.top() < num) {
//                 mp[st.top()] = num;
//                 st.pop();
//             }
//             st.push(num);
//         }
//         for (int i = 0; i < nums1.size(); i++) {
//             if (mp[nums1[i]])
//                 nge[i] = mp[nums1[i]];
//         }
//         return nge;
//     }
// };

# NEXT GREATER ELEMENT II
// class Solution {
// public:
//     vector<int> nextGreaterElements(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> v(n, -1);
//         stack<int> st;
//         for (int i = 2 * n - 1; i >= 0; i--) {
//             while (!st.empty() && (nums[i % n] >= st.top()))
//                 st.pop();
//             if (!st.empty() && (i < n))
//                 v[i] = st.top();
//             st.push(nums[i % n]);
//         }
//         return v;
//     }
// };
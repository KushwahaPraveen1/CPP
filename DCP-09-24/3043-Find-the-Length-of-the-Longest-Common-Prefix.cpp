class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        set<int> st;
        for (auto num : arr1) {
            while (num > 0) {
                st.insert(num);
                num /= 10;
            }
        }
        int maxi = 0;
        for (auto num : arr2) {
            int temp = num;
            while (temp > 0) {

                if (st.find(temp) != st.end()) {
                    int len = (int)log10(temp) + 1;
                    maxi = max(maxi, len);
                    break;
                }
                temp /= 10;
            }
        }
        return maxi;
    }
};
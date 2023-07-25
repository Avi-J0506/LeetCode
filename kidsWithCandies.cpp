class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
                vector<bool> result;
        int len = candies.size();
        for (int i = 0; i < len; i++) {
            int m = candies[i] + extraCandies;
            bool canHaveMostCandies = true;
            for (int j = 0; j < len; j++) {
                if (i != j && candies[j] > m) {
                    canHaveMostCandies = false;
                    break;
                }
            }
            result.push_back(canHaveMostCandies);
        }
        return result;
    }
};
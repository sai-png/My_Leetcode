class Solution {
private:
    int MOD = 1e9+7;
    int eval_product(int a, int b) {
        if (1LL * a * b > 1e9) {
            return -1;
        }
        return a * b;
    }
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        unordered_map<int, int> trees;
        for (int x: arr) {
            trees[x] = 1;
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j <= i; ++j) {
                if (trees.count(eval_product(arr[i], arr[j])) > 0) {
                    trees[arr[i] * arr[j]] += 1LL * trees[arr[i]] * trees[arr[j]] * (i != j ? 2 : 1) % MOD;
                    trees[arr[i] * arr[j]] %= MOD;
                } else if (1LL * arr[i] * arr[j] > arr.back()) {
                    break;
                }
            }
        }
        int ret = 0;
        for (auto p: trees) {
            ret += p.second;
            ret %= MOD;
        }
        return ret;
    }
};
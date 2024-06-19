#include <iostream>
#include <vector>

using namespace std;

int findMinHeightPlanks(int n, int k, const vector<int>& heights) {
    int current_sum = 0;
    for (int i = 0; i < k; ++i) {
        current_sum += heights[i];
    }

    int min_sum = current_sum;
    int min_index = 0;

    for (int i = 1; i <= n - k; ++i) {
        current_sum = current_sum - heights[i - 1] + heights[i + k - 1];
        if (current_sum < min_sum) {
            min_sum = current_sum;
            min_index = i;
        }
    }

    return min_index + 1;  
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> heights(n);
    for (int i = 0; i < n; ++i) {
        cin >> heights[i];
    }

    cout << findMinHeightPlanks(n, k, heights) << endl;

    return 0;
}

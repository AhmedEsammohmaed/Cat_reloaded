#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals) {
    // Step 1: Sort the intervals based on their starting times
    sort(intervals.begin(), intervals.end());

    // Step 2: Initialize the merged intervals vector
    vector<vector<int>> merged;

    for (const auto& interval : intervals) {
        // If merged is empty or there is no overlap, add the interval
        if (merged.empty() || merged.back()[1] < interval[0]) {
            merged.push_back(interval);
        }
        // If there is an overlap, merge the intervals
        else {
            merged.back()[1] = max(merged.back()[1], interval[1]);
        }
    }

    return merged;
}

int main() {
    vector<vector<int>> intervals = { {1, 3}, {2, 6}, {8, 10}, {15, 18} };

    vector<vector<int>> mergedIntervals = merge(intervals);

    // Output the merged intervals
    cout << "Merged intervals: " << endl;
    for (const auto& interval : mergedIntervals) {
        cout << "[" << interval[0] << ", " << interval[1] << "] ";
    }
    cout << endl;

    return 0;
}
/*
Given an array arr[] containing only non-negative integers, your task is to find a continuous subarray (a contiguous sequence of elements) whose sum equals a specified value target. You need to return the 1-based indices of the leftmost and rightmost elements of this subarray. You need to find the first subarray whose sum is equal to the target.

Note: If no such array is possible then, return [-1].

Examples:

Input: arr[] = [1, 2, 3, 7, 5], target = 12
Output: [2, 4]
Explanation: The sum of elements from 2nd to 4th position is 12.
Input: arr[] = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10], target = 15
Output: [1, 5]
Explanation: The sum of elements from 1st to 5th position is 15.
Input: arr[] = [5, 3, 4], target = 2
Output: [-1]
Explanation: There is no subarray with sum 2.

*/


#include <iostream>
#include <vector>
using namespace std;

vector<int> subarraySum(vector<int> &arr, int target) {
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        int sum = arr[i];

        // Check single element first
        if (sum == target) {
            return {i + 1, i + 1};
        }

        for (int j = i + 1; j < n; j++) {
            sum += arr[j];

            if (sum == target) {
                return {i + 1, j + 1}; // 1-based indexing
            }
            else if (sum > target) {
                break; // Since array has non-negative numbers
            }
        }
    }

    return {-1};
}

int main() {
    int length;
    cout << "Please enter size of array: ";
    cin >> length;

    vector<int> arr(length);
    cout << "Enter " << length << " array elements:" << endl;
    for (int i = 0; i < length; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter target: ";
    cin >> target;

    vector<int> res = subarraySum(arr, target);

    cout << "Output: ";
    for (int x : res) {
        cout << x << " ";
    }
    cout << endl;
}

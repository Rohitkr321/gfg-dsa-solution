/* 
You are given an array arr[] of size n - 1 that contains distinct integers in the range from 1 to n (inclusive). This array represents a permutation of the integers from 1 to n with one element missing. Your task is to identify and return the missing element.

Examples:

Input: arr[] = [1, 2, 3, 5]
Output: 4
Explanation: All the numbers from 1 to 5 are present except 4.
Input: arr[] = [8, 2, 4, 5, 3, 7, 1]
Output: 6
Explanation: All the numbers from 1 to 8 are present except 6.
*/

#include <bits/stdc++.h>
using namespace std;

int missingNum(vector<int> &arr)
{
    sort(arr.begin(), arr.end());

    if (arr[0] != 1)
        return 1;

    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (arr[i + 1] != arr[i] + 1)
        {
            return arr[i] + 1;
        }
    }
    return arr.back() + 1;
}
int main()
{
    int length;
    cout << "Please enter size of array" << endl;
    cin >> length;
    vector<int> arr(length);
    cout << "Enter " << length << " array elements:" << endl;
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }
    int res = missingNum(arr);
    cout << "Missing number is "<< res;
}
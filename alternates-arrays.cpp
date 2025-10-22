/* You are given an array arr[], the task is to return a list elements of arr in alternate order (starting from index 0).
Examples:
Input: arr[] = [1, 2, 3, 4]
Output: 1 3
Explanation:
Take first element: 1
Skip second element: 2
Take third element: 3
Skip fourth element: 4
*/


# include<iostream>
# include<vector>
using namespace std;


vector<int> getalternates(vector<int> &arr) {
    vector <int> res;
    for (int i = 0; i< arr.size(); i+=2) {
        res.push_back(arr[i]);
    }
    return res;
}

int main () {
    int length;
    cout << "Please enter size of array"<< endl;
    cin>>length;
    vector<int>arr(length);
    cout << "Enter " << length << " array elements:" << endl;
    for (int i = 0; i< length; i++) {
        cin >> arr[i];
    }
    vector<int> res = getalternates(arr);
    for (int x : res) {
        cout << x << " ";
    }
}
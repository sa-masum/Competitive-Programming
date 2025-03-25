#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findFrequency(vector<int> arr, int x) {
        map<long long, int> count;
        for(auto u: arr){
            count[u]++;
        }
        return count[x];
    }
};

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        int x;
        cin >> x;
        cin.ignore();
        Solution ob;
        cout << ob.findFrequency(arr, x) << endl;
    }

    return 0;
}
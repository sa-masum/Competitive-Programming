#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string maximumFrequency(string& s) {
        string word, max_word;
        int maX = 0;
        vector<string> words;
        map<string, int> count;
        for(auto u : s){
            if(isspace(u)){
                words.push_back(word);
                count[word]++;
                maX = max(maX, count[word]);
                word.clear();
            }else{
                word += u;
            }
        }
        words.push_back(word);
        count[word]++;
        maX = max(maX, count[word]);

        string final;
        for(auto u : words){
            if(maX == count[u]){
                final = u + " " + to_string(maX);
                break;
            }
        }
        return final;
    }
};

int main() {
    int t;
    cin >> t;
    cin.ignore();

    for (int i = 0; i < t; i++) {

        string str;
        getline(cin, str);
        Solution ob;

        cout << ob.maximumFrequency(str) << endl;
        cout << "~" << endl;
    }
    return 0;
}
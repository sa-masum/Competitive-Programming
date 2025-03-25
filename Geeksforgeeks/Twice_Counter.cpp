#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        int countWords(string list[], int n)
        {
            int result = 0;
            map<string, int> count;
            for(int i=0; i<n; i++){
                count[list[i]]++;
                if(count[list[i]] == 2){
                    result++;
                }else if(count[list[i]] == 3){
                    result--;
                }
            }
            return result;
        }

};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string list[n];
        for(int i=0;i<n;i++)
            cin>>list[i];
        Solution ob;    
        cout <<ob.countWords(list, n)<<endl;
    
cout << "~" << "\n";
}
    return 0;
}
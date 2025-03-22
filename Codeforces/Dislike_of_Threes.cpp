#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    int num=1;
    vector<int>out;
    for(int i=1; out.size()<=1000; i++){
        if(num%3 != 0 && num%10 != 3){
            out.push_back(num);
            num++;
        }else{
            num++;
        }
    }
    while(t--){
        int k;
        cin >> k;
        cout << out[k-1] << endl;
    }
return 0;
}
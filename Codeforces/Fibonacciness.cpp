#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int num[5], count=0, count2=0;
        cin >> num[0] >> num[1] >> num[3] >> num[4];
        num[2] = num[0] + num[1];
        for(int i=0; i<=2; i++){
            if(num[i] + num[i+1] == num[i+2]){
                count++;
            }
        }
        num[2] = num[4] - num[3];
        for(int i=4; i>=2; i--){
            if(num[i] - num[i-1] == num[i-2]){
                count2++;
            }
        }
        if(count2 > count){
            count = count2;
        }
        cout << count << endl;
    }
return 0;
}
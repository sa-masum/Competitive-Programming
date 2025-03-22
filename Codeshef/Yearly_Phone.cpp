#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int current;
    cin >> current;
    int digit = current % 100;
    if(digit < 10){
        cout << "K0" << digit << endl;
    }else{
        cout << "K" << digit << endl;
    }
return 0;
}
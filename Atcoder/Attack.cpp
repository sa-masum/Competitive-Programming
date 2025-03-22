#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long stamina, mair, attack;
    cin >> stamina >> mair;
    if(stamina % mair != 0){
        attack = stamina / mair + 1;
        cout << attack << endl;
    }else{
        attack = stamina / mair;
        cout << attack << endl;
    }
return 0;
}
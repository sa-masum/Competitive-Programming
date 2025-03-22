#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int base, power;
    long long result;
    cin >> base >> power;
    result = (long long) pow(base, power);
    cout << result << endl;
return 0;
}
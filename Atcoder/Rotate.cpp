#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int num;
    cin >> num;
    int a, b, c;
    a = num / 100;
    b = (num % 100) / 10;
    c = num % 10;
    int sum = num + (b * 100 + c * 10 + a) + (c * 100 + a * 10 + b);
    cout << sum;
return 0;
}
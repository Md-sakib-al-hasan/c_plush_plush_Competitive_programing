#include <bits/stdc++.h>
using namespace std;

int main () {
    int a , b ;
    cin >> a >> b ;
    int result = max( max((a +(a - 1) ) , ( b + ( b - 1))), max(a  ,  b )) ;
    int finalresult = max(result , (a + b)) ;
    cout << finalresult << endl;
    return 0 ;
    
}
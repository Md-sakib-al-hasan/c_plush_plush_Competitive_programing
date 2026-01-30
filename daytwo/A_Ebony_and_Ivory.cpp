#include <bits/stdc++.h>
using namespace std;

int gcd (int a , int b) {
    while (b != 0)
    {
        int r = a % b ;
          a = b ;
          b = r ;
    }
    return a ;
    
}

int main () {
    int a, b, c ;
    cin >> a >> b >> c ;

    int g = gcd(a,b);
    if (c % g == 0) {
        cout << "Yes" ;
    }else {
        cout << "No" ;
    }
    return 0 ;
}
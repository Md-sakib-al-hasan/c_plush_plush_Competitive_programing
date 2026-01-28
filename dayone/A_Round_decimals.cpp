#include <bits/stdc++.h>
using namespace std;

int main () {
    string x ;
    cin >> x ;
    int length = 4 - x.length() ;
    string totaldigit = "0000" ;
    cout << totaldigit.substr(0,length) + x << endl;

    

    return 0;
    
     
}
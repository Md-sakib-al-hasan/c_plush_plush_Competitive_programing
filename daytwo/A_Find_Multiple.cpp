#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int result;
    int incrementnumber = 1;
    bool looping = false;

    while (!looping) {
        result = c * incrementnumber;

        if (a <= result && result <= b) {
            looping = true;
        }
        else if (result > b) {
            result = -1;
            looping = true;
        }

        incrementnumber++; 
    }

    cout << result << endl;
}

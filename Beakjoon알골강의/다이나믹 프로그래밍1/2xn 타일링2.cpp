#include <iostream>

using namespace std;

int main(){
    int d[1000];

    d[1] = 1;
    d[2] = 3;

    int n;
    cin >> n;

    for (int i = 3; i <= n; i++){
        d[i] = (d[i-1] + 2*d[i-2]) % 10007;
    }

    cout << d[n] << endl;
    return 0;
}
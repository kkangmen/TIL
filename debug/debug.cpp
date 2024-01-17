#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int, int);

int main(){
    int n, s;
    int max_d = 0;

    cin >> n >> s;

    int bro[n];
    int distance[n];

    for (int i = 0; i < n; i++){
        cin >> bro[i];
        
        if (s > bro[i]){
            distance[i] = s - bro[i];
        }
        else {
            distance[i] = bro[i] - s;
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            max_d = max(max_d, gcd(distance[i], distance[j]));
        }
    }

    cout << max_d << '\n';
    return 0;
}

int gcd(int a, int b){
    if (b == 0){
        return a;
    }
    int r = a%b;
    a = b;
    b = r;

    return gcd(a, b);
}
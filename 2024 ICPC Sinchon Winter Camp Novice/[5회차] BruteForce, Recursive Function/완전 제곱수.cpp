#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int cnt = 0;
    for (int i = 1; i < 501; i++){
        for (int j = 1; j < 501; j++){
            if (i*i - j*j == n){
                cnt++;
            }
        }
    }

    cout << cnt << '\n';
    return 0;
}
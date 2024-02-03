#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int a[200001];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    int l = 0;
    int r = 1;
    int ans = 1;
    while (r < n){
        vector<int> v(10);
        int cnt = 0;
        for (int i = l; i <= r; i++){
            v[a[i]]++;
        }

        for (int i = 0; i <= 9; i++){
            if (v[i] > 0){
                cnt++;
            }
        }

        if (cnt > 2){
            v.clear();
            l++;
        }
        else {
            ans = max(ans, r-l+1);
            v.clear();
            r++;
        }
    }
    cout << ans << '\n';
    return 0;
}
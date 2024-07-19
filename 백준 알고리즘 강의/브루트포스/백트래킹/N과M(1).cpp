#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isused[10];
int a[10];
int n, m;
void func(int x)
{
    if (x == m){
        for (int i = 0; i < m; i++){
            cout << a[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for (int i = 1; i <= n; i++){
        if (isused[i] == false){
            isused[i] = true;
            a[x] = i;
            func(x+1);
            isused[i] = false;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    func(0);
    return 0;
}
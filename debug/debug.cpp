#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    int num;
    int mem = 1;
    stack <int> stack;
    vector <char> v;

    cin >> n;

    while (n--){
        cin >> num;

        if (mem == 1){
            v.push_back('+');
            stack.push(1);
        }
        if (num >= mem){
            for (int i = mem + 1; i <= num; i++){
                v.push_back('+');
                stack.push(i);
                mem = num;
            }
        }

        if (stack.top() == num){
            v.push_back('-');
            stack.pop();
            if (stack.empty()){
                for (int i = 0; i < v.size(); i++){
                    cout << v[i] << '\n';
                }
            }
        }
        else {
            cout << "NO" << '\n';
            break;
        }
    }
    return 0;
}
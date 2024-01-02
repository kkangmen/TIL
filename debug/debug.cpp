#include <iostream>
#include <vector>
#include <deque>
#include <cstdlib>

using namespace std;

int main(){
    int n;
    int result = 0;
    int minus = 0;
    int absminus = 0;
    vector <int> v;
    deque <int> dq;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++){
        dq.push_back(arr[i]);
    }

    while (!dq.empty()){
        for (int i = 0; i < n; i++){
            if (dq.front() > 0){
                result = dq.front();
                for (int j = 0; j < n; j++){
                    if (arr[j] == result){
                        v.push_back(j+1);
                        break;
                    }
                }
                minus = dq.front();
                dq.pop_front();
                while (minus-1){
                    dq.push_back(dq.front());
                    dq.pop_front();
                    minus--;
                }
            }
            else {
                result = dq.front();
                for (int j = 0; j < n; j++){
                    if (arr[j] == result){
                        v.push_back(j+1);
                        break;
                    }
                }
                minus = dq.front();
                absminus = abs(minus);
                dq.pop_front();
                while (absminus){
                    dq.push_front(dq.back());
                    dq.pop_back();
                    absminus--;
                }
            }
        }
    }

    for (int i = 0 ; i < v.size(); i++){
        cout << v[i] << ' ';
    }
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int n = 5;
    for (int i = 0; i < n; i++){
        for (int j = n - 1; j > i; j--){
            cout << "  ";
        }
        for (int k = 0; k <= i; k++){
            if (k == 0 || i == n-1 || i == k){
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}
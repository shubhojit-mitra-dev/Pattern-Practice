#include <iostream>
using namespace std;

int main(){
    int n = 5;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (j < n - i){
                if (i == 0 || j == 0 || j == n - i - 1){
                    cout << "* ";
                }
                else {
                    cout << "  ";
                }
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 0;
    
    
    int sum = 0;

    // TODO: Gunakan while loop untuk menghitung jumlah bilangan
    while ( i <= n) {
        cout << sum << "+" << i << "=";
        if (i %2 == 0){
            sum += i;
            cout << sum << endl;
        }
        i++;
    }

    cout << sum << endl;
    return 0;
}
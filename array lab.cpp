#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int arr[100];
    int sum = 0;
    
    
    // TODO: baca elemen array dan hitung jumlahnya
    for (int i = 0; i <= N; i++){
       cin >> arr[i];
       
    }
    
    for (int i = 0; i <  N; i++){
        sum = sum + arr[i];
    }
    cout << sum << endl;
    return 0;
}
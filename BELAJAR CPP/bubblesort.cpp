#include <iostream>
using namespace std;

int main(){
    int = 5;
    int nilai[5] = {5, 4, 3, 2, 1};

    for (int i = 0; i < n - 1; i++){
        if (nilai[i] > nilai[i + 1]){
            int sementara = nilai[i];
            nilai[i] = nilai[i + 1];
            nilai[i + 1] = sementara;
        }
    }

    for (int i = 0; i < 5; i++){
        cout << nilai[i] << " "
    }


}
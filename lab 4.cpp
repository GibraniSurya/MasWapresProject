#include <iostream>
using namespace std;

int main() {
    int nilai;
    cin >> nilai;

    // TODO: Gunakan ternary operator untuk menentukan hasil
    string hasil = (nilai >= 60)? "Lulus":"Tidak Lulus";
    
    cout << hasil;

    return 0;
}

#include <iostream>
using namespace std;

int main () {
	int a;
	cin >> a;
	
	if (a < 0){
		cout << "Negatif" << endl;
	} else if (a == 0){
		cout << "Nol" << endl;
			} else if (a > 0 &&  a < 10){
				cout << "Satuan" << endl;
			}else if (a >= 10 && a < 100){
				cout << "Puluhan" << endl;
			}else {
			cout <<"Ratusan atau lebih" << endl;
			}
}
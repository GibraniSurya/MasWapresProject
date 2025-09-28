#include <iostream>
using namespace std;

int main(){
	
	int nilai_1;
	int nilai_2;
	cout << "MENETUKAN KELULUSAN MAHASISWA " << endl;
	cout << "Masukan Nilai Pertama : ";
	cin >> nilai_1;
	cout << "Masukan Nilai Kedua : ";
	cin >> nilai_2;
	int average = (nilai_1 + nilai_2) /2;
	
	if (average >= 60){
		cout << "Lulus!" << endl;
	} else {
		cout << "Tidak Lulus!" << endl;
		
	}
		
		return 0;
}
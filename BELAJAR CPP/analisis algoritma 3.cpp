#include <iostream>
using namespace std;

int main (){
	int a;
	int b;
	int c;
	int d;
	int e;
	
	
	cout << "Menentukan Jurusan SMA" << endl;
	cout << "Masukkan Nilai Eksakta 1 : ";
	cin >> a;
	cout << "Masukkan Nilai Eksakta 2 : ";
	cin  >> b;
	cout << "Masukkan Nilai Eksakta 3 : ";
	cin >> c;
	float eks = (a  + b + c) / 3;
	cout << eks << endl;
	cout << "Masukkan Nilai Non Eksakta 1 : ";
	cin >> d;
	cout << "Masukkan Nilai Non Eksakta 2 : ";
	cin >> e;
	float non_eks = (d + e) / 2;
	cout <<  non_eks << endl;
	
	if (eks > non_eks){
		cout << "Jurusan IPA" << endl;
	} else {
		cout << "Jurusan IPS" << endl;
	}
	return 0;
}
#include <iostream>
using namespace std;
int main() {
	int a, Bilangan_Genap = 0, Bilangan_Ganjil = 0;
	cout << "Masukkan jumlah data : ";
	cin >> a;
	for (int i = 0; i < a;i++){
		if (i % 2 == 0){
			Bilangan_Genap += i;
		}
		else {
			Bilangan_Ganjil += i;
		}
	}
	cout << "jumlah total bilangan genap " << Bilangan_Genap << endl;
	cout << "jumlah total bilangan ganjil " << Bilangan_Ganjil << endl;

	return 0;
}
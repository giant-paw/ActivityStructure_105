#include <iostream>
using namespace std;

struct mahasiswa {
	string NIM;
	string nama;
	string alamat;
	int umur;
};

int main() {
	mahasiswa mhs1, mhs2;

	mhs1.NIM = "20220140105";
	mhs1.nama = "Giant";
	mhs1.alamat = "Klaten";
	mhs1.umur = 19;

	cout << "Masukkan NIM : ";
	cin >> mhs1.NIM;

}
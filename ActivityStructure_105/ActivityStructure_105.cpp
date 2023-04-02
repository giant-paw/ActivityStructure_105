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

	//mhs1
	mhs1.NIM = "20220140105";
	mhs1.nama = "Giant";
	mhs1.alamat = "Klaten";
	mhs1.umur = 19;

	//mhs2 (input)
	cout << "Masukkan NIM : ";
	cin >> mhs2.NIM;
	cout << "Masukkan Nama : ";
	cin >> mhs2.nama;
	cout << "Masukkan Alamat : ";
	cin >> mhs2.alamat;
	cout << "Masukkan Umur : ";
	cin >> mhs2.umur;

	//output mhs1
	cout << "NIM = " << mhs1.NIM;
	cout << "\nNama = " << mhs1.nama;
	cout << "\nAlamat = " << mhs1.alamat;
	cout << "\nUmur = " << mhs1.umur;
	cout << endl;

	//output mhs2
	cout << "NIM = " << mhs1.NIM;
	cout << "\nNama = " << mhs1.nama;
	cout << "\nAlamat = " << mhs1.alamat;
	cout << "\nUmur = " << mhs1.umur;
}
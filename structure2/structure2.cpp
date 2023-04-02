#include <iostream>
using namespace std;

struct alamatDetail {
	string desa;
	string kota;
};

struct mahasiswa {
	string NIM;
	string nama;
	alamatDetail alamat;
	int umur;
};

int main() {
	mahasiswa mhs;

	cout << "Masukkan NIM : ";
	cin >> mhs.NIM;
	cout << "Masukkan Nama : ";
	cin >> mhs.nama;
	cout << "Asal Sesa : ";
	cin >> mhs.alamat.desa;
	cout << "Asal Kota : ";
	cin >> mhs.alamat.kota;
	cout << "Masukkan Umur : ";
	cin >> mhs.umur;
	cout << "\n";
}
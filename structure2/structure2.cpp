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
	
	//input mahasiswa
	cout << "Masukkan NIM : ";
	cin >> mhs.NIM;
	cout << "Masukkan Nama : ";
	cin >> mhs.nama;
	cout << "Asal Desa : ";
	cin >> mhs.alamat.desa;
	cout << "Asal Kota : ";
	cin >> mhs.alamat.kota;
	cout << "Masukkan Umur : ";
	cin >> mhs.umur;
	cout << "\n";

	//display mahasiswa
	cout << "---- Mahasiswa ----\n";
	cout << "NIM = " << mhs.NIM;
	cout << "\nNama = " << mhs.nama;
	cout << "\nAsal Desa = " << mhs.alamat.desa;
	cout << "\nAsal Kota = " << mhs.alamat.kota;
	cout << "\nUmur = " << mhs.umur;
}
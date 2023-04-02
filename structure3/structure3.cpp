#include <iostream>
using namespace std;

struct alamatDetail {
	char desa[20];
	char kota[20];
};

struct mahasiswa {
	char NIM[12];
	char nama[25];
	alamatDetail alamat;
	int umur;
};

int main() {
	mahasiswa mhs[3];

	//input mahasiswa
	for (int i = 0; i < 3; i++) {
		cout << "---- Mahasiswa ke-" << (i + 1) << " ----\n";
		cout << "Masukkan NIM : ";
		cin.getline(mhs[i].NIM, 12);
		cout << "Masukkan Nama : ";
		cin.getline(mhs[i].nama, 25);
		cout << "Asal Desa : ";
		cin.getline(mhs[i].alamat.desa, 20);
		cout << "Asal Kota : ";
		cin.getline(mhs[i].alamat.kota, 20);
		cout << "Masukkan Umur : ";
		cin >> mhs[i].umur;
		cin.ignore(1, '\n');
		cout << "\n";
	}

	//Display
	for (int i = 0; i < 3; i++) {
		cout << "\n---- Mahasiswa ke-" << (i + 1) << " ----\n";
		cout << "NIM = " << mhs[i].NIM;
		cout << "\nNama = " << mhs[i].nama;
		cout << "\nAsal Desa = " << mhs[i].alamat.desa;
		cout << "\nAsal Kota = " << mhs[i].alamat.kota;
		cout << "\nUmur = " << mhs[i].umur;
	}
}
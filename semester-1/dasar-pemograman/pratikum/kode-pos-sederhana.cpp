//Program Kode Pos//
#include<iostream>
using namespace std;
main () 
{
	//Deklarasi//
	string namakota;
	int kodepos;
	//Algoritma//
	cout<<"Masukkan Nama Kota :"; cin>>namakota;
	if (namakota == "Padang") {
		kodepos=25000;
	}
	else if (namakota == "Bandung") {
		kodepos=40100;
	}
	else if (namakota == "Solo"){
		kodepos=51000;
	}
	else if (namakota == "Denpasar") {
		kodepos=72000;
	}
	else if (namakota == "Palu") {
		kodepos=92300;
	}
	cout<<"Kode pos nya adalah" <<": "<<kodepos;
}

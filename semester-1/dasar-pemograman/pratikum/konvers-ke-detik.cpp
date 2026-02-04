//program Koversi_Ke_Detik
/*Membaca Waktu tempuh pelari marathon dalam jam, menit detik, lalu Mengkoversikan waktu tempuh tersebut ke dalam detik*/
#include <iostream>
using namespace std;
main()
{
	//Deklarasi
	typedef struct { int hh;//jam
					 int mm;//menit
					 int ss;//detik
					} jam;
	jam J;
	int TotalDetik;
	// Algoritma
	cout<<"Jam:";cin>>J .hh;
	cout<<"Menit:";cin>>J .mm;
	cout<<"Detik:";cin>>J .ss;
	TotalDetik=(J.hh*3600)+(J.mm*60)+J.ss;
	cout<<"total Detik=" <<TotalDetik;
}

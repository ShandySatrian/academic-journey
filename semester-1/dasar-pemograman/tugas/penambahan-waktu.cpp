//Program Penambahan waktu secara real time//
#include <iostream>
using namespace std;
main()
{
	//Deklarasi//
	typedef struct {int hh;
					int mm;
					int ss;
					}Jam;
	Jam j;
	int totaldetik, sisadetik;
	//Algoritma//
	cout<<"Masukan Jam = "; cin>>j.hh;
	cout<<"Masukan Menit = "; cin>>j.mm;
	cout<<"Masukan Detik = "; cin>>j.ss;
	totaldetik = (j.hh*3600)+(j.mm*60)+j.ss;
	
}

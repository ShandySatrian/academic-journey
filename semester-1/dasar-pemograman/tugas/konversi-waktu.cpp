//Program Koversi Waktu//
using namespace std;
#include<iostream>
main()
{
	//Deklarasi//
	typedef struct{ int dd;
					int mm;
					int yy;
					}year;
	year y;
	int sisa, time;
	
	//Algoritma//
	cout<<"Masukan Berapa Hari"; cin>>time;
	cout<<"--------------------" << endl;
	y.yy=time/365;
    sisa=time%365;
    y.mm=sisa/30;
	y.dd=sisa%30;
	cout<<"Munculkan Hasilnya:" <<y.yy<<"Tahun,"<<y.mm<<"Bulan,"<<y.dd<<"Hari"
	<<endl;
}

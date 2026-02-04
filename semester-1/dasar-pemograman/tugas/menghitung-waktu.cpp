//program  Menghitung Waktu//
#include<iostream>
using namespace std;
main () 
{
	//Deklarasi//
	typedef struct {int d;
					int h;
					int m;
					int s;
					}time;
	time t;
	int detik;
	//Algoritma//
	cout<<"Masukan total detik :"; cin>>detik;
	t.d = detik/86400;
	t.h = detik&86400/3600;
	t.m = detik%86400%3600/60;
	t.s = detik%86400%3600%60;
	cout<<endl;
	cout<<"Hasil Konversinya adalah :" <<t.d <<"Hari, " <<t.h <<"Jam, " <<t.m <<"Menit, " <<t.s <<"Detik.";
}


// Program Membaca Nilai Uang//
#include<iostream>
using namespace std;
main() 
{
	//Deklarasi//
	typedef struct{int rb;
				   int rt;
				   int pl;
				   }money;
	money m;
	int uang;
	int sisa1;
	int sisa2;
	int sisa_puluhan;
	
	//Algoritma//
	cout<<"Masukan Nilai Uang:"; cin>>uang;
	m.rb=uang/1000;
	sisa1=uang%1000;
	m.rt=sisa1/100;
	sisa2=sisa1%100;
	m.pl=sisa2/50;
	sisa_puluhan= sisa2/50;
	cout<<"Hasilnya adalah" <<endl;
    cout<<"----------------" <<endl;
	cout<<m.rb<<" Ribuan " <<" Rp.1000 " <<endl;
	cout<<m.rt<<" Ratusan "<<" Rp.100 "<<endl;
	cout<<m.pl<<" Puluhan "<<" Rp.50 " <<endl;
	cout<<sisa_puluhan<<" Sisa Puluhan"<< " Rp.25 " <<endl;
}

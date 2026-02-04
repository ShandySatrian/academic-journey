//Program Mengkonversikan Jarak Kilometer-meter-sentimeter//
#include<iostream>
using namespace std;
main()
{
	//Deklarasi//
	typedef struct {int km;
					int	m;
					int	cm;
					}kilo;
	kilo k;
	int totalcm;
	int sisacm;					

	//Algoritma//
	cout<<"masukan total cmnya: "; cin>>totalcm;
	k.km = totalcm/100000;
	sisacm = totalcm%100000;
	k.m = sisacm/100;
	k.cm = sisacm%100;
	
	cout<<endl;
	cout<<"Hasilnya adalah : " <<k.km <<"km," <<" " << k.m <<"m," <<" " <<k.cm <<"cm";
}

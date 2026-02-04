//Program Berat Badan Ideal//
#include<iostream>
using namespace std;
main()
{
	//Deklarasi//
	int tb;
	int bbideal;
	int sisa;
	
	//Algoritma//
	cout<<"Masukan Tinggi Badan"; cin>>tb;
	sisa = tb-100;
	bbideal= sisa-sisa*10/100;
	
	cout<<endl;
	cout<< "Berat Badan Ideal Adalah: " <<bbideal<<"kg";
	
}

//program menentukan diskon//
#include <iostream>
using namespace std;
main()
{
	//Deklarasi
	int nilai;
	int total, nilai_diskon;
	//Algoritma
	cout<<"Masukan Nominal Belanjaan = ";cin>>nilai;
	if(nilai>110000){
		nilai_diskon = nilai*20/100;
	} else if (nilai>51000 and nilai <=100000){
		nilai_diskon = nilai*15/100;
	} else if (nilai>11000 and nilai <=50000){
		nilai_diskon = nilai*10/100;
	} else if (nilai>0 and nilai <=10000){
		nilai_diskon = nilai*0/100;
	}
	total= nilai-nilai_diskon;
	cout<<"Diskon Yang Diperoleh = " <<nilai_diskon<<endl;
	cout<<"Total Yang Harus Dibayar = " <<total<<endl;
}


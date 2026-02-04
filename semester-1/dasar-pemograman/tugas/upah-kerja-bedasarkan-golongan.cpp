//program upah kerja bedasarkan golongan//
#include <iostream>
using namespace std;
main()
{
	//Deklarasi
	int uping, uplem, uptol, jaker, jalem;
	string nama,golongan;
	
	//Algoritma
	cout<<"Nama Karyawan/Karyawati :"; cin>>nama;
	cout<<"Total Jam Kerja Mingguan :"; cin>>jaker;
	cout<<"Golongan :"; cin>>golongan;
	
	if (jaker<=48 && golongan=="A") {
		uptol=48*4000;
	}
	else if (jaker<=48 && golongan=="B"){
		uptol=48*5000;
	}
	else if (jaker<=48 && golongan=="C"){
		uptol=48*6000;
	}
	else if (jaker<=48 && golongan=="D"){
		uptol=48*7500;
	}
	
	
	else if (jaker>48 && golongan=="A"){
		uplem=(jaker-48)*3000;
		uping=48*4000;
		uptol=uplem+uping;
	}
	else if (jaker>48 && golongan=="B"){
		uplem=(jaker-48)*3000;
		uping=48*5000;
		uptol=uplem+uping;
	}
	else if (jaker>48 && golongan=="C"){
		uplem=(jaker-48)*3000;
		uping=48*6000;
		uptol=uplem+uping;
	}	
	else if (jaker>48 && golongan=="D"){
		uplem=(jaker-48)*3000;
		uping=48*7500;
		uptol=uplem+uping;
	}
	
	cout<<endl;
	cout<<"Nama Karyawan :" <<nama <<endl;
	cout<<"Total Gaji Karyawan :" <<uptol;
}


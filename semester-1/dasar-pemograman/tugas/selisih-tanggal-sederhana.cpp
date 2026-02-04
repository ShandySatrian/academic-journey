//program selisih tanggal//
#include<iostream>
using namespace std;

main() {
	//Deklarasi//
	typedef struct {int tanggal;
					int bulan;
					int tahun;
					} date1;
	date1 d1;
	
	typedef struct {int tanggal;
					int bulan;
					int tahun;
					} date2;
	date2 d2;
	
	typedef struct {int tanggalx;
					int bulanx;
					int tahunx;
					} final;
	final f;
	
	int totalhari_pertama, totalhari_kedua;
	int selisih_hari;
	int sisa;
	
	//Algoritma//
	cout<<"Isi data Tanggal Pertama" <<endl;
	cout<<"Tanggal :"; cin>>d1.tanggal;
	cout<<"Bulan :"; cin>>d1.bulan;
	cout<<"Tahun :"; cin>>d1.tahun;
	totalhari_pertama = d1.tanggal+(30*d1.bulan)+(365*d1.tahun);
	
	cout<<endl;
	cout<<"Isi Data Tanggal Kedua" <<endl;
	cout<<"Tanggal :"; cin>>d2.tanggal;
	cout<<"Bulan :" ; cin>>d2.bulan;
	cout<<"Tahun :" ; cin>>d2.tahun;
	
	totalhari_kedua = d2.tanggal+(30*d2.bulan)+(365*d2.tahun);
	
	selisih_hari = totalhari_pertama - totalhari_kedua;
	f.tahunx = selisih_hari/365;
	sisa = selisih_hari%365;
	f.bulanx = sisa/30;
	f.tanggalx = sisa%30;
	
	cout<<"Jadi jarak antara Tanggal pertama dan Kedua adalah :" <<f.tahunx <<"Tahun, " <<f.bulanx <<"Bulan, " <<f.tanggalx <<"Hari "; 
}

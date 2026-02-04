// PROGRAM GAJI KARYAWAN
#include <iostream>
using namespace std;
main()
{
    //DEKLARASI
    const float PersenTunjangan=0.2;
    const float PersenPajak=0.15;
    string Nama;
    int Gapok, Gaber, Tunjangan, Pajak;
    //ALGORITMA
    cout<<"Inputkan Nama Karyawan: "; cin>> Nama;
    cout<<"Inputkan Gaji Pokok: "; cin>> Gapok;
    Tunjangan=Gapok*PersenTunjangan ;
    Pajak=(Gapok+Tunjangan) *PersenPajak ;
    Gaber=Gapok+Tunjangan-Pajak ;
    cout<<endl;
    cout<<"Nama Karyawan: " <<Nama <<endl;
    cout<<"Gaji Bersih: " <<Gaber <<endl;
}

//Program Pertukaran
//Menukarkan isi nilai variable A dan B
#include<iostream>
using namespace std;
main ()
{
    //Deklarasi
    int A;
    int B;
    int C;
    //Algoritma
    A=5;
    B=8;
    cout<<"A sebelum pertukaran adalah: " <<A;
    cout<<endl;
    cout<<"B sebelum pertukaran adalah: " <<B;
    cout<<endl;
    C=A;
    A=B;
    B=C;
    cout<<endl;
    cout<<"A setelah pertukaran adalah: " <<A;
    cout<<endl;
    cout<<"B setelah pertukaran adalah: " <<B;
    cout<<endl;
}

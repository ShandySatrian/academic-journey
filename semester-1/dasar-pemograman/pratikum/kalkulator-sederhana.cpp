//PROGRAM KALKULATOR//
#include <iostream>
using namespace std;
main ()
{
	//DEKLARASI
		int op1,op2,hasil;
		char opr;
	//ALGORITMA
	cout<<"Masukan bilangan pertama :"; cin>>op1;
	cout<<"Masukkan bilangan kedua :"; cin>>op2;
	cout<<"Masukan aritmatikanya :"; cin>>opr;
	 switch (opr) {
	 	case '+': {
	 		hasil=op1+op2;
			break;
		 }
		 case '-': {
		 	hasil=op1-op2;
			break;
		 }
		 case '/': {
		 	hasil=op1/op2;
			break;
		 }
		 case '*': {
		 	hasil=op1*op2;
			break;
		 }
	 }
	 cout<<"Hasilnya adalah :" <<hasil;
 } 

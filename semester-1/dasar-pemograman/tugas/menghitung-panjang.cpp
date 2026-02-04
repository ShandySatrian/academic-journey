//program mengitung panjang//
#include <iostream>
using namespace std;
main ()
{
    //Deklarasi
    typedef struct { float inchi;
    				 float ft;
    				 float yard;
    				 }mile;
    mile m;
    float meter;
    float cm;
    float mm;

    //Algortima//
    cout<<"Masukan Panjang Dalam Satuan Meter :";cin>>meter;
    mm= meter*1000;
    cm= meter*100;
    m.inchi=mm/25.4;
    m.ft=cm/30.48;
    m.yard=meter/0.9144;
	cout<<"Hasil koversinya adalah:" <<endl;
	cout<<m.inchi<<" " <<"inchi" <<endl;
	cout<<m.ft<<" " << "kaki" <<endl; 
	cout<<m.yard<<" "<< "yard " << endl;
}

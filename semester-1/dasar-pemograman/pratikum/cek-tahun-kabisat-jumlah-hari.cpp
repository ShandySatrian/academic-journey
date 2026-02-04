//Program Tahun Kabisat//
#include <iostream>
using namespace std;
int main()
{
  int tahun,bulan,jumlahhari;
  		

  cout<< "Masukkan Tahun nya: "; cin>> tahun;
  cout<< "Masukkan Bulannya :"; cin>>bulan;
  if (tahun%4 == 0 )
  {
switch (bulan) {
	case 1: {
		jumlahhari = 31;
		break;
	}
	case 2: {
		jumlahhari = 29;
		break;
	}
	case 3: {
		jumlahhari = 31;
		break;
	}
	case 4: {
		jumlahhari = 30;
		break;
	}
	case 5: {
		jumlahhari = 31;
		break;
	}
	case 6: {
		jumlahhari = 30;
		break;
	}
	case 7: {
		jumlahhari = 31;
		break;
	}
	case 8: {
		jumlahhari = 31;
		break;
	}
	case 9: {
		jumlahhari = 30;
		break;
	}
	case 10: {
		jumlahhari = 31;
		break;
	}
	case 11: {
		jumlahhari = 30;
		break;
	}
	case 12: {
		jumlahhari = 31;
		break;
	}
}  
}

else{
	switch (bulan) {
		case 1: {
			jumlahhari = 31;
			break;
		}
		case 2: {
			jumlahhari = 28;
			break;
		}
		case 3: {
			jumlahhari = 31;
			break;
		}
			case 4: {
		jumlahhari = 30;
		break;
		}
		case 5: {
			jumlahhari = 31;
			break;
			}
		case 6: {
			jumlahhari = 30;
			break;
		}
		case 7: {
			jumlahhari = 31;
			break;
		}
		case 8: {
			jumlahhari = 31;
			break;
		}
		case 9: {
			jumlahhari = 30;
			break;
		}
		case 10: {
			jumlahhari = 31;
			break;
		}
		case 11: {
			jumlahhari = 30;
			break;
		}
		case 12: {
			jumlahhari = 31;
			break;
		}
			
		}
	}
cout<<"Jumlah hari pada  bulan yang diinput adalah :" <<" " <<jumlahhari;
  return 0;
}

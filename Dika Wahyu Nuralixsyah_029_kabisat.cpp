#include <iostream>
using namespace std;

int main()
{
int tahun;
cout<<"\nProgram Menghitung Tahun kabisat"<<endl;
cout<<"Masukkan Tahun:" ;
cin>>tahun;
	if (tahun%400==0)
	{
		cout<<"Tahun Kabisat";
	}
	else if (tahun%100==0)
	{
		cout<<"Bukan Tahun Kabisat";
	}
	else if (tahun%4==0)
	{
		cout<<"Tahun Kabisat";
	}
	else {
		cout<<"Bukan Tahun Kabisat";
	}
	return 0;
	}




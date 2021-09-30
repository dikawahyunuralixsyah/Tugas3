#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
int nilai;
cout<<" Konversi Nilai ke Huruf"<<endl;
cout<<"Masukkan Nilai: ";
cin>>nilai;
	if (nilai>=80 && 100<=nilai)
	{
		cout<<"Nilai A";
	}
	else if(nilai>=65 && 79<=nilai)
	{
		cout<<"Nilai B";
	}
	else if (nilai>=50 && 64<=nilai)
	{
		cout<<"Nilai C";
	}
	else if (nilai>=35 && 49<=nilai)
	{
		cout<<"Nilai D";
	}
	else if (nilai>=0 && 34<=nilai)
	{
		cout<<"Nilai E";
	}
	else {
		cout<<"Input Anda Salah";
	}
	getch();
}

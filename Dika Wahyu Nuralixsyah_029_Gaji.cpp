#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
int jk, status, kendaraan, gp, um, tunjangan, transport, gk, pajak, gb;
char nama[200], nik[13];
cout<<"Masukkan Nama: "; 
cin>>nama;
cout<<"Masukkan NIK: ";
cin>>nik;
cout<<"Masukkan Jenis Kelamin(Input 1 jika laki2, input 0 jika perempuan):";
cin>>jk;
cout<<"Masukkan Status(input 1 jika menikah, input 0 jika single):";
cin>>status;
cout<<"Masukkan Kendaraan(input 1 jika Mobil, input 0 jika Motor):";
cin>>kendaraan;
cout<<"Masukkan Gaji Pokok:";
cin>>gp;
cout<<"Masukkan Uang Makan:";
cin>>um;

if (jk==1 && status==1){
	tunjangan=500;
}
else{
	tunjangan=0;
}
if (kendaraan==1){
	transport=1000;
}
else if(kendaraan==0){
	transport=500;
}
gk=gp+tunjangan+um+transport;

pajak=0.05*gk;

gb=gk-pajak;

cout<<"nama= "<<nama<<endl;
cout<<"nik= "<<nik<<endl;
cout<<"tunjangan= "<<tunjangan<<endl;
cout<<"transport= "<<transport<<endl;
cout<<"Gaji Kotor"<<gk<<endl;
cout<<"Pajak"<<pajak<<endl;
cout<<"Gaji Bersih"<<gb<<endl;
getch();
}

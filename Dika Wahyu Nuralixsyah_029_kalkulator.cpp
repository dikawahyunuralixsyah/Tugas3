#include<iostream>
using namespace std;

void menu(){
cout<<"Kalkulator"<<endl;
cout<<"================================================="<<endl;
cout<<"Operator yang digunakan : "<<endl;
cout<<"\n + = penambahan \n - = penguarangan \n ";
cout<<"* = perkalian \n / = pembagian \n ";
cout<<"% = modulus"<<endl;
}

int main(){
float angka_1, angka_2,hasil;
char operasi,pilih;
menu();

char (angka_1=' ');

if(char(angka_1)==' '){
cout<<"\nMasukan angka pertama : ";cin>>angka_1;
}
else
{
cout<<"\nAngka terakhir : "<<angka_1<<endl;
}
cout<<"Masukkan Operator(simbolnya) : ";cin>>operasi;
switch(operasi){
case '+' :
cout<<"Masukan angka kedua : ";cin>>angka_2;
hasil = angka_1 + angka_2;
cout<<"Hasil = "<<hasil;
angka_1=hasil;
break;
case '-' :
cout<<"Masukan angka kedua : ";cin>>angka_2;
hasil = angka_1 - angka_2;
cout<<"Hasil = "<<hasil;
angka_1=hasil;
break;
case '*' :
cout<<"Masukan angka kedua : ";cin>>angka_2;
hasil = angka_1 * angka_2;
cout<<"Hasil = "<<hasil;
angka_1=hasil;
break;
case '/' :
cout<<"Masukan angka kedua : ";cin>>angka_2;
if(angka_2 == 0){
cout<<"cannot divided by zero"<<endl;
}
else 
{
hasil = angka_1 / angka_2;
cout<<"Hasil = "<<hasil;
angka_1=hasil;
}
break;
case '%' :
cout<<"Masukan angka kedua : ";cin>>angka_2;
if(angka_2 == 0){
cout<<"result is undefined"<<endl;
}else {
hasil = int (angka_1) % int (angka_2);
cout<<"Hasil = "<<hasil;
angka_1=hasil;
}
break;
default :{
cout<<"Operator salah"<<endl;
exit(0);
}  
}

}


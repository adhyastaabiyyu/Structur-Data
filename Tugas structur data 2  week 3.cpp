#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
struct stack
{
int nilai[10];
string nama[50];
string smartphone[16];
string ram[10];
string rom[10];
string warna[10];
int bayar[4];
string jenis[4];
int top;
};
struct stack stackbaru()
{
struct stack tumpuk;
tumpuk.top = -1;
return tumpuk;
}
void push(struct stack &tumpukan)
{
string nam;
string kind;
string smartphone;
string ram;
string rom;
string warna;
int kinds;
float hrg;

cout<<"Masukkan Nama  : ";
cin>>nam;
cout<<"        Pilih jenis hp ";
cout<<"\n-------------------------------\n";
cout<<"1.vivo\n2.samsung\n3.oppo \n";
cout<<"----------------------------------\n";
cout<<"Ketik ="; cin>>smartphone;
cout<<"\n----------------------------\n";
cout<<"masukkan varian memori \n";
cout<<"Pilih kapasitas Ram : ";
cout<<"\n 1.2GB \n 2.3GB \n 4.4GB\n";
cout<<"\n----------------------------\n";
cin>>ram;
cout<<"Pilih kapasitas Rom : ";
cout<<"\n 1.32GB \n 2.128GB\n";
cin>>rom;
cout<<"\n------------------------------------\n";
cout<<"Masukkan warna      : ";
cout<<"\n 1.Putih \n 2.Hitam \n 3.RoseGold\n";
cin>>warna;
cout<<"\n----------------------------------------\n";
cout<<" jenis pembayaran :\n "<<endl;
cout<<"1.2GB/32GB 2.2GB/128GB 3.3GB/32GB \n";
cout<<"-----------------------------------------\n";
cin>>kinds;
if(kinds == 1)
{
	hrg = 100000;
	kind ="2GB";
}
if(kinds == 2)
{
	hrg = 200000;
	kind =" 3GB";
}
if(kinds = 3)
{
	hrg = 3000000;
	kind ="4GB";
}
tumpukan.top++;
tumpukan.nama[tumpukan.top]  = nam;
tumpukan.smartphone[tumpukan.top] = smartphone;
tumpukan.ram[tumpukan.top]  = ram;
tumpukan.rom[tumpukan.top] = rom;
tumpukan.warna[tumpukan.top] = warna;
tumpukan.jenis[tumpukan.top]= kind;
tumpukan.bayar[tumpukan.top] = hrg;
}
void pop(struct stack &tumpukan)
{
for(int i = 0; i<tumpukan.top; i++)
{
cout<<" Saudara         "<<tumpukan.nama[i]<<endl;
cout<<" Merk smartphone "<<tumpukan.smartphone[i]<<endl;
cout<<" Ram             "<<tumpukan.ram[i]<<endl;
cout<<" Rom             "<<tumpukan.rom[i]<<endl;
cout<<" Warna           "<<tumpukan.warna[i]<<endl;
cout<<" Varian Harga    "<<tumpukan.jenis[i]<<endl;
cout<<" Total Bayar     "<<tumpukan.bayar[i]<<endl;
tumpukan.nama[i] = tumpukan.nama[i+1];
tumpukan.smartphone[i] = tumpukan.smartphone[i+1];
tumpukan.ram[i] = tumpukan.ram[i+1];
tumpukan.rom[i] = tumpukan.rom[i+1];
tumpukan.warna[i] = tumpukan.warna[i+1];
tumpukan.jenis[i]=tumpukan.jenis[i+1];
}
}
void tampilkan(struct stack tumpukan)
{
for(int i = 0; i<=tumpukan.top; i++)
{
cout<<" Saudara     : "<<tumpukan.nama[i]<<endl;
cout<<" merk        : "<<tumpukan.smartphone[i]<<endl;
cout<<" Ram         :  "<<tumpukan.ram[i]<<endl;
cout<<" Rom         :  "<<tumpukan.rom[i]<<endl;
cout<<" Warna       : "<<tumpukan.warna[i]<<endl;
cout<<" Total Bayar : "<<tumpukan.bayar[i]<<endl<<endl;
}
}
void menu()
{
cout<<"--------------Pilihan-------------------\n";
cout<<"| 1. Silahkan Masukkan Data pembeli\n";
cout<<"| 2. Tampilkan Data Pembayar Dalam Antrian\n";
cout<<"| 3. Tampilkan semua data pembayar\n";
cout<<"| 0. keluar \n";
cout<<"-----------------------------------------\n";
}
int main()
{
struct stack tumpukan;
tumpukan = stackbaru();
int pilihan;
do
{
menu();
cout<<"Silahkan Masukkan Pilihan Anda :\n";
cin>>pilihan;
cout<<"-----------------------------------------\n";
if(pilihan == 1)
{
push(tumpukan);
}
if (pilihan == 2)
{
pop(tumpukan);
}
if (pilihan == 3)
{
tampilkan(tumpukan);
}
}
while (pilihan != 0);
}

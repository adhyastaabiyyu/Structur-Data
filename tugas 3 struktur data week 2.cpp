#include<iostream>
#include<conio.h>
using namespace std;

struct mahasiswa{
	char nama[50];
    char npm[15];
    char mata_kuliah[10];
};
main ()
{
mahasiswa mhs;
cout<<"MENCARI GRADE NILAI MAHASISWA \n";
cout<<"=================================\n";

cout<<"Masukkan nama : ";
cin>>mhs.nama;

cout<<"Masukkan npm : ";
cin>>mhs.npm;

cout<<"Masukkan Mata kuliah :";
cin>>mhs.mata_kuliah; 
	
double NilaiUjian;
char skor;
     
cout<<" Masukan Nilai Ujian : ";
cin>>NilaiUjian;

if(NilaiUjian >= 90)
skor= 'A' ;
else

if(NilaiUjian >= 70)
skor= 'B';
else

if(NilaiUjian >= 60)
skor= 'C';
else 

if(NilaiUjian >= 50)
skor= 'D';
else
skor= 'E';
cout<<"\n";
cout<<"===================================\n";
cout<<" DATA SCORE MAHASISWA \n\n" ;

cout<<" Nama          : "<<mhs.nama<<endl;
cout<<" Npm           : "<<mhs.npm<<endl;
cout<<" Mata Kuliah   : "<<mhs.mata_kuliah<<endl;
cout<<" Skor          : "<<skor<<endl;
getch () ;
}

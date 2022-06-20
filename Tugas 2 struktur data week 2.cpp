#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#define MAX 10
struct data_mahasiswa
{
 char npm [15];
 char nama[50];
 char jurusan[50];
 char ttl[50];
 char umur[3];
 char kelamin[20];
 char no_hp[12];
 char alamat[50];
 char hobby [20];
};

int main()
{
 int i, jml_mhs = 0;
 char tombol;
 struct data_mahasiswa data_mhs[MAX];
 
 printf ("Biodata Mahasiswa\n\n");
 
 do  //perulangan do-while
 {  
  printf ("Masukan NPM                = "); 
  scanf ("%s", &data_mhs[jml_mhs].npm);
  
  printf ("Masukan Nama               = "); 
  scanf ("%s", &data_mhs[jml_mhs].nama);
  
  printf ("Masukan Jurusan            = "); 
  scanf ("%s", &data_mhs[jml_mhs].jurusan);
  
  printf ("Masukkan umur              = "); 
  scanf ("%s", &data_mhs[jml_mhs].umur);
  
  printf ("Masukan Tempat/ tgl. lahir = "); 
  scanf ("%s", &data_mhs[jml_mhs].ttl);
  
  printf ("Masukan Jenis Kelamin      = "); 
  scanf ("%s", &data_mhs[jml_mhs].kelamin);
  
  printf ("Masukan No. HP             = "); 
  scanf ("%s", &data_mhs[jml_mhs].no_hp);
  
  printf ("Masukan Alamat             = "); 
  scanf ("%s", &data_mhs[jml_mhs].alamat);
  
  printf ("Masukan Hobby              = "); 
  scanf ("%s", &data_mhs[jml_mhs].hobby);
   
  jml_mhs++;
  printf ("\nLanjut masukan data (Y/T)? : ");
  tombol = toupper (getch());
  while (! (tombol == 'T' || tombol == 'Y'))
  tombol = toupper(getch());
  printf ("%c\n\n", tombol); 
 }
 
 while (tombol == 'Y');

 printf ("Data Mahasiswa yang tersimpan\n");
 printf ("===========================================================================\n\n");
 for (i = 0; i < jml_mhs; i++)
 { 
  printf ("Data Mahasiswa ke %d\n", i + 1);
  printf ("NPM                = %s\n", data_mhs[i].npm);
  printf ("Nama               = %s\n", data_mhs[i].nama);
  printf ("Jurusan            = %s\n", data_mhs[i].jurusan);
  printf ("Tempat/ tgl. lahir = %s\n", data_mhs[i].ttl);
  printf ("umur               = %s\n", data_mhs[i].umur);
  printf ("Jenis Kelamin      = %s\n", data_mhs[i].kelamin);
  printf ("No. HP             = %s\n", data_mhs[i].no_hp);
  printf ("Alamat             = %s\n", data_mhs[i].alamat);
  printf ("hobby              = %s\n", data_mhs[i].hobby);
 }  
}

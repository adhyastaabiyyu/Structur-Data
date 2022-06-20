#include<iostream>

using namespace std;
int main () {
 int n, angka[12], kiri, kanan, tengah, temp, u;
 bool ketemu = false;
 cout<<"PROGRAM BINARY SEARCH"<<endl;
 cout<<"Masukan jumlah data : ";
 cin>>n;
 for(int i=0; i<n; i++)
{
  cout<<"Angka ke - ["<<i<<"] : ";
  cin>>angka[i];
}
 for (int i=0; i<n; i++)
{
  for(int j=0; j< n-i-1; j++)
 {
   if(angka [j] > angka [j+1])
  {
    temp=angka[j];
    angka[j]=angka[j+1];
    angka[j+1]=temp;
   }
  }
 }
 cout<<"Data yang telah diurutkan adalah : ";
 for(int i=0; i<n; i++)
 {
  cout<<angka[i]<<" ";
 }
 cout<<"\n Masukan angka yang dicari : ";
 cin>>u;
 kiri=0;
 kanan=n-1;
 while(kiri<=kanan)
 {
  tengah=(kiri + kanan)/2;
  if(u == angka[tengah])
  {
   ketemu=true;
   break;
  }
  else if (u < angka [tengah])
  {
   kanan = tengah -1;
  }
  else
  {
   kiri = tengah +1;
  }
 }
 if (ketemu == true)
  cout<<"Angka ditemukan!";
 else
  cout<<"Angka tidak ditemukan!";
  return 0;
 }

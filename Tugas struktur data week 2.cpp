#include <iostream>
using namespace std;

struct mhs{
    char nama[50];
    char alamat[50];
    char jenis_kelamin[10];
    char hobby[20];
    int umur;
    int no_telepon;
};

main(){
    mhs m[6];
    cout<<"BIODATA DIRI\n\n";
    
    for (int i=0; i<1; i++){
        cout<<"MASUKKAN NAMA : ";
        cin>>m[i].nama;
   
        cout<<"MASUKKAN ALAMAT: ";
        cin>>m[i].alamat;
  
        cout<<"MASUKKAN JENIS KELAMIN : ";
        cin>>m[i].jenis_kelamin;
        
        cout<<"Masukkan hobby  : ";
        cin>>m[i].hobby;
        
        cout<<"Masukkan umur : ";
        cin>>m[i].umur;
        
        cout<<"MASUKKAN NO TELEPON :" ;
        cin>>m[i].no_telepon;

        cout<<"\n\n\n"; 
    }
    for (int i=0; i<1; i++){
        cout<<"Data YANG SUDAH MASUK\n\n";
  
        cout<<"NAMA : "<<m[i].nama<<endl;
        cout<<"ALAMAT : "<<m[i].alamat<<endl;
        cout<<"JENIS KELAMIN : "<<m[i].jenis_kelamin<<endl;
        cout<<"hobby : "<<m[i].hobby<<endl;
        cout<<"umur : "<<m[i].umur<<endl;
        cout<<"NO TELEPON : "<<m[i].no_telepon<<endl<<endl;
   }
   return 0;  
} 

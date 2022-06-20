#include<iostream>
#include<string>
using namespace std;

int main(){
	string nama;
	string alamat;
	string umur;
	
	cout<<"Masukkan data berikut"<<endl<<endl;
	cout<<"Nama  :";
	getline(cin, nama);
	
	cout<<"Alamat  :";
	getline(cin, alamat);
	
	cout<<"Umur  :";
	getline(cin, umur);
	
	cout<<endl;
	cout<<"BIODATA DIRI "<<endl;
	cout<<"-------------------"<<endl;
	
	cout<<"Nama  :"<<nama<<endl;
	cout<<"Alamat:"<<alamat<<endl;
	cout<<"umur   :"<<umur<<endl;
	
	return 0;
	
}

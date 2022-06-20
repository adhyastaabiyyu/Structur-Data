#include <iostream>
#include <string>
using namespace std;

struct Biodata{
	string nama;
	string alamat;
	float umur;
};

int main()
{
	Biodata Data;
	
	Data.nama="Adhyasta rozak abiyu chasbulloh";
	Data.alamat="Tropodo klagen rt 03 rw 04 kec krian";
	Data.umur=19;
	
	cout<<"BIODATA PRIBADI"<<endl;
	cout<<"-------------------"<<endl;
	cout<<"Nama    :"<<Data.nama<<endl;
	cout<<"alamat  :"<<Data.alamat<<endl;
	cout<<"umur    :"<<Data.umur<<endl;
	
	return 0;
}

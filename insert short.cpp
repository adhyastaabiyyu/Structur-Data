#include <iostream>
#include <conio.h>
#include <windows.h>

void setcolor (unsigned short color)
{
HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hCon,color);
}

using namespace std;

int main(){
	int y;
	setcolor (10);
	cout<<"       ///////////        " <<endl;               
  	cout<<"      ||   UTS  ||        "<<endl;
	cout<<"-------------------------"<<endl;
	cout<<"||ALGORITMA INSERT SORT||"<<endl;
  	cout<<"-------------------------"<<endl;
  	cout<<endl;
  	setcolor (11);
	cout<<"Masukan Jumlah Data = ";
	cin>>y;
	int x[y];
		cout<<"  "<<endl;
	for(int i=1; i<y+1; i++){
		setcolor (12);
		cout<<"Masukan Data ke-"<<i<<"=";
		cin>>x[i];
	
	}
	for(int i=1; i<y+1; i++){
		int key = x[i];
		int j = i-1;
		while(j>=0 && x[j] > key){
			x[j+1] = x[j];
			j--;
		}
		x[j+1] = key;
		cout<<"  "<<endl;
		setcolor (13);
		cout<<"Hasil Putaran ke-"<<i<<"=";
		for(int m=1;m<y+1;m++){
		cout<<x[m]<<" ";
	    }
	    
	}
	cout<<endl;
	cout<<"  "<<endl;
	setcolor (14);
	cout<<"Data setelah diurutkan="<<endl;
	for(int m=1;m<y+1;m++){
		cout<<x[m]<<" ";
	}
}

#include<iostream>
#include <conio.h>
#include <windows.h>

void setcolor (unsigned short color)
{
HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hCon,color);
}

using namespace std;

int main ()
{
	int a[9];
	int j,k,i,temp;
	int jmax,u=8;
	setcolor (10);
	            
    cout<<"        ///////////        " <<endl;               
  	cout<<"       ||   UTS  ||        "<<endl;
	cout<<"----------------------------"<<endl;
	cout<<"||ALGORITMA SELECTION SORT||"<<endl;
  	cout<<"----------------------------"<<endl;
	setcolor (11);
	cout<<"\nMasukan 8 Data dibawah ini : "<<endl;
	cout<<"   "<<endl;
	for(i=1;i<9;i++)
	{
	    setcolor (12);
		cout<<"Masukan Data ke-"<<i<<"=";
		cin>>a[i];
		
	}
	
	setcolor (13);
	cout<<"\nData sebelum diurutkan="<<endl;
	for(i=1;i<9;i++)
	{cout<<a[i]<<"   ";
	}
	cout<<"\n";
	for(j=1;j<9;j++)
	{jmax=0;
	for(k=0;k<=u;k++)
	if (a[k]>a[jmax])
	jmax=k;
	
	temp=a[u];
	a[u]=a[jmax];
	a[jmax]=temp;u--;
	
	cout<<"Hasil Putaran ke-"<<j<<"=";
	for (k=1;k<9;k++)
	cout<<a[k]<<" ";
	cout<<endl;}
	setcolor (14);
	cout<<"\nData setelah diurutkan="<<endl;
	for(i=1;i<9;i++)
	{cout<<a[i]<<"  ";
	}
	getch();
	}

#include<iostream>
using namespace std;

int main()
{
	
int detik,hari,jam,menit;
cout<<"program konversi detik kr hari,jam,menit"<<endl;
cout<<"masukan detik :";
cin>>detik;

hari=detik/86400;
jam=detik/3600;
menit=detik/60;

cout<<hari<<"hari"<<jam<<"jam"<<menit<<"menit"<<endl;
return 0;
}

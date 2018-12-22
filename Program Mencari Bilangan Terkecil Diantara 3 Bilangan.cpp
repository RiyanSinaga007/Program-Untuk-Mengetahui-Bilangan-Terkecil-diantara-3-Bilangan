#include <iostream>
using namespace std;

int main()
{
	int bil1, bil2, bil3, Terkecil;
	cout<<"\n Masukkan Nilai Bilangan Pertama = ";
	cin>>bil1;
	cout<<"\n Masukkan Nilai Bilangan Kedua = ";
	cin>>bil2;
	cout<<"\n MAsukkan Nilai Bilangan Ketiga = ";
	cin>>bil3;
	{
		if(bil1<bil2)
		Terkecil = bil1;
		else
		Terkecil = bil2;
		if(bil3< Terkecil)
		Terkecil = bil3;
		cout<<"\n Nilai Terkecil Adalah = "<<Terkecil;
	}
	return 0;
}

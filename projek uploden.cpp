#include <iostream>
#include <stdlib.h>
using namespace std;
int main () {
	cout<<"======================================================================"<<endl;
	cout<<"                              IT SERVICE								 "<<endl;
	cout<<"                       ABIDIN GROUP COMUNNITY					 "<<endl;
	cout<<"               Jl. H. Dassuki NO. 14 Kab Bandung Barat				 "<<endl;
	cout<<"======================================================================"<<endl;
	
	int jumlah;
	cout<<endl;
	
	cout<<"                         NOTA SERVICE LAPTOP                          "<<endl;
	cout<<endl;
	char pertanyaan[100];
	string pertanyaan1	="No. Barang     	=";
	string pertanyaan2	="Tanggal        	=";
	string pertanyaan3	="Nama Pelanggan 	=";
	string pertanyaan4	="Jenis Laptop   	=";
	string pertanyaan5	="No. Seri       	=";
	string pertanyaan6	="Telepon        	=";
	string pertanyaan7	="Keluhan Laptop    =";
	string pertanyaan8	="Perkiraan Selesai ="; 
	char jawaban[100];
	string jawaban1;
	string jawaban2;
	string jawaban3;
	string jawaban4;
	string jawaban5;
	string jawaban6;
	string jawaban7;
	int jawaban8;
	cout<<pertanyaan1;
	cin>>jawaban1;
	cout<<pertanyaan2;
	cin>>jawaban2;
	cout<<pertanyaan3;
	cin>>jawaban3;
	cout<<pertanyaan4;
	cin>>jawaban4;
	cout<<pertanyaan5;
	cin>>jawaban5;
	cout<<pertanyaan6;
	cin>>jawaban6;
	cout<<endl;
	cout<<"                               KELUHAN LAPTOP                         "<<endl;
	cout<<pertanyaan7; 
	cin>>jawaban7;
	cout<<pertanyaan8;
	cin>>jawaban8;
	cout<<"=============================TAMPILAN NOTA============================"<<endl;
	cout<<"No.Barang	:";
	getline (std::cin,jawaban1);
	cout<<jawaban1<<endl;
	
	cout<<"Tanggal		:";
	getline (std::cin,jawaban2);
	cout<<jawaban2<<endl;
	
	cout<<"Nama Pelanggan	:";
	getline (std::cin,jawaban3);
	cout<<jawaban3<<endl;
	
	cout<<"Jenis Laptop	:";
	getline (std::cin,jawaban4);
	cout<<jawaban4<<endl;
	
	cout<<"No. Seri		:";
	getline (std::cin,jawaban5);
	cout<<jawaban5<<endl;
	
	cout<<"Telepon		:";
	getline (std::cin,jawaban6);
	cout<<jawaban6<<endl;
	
	cout<<"Keluhan Laptop	:";
	getline (std::cin,jawaban7);
	cout<<jawaban7<<endl;
	
	
	system ("pause");
	return 0;
}

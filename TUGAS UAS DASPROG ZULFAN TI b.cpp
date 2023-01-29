#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>

using namespace std;

typedef struct{
int kode;
char nama[20];
int stock;
char lokasi[20];
}
	brg;
	brg barang[5];
	brg lok[5];
	brg temp;
	int n,i,b, cari, ada;
	
int main()
{
cout<<"\t\t"<<"================================================"<<endl;
cout<<"\t\t"<<" 	     PROGRAM SORTING DAN SEARCHING	  	 "<<endl;
cout<<"\t\t"<<"		       PT. DUTAINDO				         "<<endl;
cout<<"\t\t"<<"         GUDANG SEPATU LOKAL DAN INTERNASIONAl"<<endl;
cout<<"\t\t"<<"	         JLn. SURABAYA - SOLO KM.10		     "<<endl;
cout<<"\t\t"<<"================================================"<<endl;
cout<<"\t"<<"Masukan banyak data = ";
cin>>n;

	for(i=0;i<n;i++) {
	 cout<<endl;
		cout<<"Data ke-"<<(i+1)<<":"<<endl;
		cout<<"Input Kode sepatu : ";cin>>barang[i].kode;
		cout<<"Input Nama sepatu : ";cin>>gets(barang[i].nama);
		cout<<"Input Stock sepatu: ";cin>>barang[i].stock;
		cout<<"Input Lokasi sepatu:";cin>>gets(barang[i].lokasi);
		cout<<endl;
		}
		
 		cout<<"\t\t\t"<<"Data sepatu Anda"<<endl;
 		cout<<"\t\t\t"<<"============================================================"<<endl;
 		cout<<"\t\t\t"<<"| kode sepatu | Nama sepatu | Stock sepatu | Lokasi sepatu |"<<endl;
 		cout<<"\t\t\t"<<"============================================================"<<endl;
 		
 		  for (b=0;b<n;b++){
 		  	
 		   cout<<"\t\t\t"<<"|	"<<barang[b].kode<<"\t\t"<<barang[b].nama<<"\t\t"<<barang[b].stock<<"\t\t "<<barang[b].lokasi<<"	|"<<endl;
		   
		   }
		   
		   cout<<endl;
		   
		cout<<"\t\t\t"<<"==================================================================="<<endl;
		
			for(i=0;i<n-i;b++) {
				
				for(b=0;b<n-1;b++) {
					
					if(barang[b].kode > barang[b+1].kode) {
						
						temp.kode=barang[b].kode;
						
						 barang[b].kode=barang[b+1].kode;
						 
						 barang[b+1].kode=temp.kode;
						 
						 
						 
						 strcpy(temp.nama,barang[b].nama);
						 
						 strcpy(barang[b].nama,barang[b+1].nama);
						 
						 strcpy(barang[b+1].nama,temp.nama);
						 
						 
						 
						 temp.stock=barang[b].stock;
						 
						 barang[b].stock=barang[b+1].stock;
						 
						 barang[b+1].stock=temp.stock;
						 
						 
						 
						 
						 
						 strcpy(temp.lokasi,barang[b].lokasi);
						 
						 strcpy(barang[b].lokasi,barang[b+1].lokasi);
						 
						 strcpy(barang[b+1].lokasi,temp.lokasi);
						 
					}
				
				}
			
			}
			
			cout<<endl;
			
			
			
			
			
		cout<<endl;
		
		
		
		cout<<"\t\t\t"<<"Setelah data diurutkan berdasarkan kode terkecil : "<<endl;
		cout<<"\t\t\t"<<"======================================================================"<<endl;
		cout<<"\t\t\t"<<"| Kode sepatu | Nama sepatu | stock sepatu | Lokasi sepatu 		  |"<<endl;
		cout<<"\t\t\t"<<"======================================================================"<<endl;
		
		for(b=0;b<n;b++) {
			
			cout<<"\t\t\t"<<"|	"<<barang[b].kode<<"\t\t"<<barang[b].nama<<"\t\t	"<<barang[b].lokasi<<"		|"<<endl;
			
		}
		
		cout<<endl;
		
		cout<<"\t\t\t"<<"======================================================================="<<endl;
		
		
		cout<<endl;
		
		cout<<"\t\t\t"<<"Masukan kode Barang Untuk Mencari : ";
		
		cin>>cari;
		
		ada = 0;
		
		for (b=0;b<n;b++)
			{
			if (barang[b].kode==cari);
			
			{
				ada=1;
				
				cout<<"\t\t\t"<<"================================================================"<<endl;
				cout<<"\t\t\t"<<"| Kode sepatu | Stock sepatu | Lokasi sepatu |					|"<<endl;
				cout<<"\t\t\t"<<"================================================================"<<endl;
				cout<<"\t\t\t"<<"|	"<<barang[b].kode<<"\t\t "<<barang[b].stock<<"\t\t "<<barang[b].lokasi<<"		|"<<endl;
			}
		}
				cout<<"\t\t\t"<<"================================================================="<<endl;
				
	if (ada == 0)
		{
			cout<<"Data Tidak ditemukan"<<endl;
			
		 }
	getch(); 
 
 
 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
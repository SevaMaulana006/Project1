#include<iostream>
using namespace std;

int main(){

	float nilai_tugas,nilai_kuis,nilai_UAS,nilai_akhir;
	cout<<"masukkan nilai tugas=";
	cin>>nilai_tugas;
	cout<<"masukkan nilai kuis=";
	cin>>nilai_kuis;
	cout<<"masukkan nilai UAS=";
	cin>>nilai_UAS;
	
	
	nilai_akhir=((40*nilai_kuis)/100) + ((50*nilai_UAS)/100) + ((20*nilai_tugas)/100) ;
	if (nilai_kuis>nilai_UAS){
	} 
	
		 nilai_akhir=((30*nilai_kuis)/100) + ((50 * nilai_UAS)/100) + ((20*nilai_tugas)/100);
		if (nilai_UAS>nilai_kuis){
		}
	if (nilai_akhir>=80 && nilai_akhir<=100){
		cout<<"nilai A";
	} else if(nilai_akhir>=75 && nilai_akhir<=84){
		cout<<"nilai B";
	} else if(nilai_akhir>=65 && nilai_akhir<=74){
		cout<<"nilai c";
	} else if(nilai_akhir>=50 && nilai_akhir<=64){
		cout<<"nilai d";
	} else if(nilai_akhir>=0 && nilai_akhir<=49){
		cout<<"nilai e";
	}
	
	return 0;
}
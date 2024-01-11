#include <iostream>
using namespace std; 

int main() {

    string alamat, tahun, kelamin, divisi, warga, nama, agama, kawin, tanggalmulai, pendidikan, telephone; 
    int a; 
    long gaji, pajak, penghasilan;
    cout <<"=======================================================" << endl ;
    cout <<"                     Selamat Datang" << endl ;
    cout <<"                 FILKOM TOUR AND TRAVEL " << endl ;
    cout <<"            PERJALANAN ANDA MENJADI MENYENANGKAN" << endl;
    cout <<"=======================================================" << endl;
    cout <<"                   Manajemen Karyawan" << endl ;
    cout <<"=======================================================" << endl;
   
    //input nama 
    cout << "Masukan nama : "; 
    getline(cin >> ws, nama); 
    
    //input alamat
    cout << "Masukan alamat : ";
    getline (cin >> ws, alamat );
   
   //input tanggal mulai bekerja 
    cout <<"Masukan tahun mulai bekerja : ";
    getline (cin >> ws, tanggalmulai);   

    //input nomer telephone
    cout << "No Telephone : "; 
    cin >> telephone ;
    cout << endl;

    //input gender
    cout << "Jenis kelamin \n1.Laki-laki \n2.Perempuan\nPilih jenis kelamin (Masukan angka): ";
    cin >> a; 
    cout<< endl;

    kelamin = "Pilihan tidak valid";
    kelamin = (a == 1) ? "Laki-laki" : kelamin;
    kelamin = (a == 2) ? "Perempuan" : kelamin ; 
    cout << endl; 

    //input divisi
    cout << "Divisi: \n1.Administrasi \n2.Supir travel \n3.Supir rentcar\n4.Sekretaris\n5.Manajemen \n6.HRD\n7.Supervisor \n8.Marketing \nPilih Divisi (Masukan angka): ";
    cin >> a;
    divisi = "Pilihan tidak valid";
    divisi = (a==1) ? "Administrasi" : divisi; 
    divisi = (a==2) ? "Supir travel" : divisi; 
    divisi = (a==3) ? "Supir rentcar" : divisi; 
    divisi = (a==4) ? "Sekretaris" : divisi; 
    divisi = (a==5) ? "Manajemen" : divisi; 
    divisi = (a==6) ? "HRD" : divisi;
    divisi = (a==7) ? "Supervisor" : divisi; 
    divisi = (a==8) ? "Marketing" : divisi;
    cout << endl;
    
    //gaji
    gaji = 0 ; 
    gaji = (a==1) ? 9000000: gaji ; 
    gaji = (a==2) ? 7000000: gaji ; 
    gaji = (a==3) ? 7000000: gaji ; 
    gaji = (a==4) ? 6700000: gaji ; 
    gaji = (a==5) ? 7500000: gaji ; 
    gaji = (a==6) ? 8000000: gaji ; 
    gaji = (a==7) ? 6000000: gaji ;
    gaji = (a==8) ? 6800000: gaji ; 
    //pajak
    pajak = gaji * 5/100 ;
    penghasilan = gaji- pajak ;

    //input kewarganegaraan 
    cout <<"Kewarganegaraan \n1.WNI\n2.WNA \nPilih Kewarganegaraan (Masukan angka): ";
    cin >> a ;
    warga = "Data tidak valid"; 
    warga = (a==1) ? "WNI" : warga;
    warga = (a==2) ? "WNA" : warga; 
    cout << endl ; 

    //input pendidikan 
    cout <<"Masukkan pendidikan terakhir : ";
    getline (cin >> ws, pendidikan);
    cout << endl;

    //input agama 
    cout <<"Agama \n1.Islam\n2.Kristen\n3.Katolik\n4.Buddha\n5.Hindu\n6.Konghucu\nMasukan pilihan agama karyawaan (Masukan angka): ";
    cin >> a;
    agama = "Data tidak valid"; 
    agama = (a==1) ? "Islam" : agama; 
    agama = (a==2) ? "Kristen" : agama; 
    agama = (a==3) ? "Katolik" : agama; 
    agama = (a==4) ? "Buddha" : agama; 
    agama = (a==5) ? "Hindu" : agama; 
    agama = (a==6) ? "Konghucu" : agama; 
    cout << endl;

    //input status 
    cout <<"Status \n1.Kawin\n2.Belum kawin\nMasukan pilihan status perkawinan (Masukan angka): ";
    cin >> a;
    kawin = "Data tidak valid";
    kawin = (a==1) ? "Kawin" : kawin;
    kawin = (a==2) ? "Belum kawin" : kawin;
    cout << endl; 

    cout <<"=======================================================" << endl ;
    cout <<"                    Selamat Datang" << endl ;
    cout <<"                 FILKOM TOUR AND TRAVEL " << endl ;
    cout <<"           PERJALANAN ANDA MENJADI MENYENANGKAN" << endl;
    cout <<"=======================================================" << endl;
    cout <<"                   Manajemen Karyawan" << endl ;
    cout <<"=======================================================" << endl;
    //coba output 
    cout <<"Nama                : " << nama << endl;
    cout <<"Alamat              : " << alamat<< endl;
    cout <<"Tahun mulai kerja   : " << tanggalmulai << endl;
    cout <<"Nomer telephone     : " << telephone<< endl;
    cout <<"jenis Kelamin       : " << kelamin<< endl;
    cout <<"Divisi              : " << divisi<< endl;
    cout <<"Kewarganegaraan     : " << warga<< endl;
    cout <<"Pendidikan terakhir : " << pendidikan<< endl;
    cout <<"Agama               : " << agama << endl;
    cout <<"Status perwakinan   : " <<kawin<< endl;
    cout <<"Gaji                : Rp " << gaji << endl; 
    cout <<"PPh 5%              : Rp " << pajak << endl;
    cout <<"Penghasilan bersih  : Rp " << penghasilan << endl;
    cout <<"=======================================================";

    return 0;

}
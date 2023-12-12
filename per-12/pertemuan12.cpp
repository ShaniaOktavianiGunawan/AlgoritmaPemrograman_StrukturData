//Implementasi Struct Sederhana

#include <iostream>
using namespace std;
int main(){
 struct{
 char nim[9];
 char nama[15];
 float nilai;
}
 mahasiswa;
//clrscr();
 cout<<"masukan NIM = ";
 cin>>mahasiswa.nim;
 cout<<"masukan Nama = ";
 cin>>mahasiswa.nama;
 cout<<"masukan Nilai Akhir = ";
 cin>>mahasiswa.nilai;
 cout<<"\n\nData Yang di Inputkan adalah : \n\n";
 cout<<"NIM = "<<mahasiswa.nim<<endl;
 cout<<"Nama = "<<mahasiswa.nama<<endl;
 cout<<"Nilai Akhir = "<<mahasiswa.nilai<<endl;
 getchar();
}

// Implementasi Cara Mengakses Member dalam Struct
#include <iostream>
#include <string>
using namespace std;
struct siswa{
int no_induk ;
string nama;
float nilai ;
};
int main(){
siswa Arkan, Lucas;
Arkan.no_induk = 1;
Arkan.nama = "Arkan Januar";
Arkan.nilai = 75.5;
Lucas.no_induk = 2;
Lucas.nama = "Lucas Laksono";
Lucas.nilai = 89.9;
cout<<Arkan.nama<< " dengan nomor induk "<<Arkan.no_induk << " mendapatkan 
nilai "<<Arkan.nilai<<endl;
cout<<Lucas.nama<<" dengan nomor induk "<<Lucas.no_induk << " mendapatkan 
nilai " << Lucas.nilai<<endl;
return 0;
}

//Implementasi Cara Menginisialisasikan Objek ke dalam Struct
#include <iostream>
#include <string>
using namespace std;
struct siswa{
int no_induk;
string nama;
float nilai;
};
int main(){
siswa Jery={1, "Jery Januar", 85.5}; //Initializer List
siswa tono{2,"Tono Laksono", 89.9}; //Uniform Initialization
cout<<Jery.nama<<" mendapatkan nilai "<<Jery.nilai<<endl;
cout<<tono.nama<<" mendapatkan nilai "<<tono.nilai<<endl;
return 0;
}

// Implementasi Nested Struct
#include<iostream>
using namespace std;
int main(){
 struct dtmhs
{
 char nim[9];
 char nama[15];
};
 struct dtnil
{
 float nil1;
 float nil2;
};
 struct
{
 struct dtmhs mhs;
 struct dtnil nil;
} nilai;
//clrscr();
 
cout<<"masukan NIM = "; cin>>nilai.mhs.nim;
 cout<<"masukan Nama = "; cin>>nilai.mhs.nama;
 cout<<"masukan Nilai UTS = "; cin>>nilai.nil.nil1;
 cout<<"masukan Nilai UAS = "; cin>>nilai.nil.nil2;
 cout<<endl;
 
cout<<"masukan NIM = "<<nilai.mhs.nim<<endl;
 cout<<"masukan Nama = "<<nilai.mhs.nama<<endl;
 cout<<"masukan Nilai UTS = "<<nilai.nil.nil1<<endl;
 cout<<"masukan Nilai UAS = "<<nilai.nil.nil2<<endl;
 cout<<endl;
getchar();
return(0);
}

//Implementasi Struct dengan Array
#include <iostream>
using namespace std;
typedef struct orang
{
 char nama[30];
 short umur;
}
org;
int main(){
 org saya[5];
 int i,x;
 for(i=0; i<=2; i++)
 {
 cout<<"Nama : ";cin>>saya[i].nama;
 cout<<"Umur : ";cin>>saya[i].umur;
 cout<<endl;
 }
 for(x=0; x<=2; x++)
 {
 cout<<"Data ke ["<<x<<"] "<<"bernama "<<saya[x].nama<<" dan berumur 
"<<saya[x].umur<<" tahun";
 cout<<endl;
 }
}

//Implementasi Struct dengan Function
#include <iostream>
using namespace std;
struct Sum {
 int add(int num1, int num2) {
 return num1 + num2;
 }
int add(int num1, int num2, int num3) {
 return num1 + num2 + num3;
 }
};
int main() {
 Sum calculator;
 cout << "hasil 1 = " << calculator.add(5, 7) << endl;
 cout << "hasil 2 = " << calculator.add(9, 2, 5) << endl;
}



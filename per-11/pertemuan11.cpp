//. Implementasi Pointer Dereference
#include<iostream>
using namespace std;
int main()
{
 int ilham, amir, *raka;
 //clrscr();
 ilham = 75;
 amir = ilham;
 raka = &ilham;
 cout<<"Nilai ILHAM = "<<ilham<<endl;
 cout<<"Nilai AMIR = "<<amir<<endl;
 cout<<"Nilai RAKA = "<<raka<<endl;
getchar();
}

//========================
//Implementasi Pointer Reference
#include<iostream>
using namespace std;
int main()
{
int ilham, *raka, rafli;
//clrscr();
 ilham = 75;
 raka = &ilham;
 rafli = *raka;
 cout<<"Nilai ILHAM = "<<ilham<<endl;
 cout<<"Nilai RAKA = "<<raka<<endl;
 cout<<"Nilai RAFLI = "<<rafli<<endl;
getchar();
}

//=========================
//Implementasi Perubahan Nilai dengan Pointer
#include<iostream>
using namespace std;
int main()
{
 int yofrie = 93;
 int *hadiansyah ;
 //clrscr();
 cout<<"Nilai awal yofrie = "<<yofrie<<endl;
 hadiansyah = &yofrie;
 cout<<"Nilai hadiansyah sekarang = ";
 cout<<*hadiansyah<<endl;
 *hadiansyah = 50;
 cout<<"Nilai hadiansyah sekarang = ";
 cout<<*hadiansyah<<endl;
getchar();
}

//============================
//Implementasi Pointer ke Pointer
#include<iostream>
using namespace std;
int main()
{
 int ilham;
 int *raka;
 int **amir;
//clrscr();
 ilham = 75;
 cout<<"Nilai ILHAM = "<<ilham<<endl;
 raka = &ilham;
 amir = &raka;
 
 cout<<"Nilai RAKA Hasil Mengakses ILHAM = ";
 cout<<*raka<<endl;
 cout<<"Nilai AMIR Hasil Mengakses ILHAM = ";
 cout<<**amir<<endl;
getchar();
}

//====================
// Implementasi Pointer pada Array
#include<iostream>
using namespace std;
int main()
{
 int i;
 int nilai[5];
 int *ptrnilai;
 ptrnilai = nilai;
 for(i=1;i<=5;i++)
 {
 cout<<"Masukan Nilai Elemen ke-"<< i << "=";
 cin>>nilai[i];
 }
 cout<<endl;
 cout<<"Hasil Pengaksesan Elemen Array Lewat";
 cout<<"Pointer";
 cout<<endl<<endl;
 for(i=1;i<=5;i++)
 {
 cout<<"Elemen "<<i<<". Nilai "<<nilai[i];
 cout<<", Menempati Alamat Memori = ";
 cout<<&ptrnilai[i];
 cout<<endl;
 }
getchar();
}

//========================
//. Implementasi Pointer pada String
#include <iostream>
using namespace std;
int main()
{
 char band_metal[] = "SEPULTURA";
 char *band_punk = "RANCID";
 cout<<"Nama Band Metal = "<<band_metal<<endl;
 cout<<"Nama Band Punk = "<<band_punk;
 band_punk+=3; //menambah nilai penunjuk / pointer
 cout<<"Nama Band Metal = "<<band_metal<<endl;
 cout<<"Nama Band Punk = "<<band_punk;
getchar();
}


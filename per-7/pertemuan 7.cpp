//Implementasi Fungsi STRCAT()
//#include <iostream>
//#include <string.h>
//#include <ctype.h>
//using namespace std;
//int main()
//{
// char a1[20];
// char a2[20];
////clrscr();
// cout<<"Masukkan Kata - 1 = ";
// cin>>a1;
// cout<<"Masukkan Kata - 2 = ";
// cin>>a2;
// 
// //strcat(a1, a2);
// cout<<"Hasil Penggabungannya "<<a1;
// getchar();
//}
//Implementasi Fungsi STRCMP()
//#include <iostream>
//#include <string.h>
//using namespace std;
//int main()
//{
// char a1[] = "IBIK";
// char a2[] = "Ibik";
// char b1[] = "IBIK";
////clrscr();
// 
// cout<<"Hasil Perbandingan "<<a1<<" dan "<<a2<<"->";
// cout<<strcmp(a1,a2)<<endl;
// cout<<"Hasil Perbandingan "<<a2<<" dan "<<a2<<"->";
// cout<<strcmp(a2,a1) <<endl;
// cout<<"Hasil Perbandingan "<<a1<<" dan "<<b1<<"->";
// cout<<strcmp(a1,b1) <<endl;
// getchar();
//}

// Implementasi Fungsi STRCPY()
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
 char huruf[20];
 char pindah[20];
//clrscr();
 cout<<"Masukkan Sembarang Kata = ";
 cin >> huruf;
/* Proses */
 strcpy(pindah, huruf);
 cout<<"Pemindahannya = "<<pindah;
 getchar();
}


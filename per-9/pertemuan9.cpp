//Implementasi Fungsi Umum
//#include<iostream>
//using namespace std;
//
//void garis(){
// cout << "\n----------------------\n";
// }
///* program utama */
//int main(){
// garis();
// cout<<"\nIBI Kesatuan Bogor"<<endl;
// garis();
// getchar();
//}

//Implementasi Pernyataan return
#include <iostream>
#include <stdio.h>
using namespace std;

int kali (int a, int b)
{
 int hasil;
 hasil = a * b;
 return hasil;
}
int main()
{
 int hasil, a, b;
 cout << "Masukan nilai a = "; 
 cin >> a;
 cout << "Masukan nilai b = "; 
 cin >> b; 
 hasil = kali (a, b);
 cout << "Hasil perkalian = " << hasil << endl; 
 getchar();
}

//Implementasi Variable Eksternal
//#include<iostream>
//using namespace std;
//
//int a = 6;
//void lokal();
//int main(){
// cout << "Penggunaan Variabel Eksternal"<<endl;
// cout << "\nNilai didalam fungsi main() = : "<<a;
// lokal();
// cout << "\nNilai Setelah penggilan fungsi local() = ";
// cout<<a;
// getchar();
// }
//void lokal(){
// a+=10;
//}


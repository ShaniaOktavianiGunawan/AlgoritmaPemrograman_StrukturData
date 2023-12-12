  //#include <iostream>
//using namespace std;
//int main(){
//
// float p = 1.5;
// cout<<"Bentuk bilang desimal dari 6/4 adalah "<<p<<endl;
// 
//}

//#include <iostream>
//using namespace std;
//int main(){
//
//double y;
// y = 12.4567;
// cout<<"Nilai y: "<<y ;
//
//return 0;
//}

//#include <iostream>
//using namespace std;
//int main(){
// bool benar;
// int x,y;
// cout << "Nilai x: ";
// cin >> x;
// cout << "Nilai y: ";
// cin >> y;
// 
// benar = x < y;
// 
// if (benar == true) {
// cout << "x lebih kecil dari y";
// }else{
// cout << "x lebih besar dari atau sama dengan y";
// }
// 
// return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//int main(){
// string a;
// cout << "Masukan nama Anda : ";
// getline (cin,a);
// cout << "Hello " << a << ", how was your day?" << endl;
// return 0;
//}

#include <iostream>
#define phi 3.14159265
using namespace std;

int main()
{
    float jari_jari, tinggi, volume, luas;

    cout << "Masukkan jari-jari tabung: ";
    cin >> jari_jari;

    cout << "Masukkan tinggi tabung: ";
    cin >> tinggi;

    volume = phi * jari_jari * jari_jari * tinggi;
    luas = 2 * phi * jari_jari * (jari_jari + tinggi);

    cout << "Volume tabung = " << volume << endl;
    cout << "Luas tabung = " << luas << endl;

    return 0;
}


//#include <iostream>
//#define phi 3.14159265
//using namespace std;
//
//int main()
//{
//    float jari_jari, tinggi, volume, luas;
//    int pilihan;
//
//    cout << "Pilih soal yang ingin dihitung (1/2): ";
//    cin >> pilihan;
//
//    if (pilihan == 1) {
//        cout << "Soal 1" << endl;
//        
//        cout << "Masukkan jari-jari tabung: ";
//        cin >> jari_jari;
//
//        cout << "Masukkan tinggi tabung: ";
//        cin >> tinggi;
//
//        volume = phi * jari_jari * jari_jari * tinggi;
//        luas = 2 * phi * jari_jari * (jari_jari + tinggi);
//
//        cout << "Volume tabung = " << volume << endl;
//        cout << "Luas tabung = " << luas << endl;
//    } else if (pilihan == 2) {
//        cout << "Soal 2" << endl;
//        
//        // Masukkan instruksi dan perhitungan untuk soal kedua di sini
//    } else {
//        cout << "Pilihan tidak valid." << endl;
//    }
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
// int A,B, c = 0, d = 0;
// //clrscr();
//cout<<"Masukan Nilai A : "; 
//cin>>a;
// cout<<"Masukan Nilai B : "; 
// cin>>b;
// d = a * b;
// cout<<" Hasil dari D = A * B = "<<d<<endl;
// getchar();
//}

//#include <iostream>
//using namespace std;
//int main() {
// int x,y,Tambah,kurang, Kali bagi;
// cout <<"Masukan bilangan kesatu:";
// cin >> x;
// cout <<"Masukan bilangan kedua:";
// cin >> y;
// tambah=x+y;
// kurang=x-y;
// kali=x*y;
// bagi=x/y;
// cout << "Jadi hasil penjumlahannya adalah:" <<tambah<<endl;
// cout << "Jadi hasil pengurangannya adalah:" <<kurang<<endl;
// cout << "Jadi hasil perkaliannya adalah:" <<kali<<endl;
// cout << "Jadi hasil pembagiannya adalah:" <<bagi<<endl;
// return ;
//}


//#include <iostream>
///* Penggunaan Notasi Di Depan Variabel*/
//int main()
//{
//int a = 10, b = 5;
////clrscr();
// printf("Nilai A = %d", a);
// printf("\nNilai ++A = %d", ++a);
// printf("\nNilai A = %d", a);
// printf("\nNilai B = %d", b);
// printf("\nNilai --B = %d", --b);
// printf("\nNilai B = %d", b);
// getchar();
//}

//#include <iostream>
///* Penggunaan Notasi Di Belakang Variabel*/
//int main()
//{
//int a = 10, b = 5;
////clrscr();
// printf("Nilai A = %d", a);
// printf("\nNilai A++ = %d", a++);
// printf("\nNilai A = %d", a);
// printf("\nNilai B = %d", b);
// printf("\nNilai B-- = %d", b--);
// printf("\nNilai B = %d", b);
// getchar();
//}




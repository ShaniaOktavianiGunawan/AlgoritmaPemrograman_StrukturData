//#include <iostream>
//using namespace std;
//int main()
//{
// double tot_beli, potongan=0, jum_bayar=0;
// //clrscr();
// cout<<"Total Pembelian Rp. ";
// cin>>tot_beli;
// if (tot_beli >= 50000)
// potongan = 0.2 * tot_beli;
// cout<<"Besarnya Potongan Rp. "<<potongan<<endl;
// jum_bayar = tot_beli - potongan;
// cout<<"Jumlah yang harus dibayarkan Rp. "<<jum_bayar;
// getchar();
//}

//#include <iostream>
//using namespace std;
//int main()
//{
// float pendptan, jasa=0, komisi=0, total=0;
// //clrscr();
// cout<<"Pendapatan Hari ini Rp. ";
// cin >> pendptan;
// if (pendptan >= 0 && pendptan <= 200000) {
// jasa=10000;
// komisi=0.1*pendptan;
// }
// else {
// if(pendptan<=500000)
// {
// jasa=20000;
// komisi=0.15*pendptan;
// }
// else
// {
// jasa=30000;
// komisi=0.2*pendptan;
// }
// }
///* menghitung total */
// total = komisi+jasa;
// cout<<"Uang Jasa Rp. "<<jasa<<endl;
// cout<<"Uang Komisi Rp. "<<komisi<<endl;
// cout<<"============================="<<endl;
// cout<<"Hasil Total Rp. "<<total<<endl;
// getchar();
//}

//#include <iostream>
//using namespace std;
//int main()
//{
// float pendptan, jasa=0, komisi=0, total =0;
// //clrscr();
// cout<<"Pendapatan Hari ini Rp. ";
// cin>>pendptan;
// if (pendptan >= 0 && pendptan <= 200000) {
// jasa=10000;
// komisi=0.1*pendptan;
// }
// else if(pendptan<=500000) {
// jasa=20000;
// komisi=0.15*pendptan;
// }
// else {
// jasa=30000;
// komisi=0.2*pendptan;
// }
// /* menghitung total */
// total = komisi+jasa;
// cout<<"Uang Jasa Rp. "<<jasa<<endl;
// cout<<"Uang Komisi Rp. "<<komisi<<endl;
//cout<<"============================="<<endl;
// cout<<"Hasil Total Rp. "<<total<<endl;
// getchar();
//}

#include <iostream>
using namespace std;
int main()
{
 char kode;
 //clrscr();
 cout<<"Masukkan Kode Barang [A..C] :";
 cin>>kode;
 
switch(kode){
 case 'A' :
cout<<"Alat Olahraga";
 break;
 case 'B' :
 cout<<"Alat Elektronik";
 break;
 case 'C' :
 cout<<"Alat Masak";
 break;
 default:
 cout<<"Anda Salah Memasukan kode";
 break;
 }
 getchar();
}




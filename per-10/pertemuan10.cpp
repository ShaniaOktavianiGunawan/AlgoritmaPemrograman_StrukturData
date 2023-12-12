//Implementasi Fungsi Inline
//#include<iostream>
//using namespace std;
//inline int kali(int i, int j)
//{
// return(i * j);
//}
//int main()
//{
// int k;
// for(k = 1; k < 20; k++)
// cout<<kali(k, k*2)<<" ";
// getchar();
//}

//==========================
//Implementasi Fungsi Overloading
#include<iostream>
//using namespace std;
//int hitung(int b);
//long hitung(long c);
//float hitung(float d);
//int main()
//{
// cout<< "Hasilnya Fungsi overload-1 : ";
// cout<<hitung(4)<<endl;
// cout<< "Hasilnya Fungsi overload-2 : ";
// cout<<hitung(2)<<endl;
// cout<< "Hasilnya Fungsi overload-3 : ";
// cout<<hitung(3)<<endl;
// getchar();
//}
//int hitung(int b)
//{
// return(b*b);
//}
//long hitung(long c)
//{
// return(c*c);
//}
//double hitung(double d)
//{
// return(d*d);
//}

//=================
// Implementasi Rekursif
//#include <iostream>
//using namespace std;
//
//long int faktorial (int A);
//int main(){
// int x,hasil;
//	cout<<"-----Program Rekursif untuk menghitung nilai faktorial-----"<<endl;
//	cout<<endl;
//	cout<<"Masukan Nilai = ";
//	cin>>x;
//	hasil=faktorial(x);
//	cout<<"Hasil dari "<<x<<"! adalah "<<hasil<<endl;
//}
//long int faktorial (int A){
//	if (A==1)
//		return(A);
//	else
//		return (A*faktorial(A-1));
//}

//========================
// Implementasi Call By Reference
#include<iostream>
using namespace std;
void penjumlahan(int &total)
{
 total=total+1;
}
int main()
{
 int hitung=20;
 int result=0;
 penjumlahan(hitung);
 cout<<"---Pass by Reference---\n";
 cout<<"total=";
 cout<<hitung;
 return 0;
}

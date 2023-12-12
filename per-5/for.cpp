//4 looping 
 /*
 for 
 while 
 do-while
 foreach - setelah belajar array
 */

#include<iostream>
using namespace std;
int main(){
//	int awal, akhir;
//	cout<< "mulai berapa : ";
//	cin>> awal;
//	cout<<"sampai berapa : ";
//	cin >> akhir;
//	for (int a = awal; a <= akhir; a++){//deklarasi 3 variabel, masing" memiliki increment
// cout<<a<< ". saya senang"<<endl;
// 		
//}
//	

// for (in; a++){ //3 parameter  
// 	cout<<a<<t a = 1; a <= 10 ". saya senang"<<endl;
// }

//========================================

//int z = 1;
//while(z <= 10){
//	cout<< z<< ". saya senang"<<endl;
//     z++;	
//}
 
//int z = 1;
//while (z<=10){
//	cout<< z<< ". saya senang"<<endl;
//	z+=2;
//}

//==========================
//
//int awal, akhir;
//cout << "nilai awal :";
//cin >> awal ;
//cout << "nilai akhir :";
//cin>>  akhir;
// 
//int z= awal;
//while(z <= akhir){ // ubah ke >= kalau --
//	cout<<z<< ". saya senang"<< endl;
//	z++;
//} 


//====================
//int a = 1;
//do {
//	cout<< a<<endl;
//	a++;
//}while(a <= 10);


int L,p,l;
string ulang;
do{
	cout <<"=== ================="<<endl;
	cout <<"masukkan panjang persegi panjang \t:";
	cin>> p;
	cout <<" masukkan lebar persegi panjang \t:";
	cin>> l;
	L = p * l;
	cout <<"luas nya adalah : "<<L<<endl;
	cout << "ulangi proses (y/n) : ";
	cin >> ulang;	
} while(ulang== "y"||ulang== "Y");
cout << " \nprogram selesai ";

}

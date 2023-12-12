//#include <iostream>
//using namespace std;
//int main(){
//	int nomor;
////	
//	cout<< "masukkan Nomor = ";
//	cin >> nomor;
	
//	if(statement){
//		kondisi
//	}
//	
//	if(nomor == 6){
//		cout << "tersebut angka 6"<<endl;
//	}
//	
//	if(nomor > 1){ //lebih dari 
//		cout<<"variabel nomor lebih dari 1"<< endl;
//	}
	
//	cout<<"finish"<<endl;
//	
//}

//PERCABANGAN if else

//#include <iostream>
//using namespace std;
//int main(){
//	int biaya,total;
////	
//	cout<< "pengeluaran anda = ";
//	cin >> biaya;
//	
//	if(biaya >10 ){ //lebih dari 
//		total = biaya - 2;
//		cout << "anda mendapatkan potongan"<<endl;
////		
////		 
//	}else {
//		total = biaya;
//		cout << "anda tidak mendapatkan potongan "<<endl;
//	}
//	
//	cout << "biaya awal = "<< biaya<< endl ;
//	cout << "total = "<< total<< endl ;
//}



#include <iostream>
using namespace std;
int main(){
//	cout<<"IF MAJEMUK & Nested if \n=================== \n";
//int a, b ;
//	
//	cout<<"Masukkan angka a : ";
//	cin>>a;
//	
//	//if majemuk
//	
//	if (a==1) {
//		cout<<"angka 1";
//	} else if (a==2) {
//		cout<<"angka 2";
//	} else if (a==3) {
//		cout<<"angka 3";	
//	} else {
//		cout<<"bukan angka";
//	}
	
	// Majemuk
//	int nilai;
//
//    cout << "Masukkan nilai: ";
//    cin >> nilai;
//
//    if (nilai >= 90 && nilai <= 100) { //jika nilai lebih besar = 90 dan jika nilai kurang dari = 100 
//        cout << "Nilai Anda adalah A" << endl;
//    } else if (nilai >= 80 && nilai < 90) {
//        cout << "Nilai Anda adalah B" << endl;
//    } else if (nilai >= 70 && nilai < 80) {
//        cout << "Nilai Anda adalah C" << endl;
//    } else if (nilai >= 60 && nilai < 70) {
//        cout << "Nilai Anda adalah D" << endl;
//    } else if (nilai >= 30 && nilai < 60) {
//        cout << "Nilai Anda adalah E" << endl;
//    } else {
//        cout << "Nilai tidak valid" << endl;
//    }
	
	//nested if
	
//	cout<<"Masukkan angka b : ";
//	cin>>b;
//	
//	if (b==1) {// sama dengan
//		cout<<"angka 1";
//		
//		if (b==2) {
//			cout<<"angka 2";
//			
//			if (b==3) {
//			cout<<"angka 3";
//			}
//			
//		}
//		
//	}
	

	//nested if
	
    int nilai;

    cout << "Masukkan nilai: ";
    cin >> nilai;

    if (nilai >= 10) { //>= lebih besar sama dengan
        if (nilai < 60) { // kurang dari/ lebih kecil
            cout << "Anda tidak lulus." <<endl;
        } else {
            cout << "Anda lulus." <<endl;
        }
    } else {
        cout << "Masukkan nilai yang valid." <<endl;
    }
//
    return 0;
}

//Percabangan switch case

//#include <iostream>
//using namespace std;
//int main(){
//	int pilihan;
//	string  jenis;
//	
//	cout << "pilih salah satu  :" <<endl;
//	cout << "1.laki-laki \n2. perempuan"<< endl;
//	cout << "Pilihan :";
//	cin >> pilihan;
//	
//	switch(pilihan){//variabel apa yang mau di cabangkan 
//		case 1 : 
//			jenis ="laki-laki";
//		break;
//		case 2 : 
//			jenis ="Perempuan";
//		break;
//		
//		default : 
//		jenis = "pilihan tidak ada ";
//		break ;
//	}
//	cout << "saya adalah seorang "<<jenis;
//}

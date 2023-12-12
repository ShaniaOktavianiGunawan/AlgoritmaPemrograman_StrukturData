//#include <iostream>
//using namespace std;
//int main(){
//
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
//
//}


#include <iostream>
using namespace std;
int main(){
	char pilihan;
	string  jenis;
	
	cout << "pilih salah satu  :" <<endl;
	cout << "1.laki-laki \n2. perempuan"<< endl;
	cout << "Pilihan :";
	cin >> pilihan;
	
	switch(pilihan){//variabel apa yang mau di cabangkan 
		case 'A' : 
			jenis ="laki-laki";
		break;
		case 'B': 
			jenis ="Perempuan";
	break;
		
		default : 
		jenis = "pilihan tidak ada ";
		break ;
	}
	cout << "saya adalah seorang "<<jenis;
}

#include <iostream>
using namespace std;
struct nilai {
	double mtk;
	double ips;
	double ipa;
	string ket;
};

int main (){
	//struct kumpulan dari beberapa variabel (variabel nya bebas bisa bertipe data bebas)
	//dalam sebuah identitas yang bisa di gunakan berulang" 
nilai alex; 
//nilai yura;


alex.mtk = 90;
alex.ips = 80;
alex.ipa = 70;
//alex.ket ="LULUS";
alex.ket = "LULUS";

//yura.mtk = 89;
//yura.ips = 88;
//yura.ipa = 85;
//yura.ket = "LULUS";


cout << "nilai alex"<<endl;
cout <<"nilai mtk adalah : "<<alex.mtk<< endl;
cout <<"nilai ips adalah : "<<alex.ips<< endl;
cout <<"nilai ipa adalah : "<<alex.ipa<< endl;
cout <<"Hasil : "<<alex.ket<< endl;
//cout<< "========================================"<<endl;
//cout << "nilai yura"<< endl;
//cout <<"nilai mtk adalah : "<<yura.mtk<< endl;
//cout <<"nilai ips adalah : "<<yura.ips<< endl;
//cout <<"nilai ipa adalah : "<<yura.ipa<< endl;
//cout <<"Hasil : "<<yura.ket<< endl;

	
}



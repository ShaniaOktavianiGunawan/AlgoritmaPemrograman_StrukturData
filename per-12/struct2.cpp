#include <iostream>
using namespace std;

struct dosen {
	string nama;
	int umur;
};

struct matkul{
	string nama_matkul;
	double ipk ;
	string status ;
	
	//panggil struct guru
	dosen dosen1, asdos;
};

int main (){
	dosen  dosen1,asdos;
	matkul matkul1;
	
	dosen1.nama = "Jemmy";
	dosen1.umur = 35;
	
	asdos.nama = "Shania";
	asdos.umur = 23;
	
	matkul1.dosen1 = dosen1;
	matkul1.asdos = asdos;
	
	//cout <<"nama : "<<dosen1.nama<<endl;
	
	matkul1.nama_matkul = "Algo dan Struktur";
	matkul1.ipk = 3.5;
	matkul1.status = "Wajib";
	matkul1.dosen1 = dosen1;
//	
	//cout << matkul.dosen1;
//	cout << matkul.dosen1.nama;
//	cout << matkul1.dosen1.nama;
//	cout <<matkul1.nama_matkul;
//	
	cout<< " nama matkul\t =  " << matkul1.nama_matkul<<endl;
	cout<< " kkm matkul\t =  " << matkul1.ipk<<endl;
	cout<< " status matkul\t =  " << matkul1.status<<endl;
	cout<< " nama dosen\t =  " << matkul1.dosen1.nama<<endl;
	cout<< " umur dosen\t =  " << matkul1.dosen1.umur<<endl;
	cout<< " nama asdos\t =  " << matkul1.asdos.nama<<endl;
	cout<< " umur asdos\t =  " << matkul1.asdos.umur<<endl;
//	
}

#include <iostream>
using namespace std;

int main(){
 int i, j;
 int data_jual[4][4];
 
 for(i=1;i<=3;i++){
 for(j=1;j<=3;j++)
 {
 cout<<"Data Ke - "<<i<<" "<<j<<endl;
 cout<<"Jumlah Penjualan : ";
cin>>data_jual[i][j];
 }
 }
 cout<<"Data Penjualan Pertahun"<<endl;
 cout<<"-----------------------"<<endl;
 cout<<"2001 2002 2003"<<endl;
 cout<<"-----------------------"<<endl;
 
 for(i=1;i<=3;i++){
 for(j=1;j<=3;j++){
 cout<<data_jual[i][j];
 cout<<" ";
 }
 cout<<endl;
 }
 cout<<"-----------------------"<<endl;
 getchar();
}


//-----------------------
//int main() 
//{ 
// int a,b,c; 
// int nilai[2][3][3]= 
//{ 
//      {{120,203,350},{450,246,365},{650,342,461}}, 
//      {{180,251,367},{245,370,578},{320,484,589}}, 
//}; 
// 
//int m=1; 
//cout<<"|----------------------------------------------|"<<endl; 
//cout<<"|         |        |   Tahun Penjualan         |"<<endl; 
//cout<<"|Tahun    |  Hasil |---------------------------|"<<endl; 
//cout<<"| Ke      |   Ke   |  2002 | 2003 | 2004       |"<<endl; 
//cout<<"|--------------------------------------------- |"<<endl; 
// 
//for(a=0; a<2; a++) 
//      { 
//            for(b=0; b<3; b++) 
//            { 
//                  cout<<"   "<<a+1 <<"\t"<<"    " <<b+1 <<"\t"<<"  "; 
//                  for (c=0; c<3; c++) 
//                  {                       
//                        cout<<nilai[a][b][c] <<"   "; 
//                  } 
//                  cout <<endl; 
//            }
//  cout<<"\n"; 
//      } 
//      cout<<"\n"; 
//}

//--------------------
//int main() 
//{ 
//    int r, c, a[100][100], b[100][100], sum[100][100], i, j; 
// 
//    cout << "Masukan Jumlah Baris (between 1 and 100): "; 
//    cin >> r; 
// 
//    cout << "Masukan  (between 1 and 100): "; 
//    cin >> c; 
// 
//    cout << endl << "Masukan matriks pertama: " << endl; 
// 
//    for(i = 0; i < r; ++i) 
//       for(j = 0; j < c; ++j) 
//       { 
//           cout << "Matriks a" << i + 1 << j + 1 << " : "; 
//           cin >> a[i][j]; 
//       } 
//    cout << endl << "Masukan matriks kedua: " << endl; 
//    for(i = 0; i < r; ++i) 
//       for(j = 0; j < c; ++j) 
//       { 
//           cout << "Matriks b" << i + 1 << j + 1 << " : "; 
//           cin >> b[i][j]; 
//   } 
// 
//    for(i = 0; i < r; ++i) 
//        for(j = 0; j < c; ++j) 
//            sum[i][j] = a[i][j] + b[i][j]; 
// 
//    cout << endl << "Penjumlahan kedua matriks: " << endl; 
//    for(i = 0; i < r; ++i) 
//        for(j = 0; j < c; ++j) 
//        { 
//            cout << sum[i][j] << "  "; 
//            if(j == c - 1) 
//                cout << endl; 
//        } 
// 
//    return 0; 
//} 

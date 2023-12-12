//Implementasi GO TO 
#include <iostream>> 
using namespace std; 
int main() 
{ 
    char ulang; 
    awal: 
    cout << "Program perulangan menggunakan go to" << endl; 
    cout<<endl; 
    cout<<"Ingin mengulang perintah (y/t) ?  "; 
    cin>>ulang; 
    cout<<endl; 
    if(ulang=='Y'||ulang=='y'){ 
        goto awal; 
    } 
    if(ulang=='T'||ulang=='t'){
    	   goto akhir; 
    } 
    akhir: 
     
    return 0; 
} 

// Implementasi WHILE 
//#include <iostream> 
//using namespace std; 
//int main() 
//{ 
//  int a, bil=1; 
//  cout << "masukan bilangan pembatas akhir = "; 
//  cin >> a; 
//   
//  while(bil<=a){ 
//    cout<<bil<<" "; 
//    bil++; 
//    } 
//  getchar(); 
//}


//Implementasi WHILE Bercabang 

//#include <iostream> 
//using namespace std; 
//int main() 
//{ 
//int a, b = 5; 
//while (b >= 1){ 
//a = 1; 
//while (a <= b){ 
//cout << a*b << ' '; 
//a++; 
//} 
//cout << '\n'; 
//b--; 
//} 
//return 0; 
//}

//Implementasi DO - WHILE

//#include <iostream> 
//using namespace std; 
// 
//int main() { 
//    int number = 0; 
//    int sum = 0; 
// 
//    do { 
//        sum += number; 
//        cout << "Masukan angka: "; 
//   cin >> number; 
//    } 
//    while (number >= 1); 
//    cout << "\nHasil penjumlahannya adalah  " << sum << endl; 
//    return 0; 
//}


//// Implementasi BREAK pada DO - WHILE 
//#include <iostream> 
//using namespace std; 
//int main() 
//{ 
//int x, bil = 0; 
//cout << "Masukan bilangan pembatas akhir : "; 
//cin >> x;  
//do 
//{ 
//if (bil >= x) 
//break; 
//cout<<bil<<" "; 
//} 
//while(bil+=4);
//getchar(); 
//} 
 

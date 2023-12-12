//Implementasi FOR 
//#include<iostream> 
//using namespace std; 
//int main(){ 
//	int a,b; 
//		cout << "Masukan batas nilai akhir deret bilangan ganjil: "; 
//		cin >> b; 
//			for(a = 1; a <= b; a+=2) 
//	cout<<a<<" "; 
//
//getchar(); 
//} 

//Implementasi NESTED FOR
#include <iostream> 
using namespace std; 
  
int main(){ 
  int a,i,j,k; 
  cout << "Input lebar belah ketupat: "; 
  cin >> a; 
  cout << endl; 
  
  for(i=1; i<=a ;i++) { 
    for(j=1; j<=a-i ;j++) { 
      cout << " "; 
    } 
    for(k=1;k<=i;k++) { 
      cout << " *"; 
    } 
    cout << endl;
     } 
  
  for(i=1; i<=a ;i++) { 
    for(j=1 ;j<=i;j++) { 
      cout << " "; 
    } 
    for(k=1; k<=a-i ;k++) { 
      cout << " *"; 
    } 
    cout << endl; 
  } 
  return 0; 
} 



//#include<iostream>
//using namespace std;
//int main(){
// int bil;
////clrscr();
// for (bil = 60; bil >=10; bil++)
// cout<<bil<<" "; getchar();
//}









//Implementasi NESTED-FOR

//#include<iostream> 
//using namespace std; 
//int main(){ 
//  int a, b; 
////clrscr(); 
//  for(a = 1; a <= 3; a++){ 
//    cout << endl; 
//    for(b = a; b <= 3; b++) 
//      cout<<a<<" "; 
//    } 
//  getchar(); 
//} 

//Implementasi Perulangan Tak Berhingga
//#include<iostream> 
//using namespace std; 
//int main(){ 
//  int bil; 
////clrscr(); 
//  for (bil = 60; bil >=10; bil++)  
//    cout<<bil<<" ";  getchar(); 
//} 


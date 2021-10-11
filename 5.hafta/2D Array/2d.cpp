// 2 dimansiyonel 
 #include <iostream>
 using namespace std;
 
 int main(){
 int IkiBoyutlu[2][4];
 IkiBoyutlu[0][0] = 6;
 IkiBoyutlu[0][1] = 0;
 IkiBoyutlu[0][2] = 9;
 IkiBoyutlu[0][3] = 6;
 IkiBoyutlu[1][0] = 2;
 IkiBoyutlu[1][1] = 0;
 IkiBoyutlu[1][2] = 1;
 IkiBoyutlu[1][3] = 1;


/*
6 0 9 6 
2 0 1 1 

*/


 for(int i = 0; i < 2; i++)
 {
 for(int j = 0; j < 4; j++)
 {
cout << IkiBoyutlu[i][j] << " ";
 }

 }
cout << endl; 
  cout << "1'inci kolon, 1. satir : " << IkiBoyutlu[1][1] << endl; 
 return 0;
 }
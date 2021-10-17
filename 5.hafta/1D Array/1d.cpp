 #include <iostream>
 using namespace std;


int main() {
  string cars[4] = {"A", "B", "C", "D"};
  cout << cars << endl; // bu mumkun degil. 
  cout << "Bir element: " << cars[1] << endl;

cout << "Butun elemenler: " << endl; 
  for(int i = 0; i < 4; i++) { // 0 1 2 3 
     cout << cars[i] << "\n";
  }
  return 0;
}


// int main() {
//  int arr[4];
//  cout << "4 tam sayi giriniz::" << endl;

//  for(int i = 0; i < 4; i++){
//  cin >> arr[i];
// }

// cout << "Dizideki sayilar:";
// for(int i = 0; i < 4; i++){
// cout << " " << arr[i];
// }
//  } 

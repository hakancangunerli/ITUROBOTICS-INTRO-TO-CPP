#include <iostream>
#include <vector>
using namespace std; 


int main() {
vector<int> order = {1, 2, 3};

cout << order[0] << endl;

cout << "Basit size: " << order.size() << endl ; 

order.push_back(4);
order.push_back(5) ;
cout << "Eklendikten sonra size: " << order.size()<< endl  ; 

order.pop_back();
order.pop_back();

cout << "Sildikten sonra size: " << order.size()<< endl  ; 


cout << "elementler: " << endl  ; 

for(int i=0; i < order.size(); i++)
cout << order.at(i) << ' ';

}
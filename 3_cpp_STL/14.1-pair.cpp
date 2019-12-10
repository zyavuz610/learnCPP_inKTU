/*
	PAIR
		#include <utility> // pair kullanımı için
		temel veri tipinde 2 değer tutmak için tanımlanır
		ilk değer olarak;
			sayı içeren değerler, 0
			karakter içerenler, NULL olarak ayarlanır
*/


#include <iostream> 
#include <utility> 
using namespace std; 
  
int main() 
{ 
    pair <int, char> PAIR1[10] ; 
	pair <string, char> PAIR2 ;
  
    PAIR1[0].first = 100; 
    PAIR1[0].second = 'G' ; 
  
    cout << PAIR1[0].first << " " ; 
    cout << PAIR1[0].second << endl ; 
	
	cout << PAIR2.first ;  //it prints nothing i.e NULL 
    cout << PAIR2.second ; //it prints nothing i.e NULL 
  
    return 0; 
} 


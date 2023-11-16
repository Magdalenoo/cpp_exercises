#include <iostream>

using namespace std;

int main()

{ 
    int liczba1, liczba2; 

    cout << "Podaj początek przedziału: ";
    cin >> liczba1;
    cout << "Podaj koniec przedziału: ";
    cin >> liczba2;

    if(liczba1 < liczba2){
        cout << "Rosnąco: ";
        for(int i = liczba1; i <= liczba2; i++){
            cout << i <<" ";
        }
        cout << "\n";

        cout << "Malejąco: ";
        for(int j = liczba2; j >= liczba1; j--){
            cout << j << " ";
        }
        cout << "\n";
    }
    else if(liczba2 < liczba1){
        cout << "Rosnąco: ";
        for(int i = liczba2; i <= liczba1; i++){
            cout << i << " ";
        } 
        cout << "\n";
        cout << "Malejąco: ";
        for(int j = liczba1; j >= liczba2; j--){
            cout << j <<" ";
        }
        cout << "\n";
    }

    return 0;

}

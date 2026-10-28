//C++ by marcel Najważniesze informacje 

//Szkielet programu
#include <iostream>   // wejście/wyjście (cout, cin)
using namespace std;  // żeby pisać cout zamiast std::cout

int main() {
    // tu twój kod
    return 0;            //program po prawidołowym zakończeniu zwaraca 0 
}
//Wypisywanie i wczytywanie
cout << "Hello" << endl;     // wypisz tekst i przejdź do nowej linii
cout << "x = " << x << "\n"; // "\n" też robi nową linię
int a;                       // intiger (liczba całkowita)
cin >> a;                    // wczytaj liczbę od użytkownika

//Zmienne i typy
int liczba = 5;          // liczby całkowite
double pi = 3.14431653232;        // liczby z przecinkiem wieksze od float 
float f = 3.14;
char znak = 'A';         // pojedynczy znak (apostrofy!)
string tekst = "abc";    // tekst (wymaga #include <string>)
bool prawda = true;      // true / false

//Operatory
+  -  *  /  %            // dodawanie, odejmowanie, mnożenie, dzielenie, reszta
++  --                   // zwiększ / zmniejsz o 1
==  !=  <  >  <=  >=     // porównania
&&  ||  !                // i, lub, nie

//Warunki
if (x > 0) {               // if (warunek){piszemy tu komende}
    cout << "dodatnia";
} else if (x == 0) {
    cout << "zero";
} else {
    cout << "ujemna";
}

//Pętle

for (int i = 0; i < 10; i++) {   // powtórz 10 razy
    cout << i << " ";
}

while (x > 0) {                  // dopóki warunek prawdziwy
    x--;
}

//Tablice i vector
int t[5] = {1, 2, 3, 4, 5};      // tablica o stałym rozmiarze
cout << t[0];                    // pierwszy element (indeksy od 0!)

#include <vector>
vector<int> v;                   // tablica o zmiennym rozmiarze
v.push_back(10);                 // dodaj na koniec
v.size();                        // ile elementów
v[0];                            // dostęp po indeksie

for (int el : v) {               // przejdź po wszystkich elementach
    cout << el << " ";
}

//Funkcje
int dodaj(int a, int b) {        // typ zwracany, nazwa, argumenty
    return a + b;
}

void powiedzCzesc() {            // void = nic nie zwraca
    cout << "Cześć";
}

// wywołanie w main:
int wynik = dodaj(2, 3);

//Przydatne rzeczy
#include <algorithm>
sort(v.begin(), v.end());        // posortuj vector
max(a, b);  min(a, b);           // większa / mniejsza z dwóch

#include <cmath>
sqrt(16);  pow(2, 3);  abs(-5);  // pierwiastek, potęga, wartość bezwzględna

#include <string>
tekst.length();                  // długość stringa
tekst[0];                        // pierwszy znak
tekst + "def";                   // sklejanie tekstów


#include <iostream>

using namespace std;

long long silnia(int n) {
    long long wynik = 1;
    for (int i = 1; i <= n; i++) {
        wynik *= i;
    }
    return wynik;
}

bool czyPierwsza(int n) {
    if (n < 2)
        return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main() {
    int a, b;
    cout << "Podaj liczbe calkowita ";
    cin >> a >> b;
    int wyjscie;
    do {
        cout << endl;
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
	cout << "1. Wyznacz silnie pierwszej liczby\n";
        cout << "0. Wyjscie" << endl;
	cout << "2. Sprawdz czy liczba jest pierwsza" << endl;        
        cin >> wyjscie;
	if (wyjscie == 1) {
	    cout << "\nWynik: " << silnia(a) << endl;
	}
	if (wyjscie == 2) {
    		if (czyPierwsza(a))
        	    cout << "Liczba jest pierwsza." << endl;
    	    	else
        	    cout << "Liczba nie jest pierwsza." << endl;
	}
    } while(wyjscie != 0);
    return 0;
}

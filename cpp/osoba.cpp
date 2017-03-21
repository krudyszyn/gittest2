/*
 * osoba.cpp
 *
*/


#include <iostream>
#include <fstream>

using namespace std;

struct osoba //struktura (taka paczka danych)
{
    char imie[20];
    char nazwisko[20];
    int wiek;
};

void pobierzDane(osoba tb[], int ile)
{
    for(int i=0; i<ile; i++)
    {
        cout << "Imie: "; cin >> tb[i].imie;
        cout << "Nazwisko: "; cin >> tb[i].nazwisko;
        cout << "Wiek: "; cin >> tb[i].wiek;
        cout << endl;
    }
}

void wyswietlDane(osoba tb[], int ile)
{
    for(int i=0; i<ile; i++)
    {
        cout << "Imie: " << tb[i].imie <<endl;
        cout << "Nazwisko: " << tb[i].nazwisko <<endl;
        cout << "Wiek: " << tb[i].wiek <<endl;
        cout << endl;
    }
}

void zapiszDane(osoba tb[], int ile)
{
    ofstream hp;
    hp.open("osoby.csv");
    for(int i=0; i<ile; i++)
    {
        hp << tb[i].imie << "," << tb[i].nazwisko << ',' << tb[i].wiek << "\r\n";
    }
    hp.close();
    cout << "Dane zostaly zapisane";
}

void czytajDane(osoba tb[])
{
    ifstream hp("osoby.csv");
    if(!hp.is_open())
    {
        cout << "Błąd otwarcia pliku"
        return 1;
    }
}
//TO DO

int main(int argc, char **argv)
{
    int ile = 0;
    cout << "Ile osób? ";
    cin >> ile;

    osoba *tbOsoby = new osoba[ile];
    pobierzDane(tbOsoby, ile);
    wyswietlDane(tbOsoby, ile);
    zapiszDane(tbOsoby, ile);
    czytajDane(tbOsoby);
	return 0;
}


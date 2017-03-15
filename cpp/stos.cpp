/*
 * stos.cpp
 *
 *
 *
 */


#include <iostream>
#include <cstdlib>
using namespace std;

void push(int stos[], int &sp, int dane) {
    cout << dane << " ";
    stos[sp] = dane;
    sp++;
    }

int pop(int stos[], int &sp) {
    sp--;
    return stos[sp];
    }


int main(int argc, char **argv)
{
    int *stack; //wskaźnik stosu
    int sr; //rozmiar stosu
    int sp = 0; //wskaźnik stosu

    cout << "Podaj rozmiar: "; cin >> sr;
    if (!cin) {
        cout << "bledne dane";
        return -1;
        }
    stack = new int[sr];

    srand(time(NULL));

    for (int i=0; i<sr; i++)
        push(stack, sp, rand()%100 + 1); // wstaw na stos

    cout << endl;

    for (int i=0; i<sr; i++)
        cout << pop(stack, sp)<< " ";


    return 0;
}


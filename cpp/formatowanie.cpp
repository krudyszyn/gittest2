/*
 * formatowanie.cpp
 *
 * Copyright 2017 user <user@lap79>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 *
 * Formatowanie wyjścia, aliasy typów
 * podstawy stosowania string
 */


#include <iostream>
#include <iomanip> //ios_base::fmtflags
#include <cstdio> //printf
#include <math.h> //liczba pi
#include <string>

using namespace std;

int main(int argc, char **argv)
{

    int liczba = 255;

    ios_base::fmtflags fx;
    fx |= cout.hex;
    fx |=cout.showbase;
    cout.flags(fx);
    cout << liczba << endl;

    cout.setf(ios_base::hex, ios_base::basefield);
    cout.setf(ios_base::showbase);
    cout.setf(ios_base::uppercase);
    cout << liczba << endl;

    printf("%#x\n", liczba);
    printf("%#o\n", liczba);
    printf("%10.4f\n", M_PI);
    printf("%.6f\n", M_PI);

    typedef string str;
    str tekst;
    //char tekst2[100];
    //cin.getline(tekst2, 100)
    cout << "Podaj tekst: ";
    getline(cin, tekst);
    cout.setf(ios_base::dec, ios_base::basefield);
    cout << "Rozmiar: " << tekst.size() << endl;
    for (unsigned int i = 0; i < tekst.size(); i++) {
        cout << tekst[i] << "";
        if (tekst[i] ==' ')
            cout << "Spacja!";
    }

	return 0;

}


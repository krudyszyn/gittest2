/*
 * wskaźniki.cpp
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
 *
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
/*
	int x = 11;
    cout << x << endl;
    cout << &x << endl;
    cout << sizeof(x) << endl;

    int *kotek;
    kotek = &x;
    cout << kotek << endl;
    cout << *kotek << endl; //dereferencja
    *kotek += *kotek;
    cout << *kotek << endl; //dereferencja
    kotek += 1; //inkrementacja wskaźnika
    cout << kotek << endl;
*/

    int *tbIntPtr = NULL;
    int tab[100];
    cout << tab <<endl;
    int ile = 0;
    cout << "Ile liczb podasz?";
    cin >> ile;
    tbIntPtr = new int[ile];
    cout << tbIntPtr << endl;
    for (int i = 0; i < ile; i++)
        cin >> tbIntPtr[i];
    cout << *tbIntPtr;
	return 0;
}


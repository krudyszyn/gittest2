/*
 * tab2w.cpp
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
#include <cstdlib>
#include <iomanip>

using namespace std;

int tab2w() {
    int w, k, i, j;

    srand(time(NULL));

    cout << "Podaj wiersze i kolumny";
    cin >> w >> k;

    int **tab; //wskaźnik do wskaźnika
    try {
        tab = new int *[w];
    } catch(bad_alloc) {
        cout << "Za mało pamięci";
        return -1;
    }
    for(i=0; i<w; i++) {
        try {
            tab [i] = new int [k];
        } catch(bad_alloc) {
            cout << "Za mało pamięci";
            return -1;
        }

    for(i=0; i<w; i++) {
        for(j=0; j<k; j++) {
            tab [i][j]=rand()%100 + 1;
            cout << setw(4)<< tab [i][j];
        }
        cout "\in";
    }


    for (i=0; i<w; i++)
        delete [] tab[i];

    delete [] tab;
    return 0;
}


int main(int argc, char **argv)
{
    tab2w();
	return 0;
}



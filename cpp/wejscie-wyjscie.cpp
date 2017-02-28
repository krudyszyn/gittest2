/*
 * wejscie-wyjscie.cpp
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
#include <iomanip>
#include <cstdio>
#include <math.h>
using namespace std;


int main(int argc, char **argv)
{
    int lint = 0;
    cout << "Podaj liczbe";
    cin >> lint;

    cout.setf(ios_base::hex, ios_base::basefield);
    cout.setf(ios_base::showbase);
    cout << "Hex: " << lint << endl;

    cout.setf(ios_base::oct, ios_base::basefield);
    cout.setf(ios_base::showbase);
    cout << "Oct: " << lint << endl;


	return 0;
}


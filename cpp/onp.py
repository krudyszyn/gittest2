#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  onp.py
#
#  Copyright 2017 user <user@lap79>
#
#  This program is free software; you can redistribute it and/or modify
#  it under the terms of the GNU General Public License as published by
#  the Free Software Foundation; either version 2 of the License, or
#  (at your option) any later version.
#
#  This program is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#  GNU General Public License for more details.
#
#  You should have received a copy of the GNU General Public License
#  along with this program; if not, write to the Free Software
#  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
#  MA 02110-1301, USA.
#
#


def main(args):
    stos = []
    onp = raw_input("Podaj wyrażenie: ")
    operand = ''
    for znak in onp:
        if znak != " " and znak.isdigit():
            operand += znak
        elif znak == " " and len(operand):
            stos.append(float(operand))
            operand = "" #wyzerowanie zmiennej tekstowej
        elif znak in ('*', '-', '+', '/', '%'):
            a = str(stos.pop())
            b = str(stos.pop())
            stos.append(eval(a+znak+b)) #eval wykonuje działania między zmiennymi tekstowymi i zwraca liczbę, str przekształca liczbę na tekst
    # TO DO
    # wykrywanie błędów w zapisie ONP
    print "wynik", stos.pop()
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))

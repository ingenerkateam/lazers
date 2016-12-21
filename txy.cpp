/*
	<lazers>
	Copyright (C) <2016>  <NeverMine17>

	This program is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "TXLib.h"
#include "cinm.h"
#include "classes/chelovek.h"
#include "functions.h"

bool execute() {
    TXY txy;
    cinm cinm;
    chelovek chel;
    int times = cinm.ask("Lazers");
    int high = cinm.ask("High[10]");
    txCreateWindow(130, 130);
    txy.lazer(false, high, times, 0, 0);
    txy.pixel(130, 130);
    txy.drawSmile(ULIBKA);
    chel.Draw(-200, -200, 5, 5);
    chel.Erase();
	return true;
}

int main() {
    execute();

    return 0;
}

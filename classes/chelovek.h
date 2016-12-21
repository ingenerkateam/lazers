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

#pragma once
#include "../cfg.h"
class chelovek
{
public:
    void Draw(int x, int y, int polojenie_ryki, int polojenie_nogi)
    {
        txSetColour(manColor);
        txSetFillColour(manColor);
        txCircle(x, y, 10);
        txLine(x, y, x, y+30);

        txLine(x, y+30, x-10+polojenie_nogi, y+45);
        txLine(x, y+30, x-10+polojenie_nogi, y+45);

        txLine(x, y+15, x-25, y+220+polojenie_ryki-215);
        txLine(x, y+15, x+25, y+220+polojenie_ryki-215);
    }

    void Erase()
    {
        while(1)
        {
            txSetFillColor(TX_BLACK);
            txSetColor(TX_BLACK);
            txCircle(txMouseX(),txMouseY(),15);
			if (GetState(txMouseX() ,txMouseY()))
			{
				Draw(-200, -200, 5, 5);
			}
        }
    }

	bool GetState(int x, int y)
	{
		if (txGetPixel(x,y) == manColor)
		{
		    return true;
		}
		else
		{
			return false;
		}
	}
};

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

/**
    @file functions.h
    @mainpage
    Лазеры!

    @author lambda5 <dannevergame@jabber.ru>

*/

#pragma once

#include "TXLib.h"
#include "cfg.h"
#include "cinm.h"
#include "classes\chelovek.h"
#include <iostream>

using namespace std;

//Консолька!

/**
    @brief Класс TXY
    @throw
    1 -- строка 47
    2 -- Картинка не грузит (x)
    3 -- TXLib is not ok
    5 -- Цвет не найден
    @see txy.cpp
*/

class TXY
{
public:

    int COLOR_LAZER;
    int COLOR_TEXT;
    int COLOR_SMILE;
    int abc = 0;//TODO Переименовать


    TXY()
    {
        COLOR_LAZER = RGB(60, 255, 60);
        COLOR_TEXT = RGB(255, 255, 60);
        COLOR_SMILE = RGB(50, 100, 0);
    }

    /**
        @brief Чистим окно
        Одна из самых важных функций в анимации
    */
    void clearWindow()
    {
        txSetFillColor(TX_BLACK);
        txClear();
    }

    /**
        @brief Рисуем лазеры

        @param bool ClearAfterLine Чистит линию за линией если true
        @param double High Высота (рекоменд. знач. 10)
        @param int times Кол. лазеров за 1 for
    */
    void lazer(
        bool ClearAfterLine,
        double High,
        int times,
        int x,
        int y
    )
    {
        if (High >= 40)
        {
            exit(1);
        }


        txSetColor(COLOR_LAZER);

        for (int i = 0; i < times; i++)
        {
            txLine(x + 80 - 10 * i, y + 40, x + 80, y + High);
            txSleep(200);
            if (ClearAfterLine)
            {
                clearWindow();
            }
        }
        clearWindow();
        for (int i = 0; i < times; i++)
        {
            txLine(x + 20 + 10 * i, y + 40, x + 20, y + High);
            txSleep(200);
            if (ClearAfterLine)
            {
                clearWindow();
            }
        }
    }

    /**
       @brief Рисуем рандомные пиксели
    */
    void pixel(int width, int heigth)
    {
        int COLOR_RAND;
        for (int i = 0; i < width * heigth; i++)
        {
            COLOR_RAND = RGB(random(255), random(255), random(255));
            txSetPixel(abc, i % width, COLOR_RAND);
            if ((i % width == 0) && (i > 0))
            {
                abc++;
                txSleep(20);
            }
            else if (abc == heigth)
            {
                COLOR_RAND = RGB(0, 0, 0);
                for (int g = 0; i < width * heigth; i++)
                {
                    txSetPixel(abc, i % width, COLOR_RAND);
                    if (i % width == 0)
                    {
                        abc--;
                        txSleep(20);
                    }
                }
            }
        }
        clearWindow();
    }

    /**
        @brief Рисуем смаил

        @param int smile
        0 это =|
        1 это =)
        2 это =<
    */
    void drawSmile(
        int smile
    )
    {
        txSetColor(COLOR_SMILE, 3);
        switch (smile)
        {
        case POFIGIZM:
            int x;
            for (x = 0; x < 11; x++)
            {
                clearWindow();
                txLine(90, 100, 100, 110);
                txLine(100, 90, 110, 100);
                txLine(120, 100, 100 + x, 100 + x);
                txLine(100, 120, 100 + x, 100 + x);
                txSleep(50);
            }
            break;

        case ULIBKA:
            for (x = 0; x < 21; x++)
            {
                clearWindow();
                txLine(90, 100, 100, 110);
                txLine(100, 90, 110, 100);
                txLine(120, 100, 100 + x, 100 + x);
                txLine(100, 120, 100 + x, 100 + x);
                txSleep(50);
            }
            break;

        case OBIDA:
            clearWindow();
            txLine(90, 100, 100, 110);
            txLine(100, 90, 110, 100);
            txLine(120, 100, 100, 100);
            txLine(100, 120, 100, 100);
            txSleep(50);
            break;
        }
        /* ------------------------ */
    }

    /**
       @brief Вырезаный мейн из txy.сpp
              который рисует текст

    */
    void drawFinalText()
    {
        txSetColor(RGB(random(255), random(255), random(255)), 3);
        txSelectFont("Times New Roman", 20, 0, FW_BOLD);
        txDrawText(5, 50, 100, 100, "Lazers.\n");
        txSleep(2000);
        clearWindow();
    }

};

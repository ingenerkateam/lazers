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
/**
    @file cinm.h
    @version 1.0
    @author lambda5 <dannevergame@jabber.ru>
*/

#include <iostream>
using namespace std;

/**
    @brief Класс cinm
    @see txy.cpp
*/
class cinm
{
public:

    /**
        @brief Запрос cin
        @param string output То что нужно выводить
        @return Текст введенный пользователем
        @code
        cinm::ask("Текст");
        @endcode
    */
    int ask(const char* output)
    {
        int ret;
        cout << output << ": ";
        cin >> ret;
        cout << endl;
        return ret;
    }

    /**
        @brief Вывод текста
        @param string text Текст который нужно вывести
    */
    bool say(const char* text)
    {
        cout << text;
    }
};

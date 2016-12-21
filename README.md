# Lazers! [![Build status](https://ci.appveyor.com/api/projects/status/ar6q91juwfla7gwk)](https://ci.appveyor.com/project/NeverMine1732586/lazers) [![](https://www.gnu.org/graphics/gplv3-127x51.png)](https://www.gnu.org/licenses/gpl-3.0.ru.html)

Это мой проект по инжинерке.
Этот проект демонстратирует возможности TXLib.

Сам код делал я с помощью моего [учителя](https://github.com/mabramovsd).

## Комилинг

### Linux
К сожалению пользователи linux могут пользовоться только `wine ./lazers.exe`.

Wine получить вы можете с помощью команд:
```
git clone git://source.winehq.org/git/wine.git
cd wine
./configure
make
```
Если эти комманды выдаються с ошибками то вам [сюда](https://www.winehq.org/).

### Windows

Команды:
```
git clone https://github.com/nevermine17/lazers.git
cd lazers
g++ -o lazers txy.cpp
```


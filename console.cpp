#include <iostream>
#include "console.hpp"

using namespace std;

Console::Console(){
  
}

void Console::init(int startRow, int startCol)
{
    clearScreen();
    setCursor(startRow, startCol);
}

void Console::hideCursor()
{
    cout << "\033[?25l";
}

void Console::showCursor()
{
    cout << "\033[?25h";
}

void Console::setCursor(int row, int col)
{
    cout << "\033[" << row << ';' << col << 'H';
}

void Console::setColor(Color color)
{
    cout << "\033[" << (int)color << 'm';
}

void Console::setColorFg256(int color) 
{
    cout << "\033[38:5:" << color << "m";
}

void Console::setColorBg256(int color) 
{
    cout << "\033[48:5:" << color << "m";
}

void Console::resetColor()
{
    setColor(Color::Reset);
}

void Console::clearScreen()
{
    cout << "\033[2J";
}
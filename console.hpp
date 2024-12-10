#pragma once

enum Color
{
    BG_Black = 40,
    BG_Red,
    BG_Green,
    BG_Yellow,
    BG_Blue,
    BG_Magenta,
    BG_Cyan,
    BG_White,

    FG_Black = 30,
    FG_Red,
    FG_Green,
    FG_Yellow,
    FG_Blue,
    FG_Magenta,
    FG_Cyan,
    FG_White,

    Reset = 0
};

class Console
{
    Console();
public:
    static void init(int startRow, int startCol);

    static void hideCursor();
    static void showCursor();

    static void setCursor(int row, int col);
    
    static void setColor(Color color);
    static void setColorFg256(int color);
    static void setColorBg256(int color);
    static void resetColor();
    
    static void clearScreen();
};

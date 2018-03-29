#pragma once
#include <iostream>
#pragma once
#include <fstream>

using namespace std;

class Postscript
{
public:
void line ( int startx,  int starty,  int endx,  int endy) const ;
void setColor ( int R,  int G, int B) ;
void drawrect ( int startx,  int starty,  int addx,  int addy) const ;
void fillRect ( int startx,  int starty,  int addx,  int addy) const ;
void setFillColor (  int R,  int G,  int B) const ;

};

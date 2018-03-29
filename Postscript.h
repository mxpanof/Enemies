#pragma once
#include <iostream>
#pragma once
#include <fstream>

using namespace std;

class Postscript
{
public:
<<<<<<< HEAD
void line ( int startx,  int starty,  int endx,  int endy) const ;
void setColor ( int R,  int G, int B) ;
void drawrect ( int startx,  int starty,  int addx,  int addy) const ;
void fillRect ( int startx,  int starty,  int addx,  int addy) const ;
void setFillColor (  int R,  int G,  int B) const ;
=======
void line (int startx, int starty, int endx, int endy)const;
void setColor (int R, int g, int G)const;

void setStrokeColor(int r, int g, int b) const;
void drawTriangle(x1,y1, x2,y2, x3,y3) const;
void fillTriangle(x1,y1, x2,y2, x3,y3) const;
void drawCircle(x,y,r) const; 
void text(x,y, "testing testing 123")const;

>>>>>>> f272fa394f6ef8ef21cc3cf0e5f008f3b55f7a0e

};

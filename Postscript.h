#pragma once
#include <iostream>

using namespace std;

class Postscript
{
public:
void line (int startx, int starty, int endx, int endy)const;
void setColor (int R, int g, int G)const;

void setStrokeColor(int r, int g, int b) const;
void drawTriangle(x1,y1, x2,y2, x3,y3) const;
void fillTriangle(x1,y1, x2,y2, x3,y3) const;
void drawCircle(x,y,r) const; 
void text(x,y, "testing testing 123")const;


};

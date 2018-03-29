#pragma once
#include <iostream>

using namespace std;

class Postscript
{
public:
void line (int startx, int starty, int endx, int endy);
void setColor (int R, int g, int G);

void setStrokeColor(int r, int g, int b);
void drawTriangle(x1,y1, x2,y2, x3,y3);
void fillTriangle(x1,y1, x2,y2, x3,y3);
void drawCircle(x,y,r); 
void text(x,y, "testing testing 123");


};

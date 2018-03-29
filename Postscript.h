#pragma once
#include <iostream>
#pragma once
#include <fstream>
#pragma once
#include <string>

using namespace std;

class Postscript
{
public:

void drawrect ( int startx,  int starty,  int addx,  int addy) const ;
void fillRect ( int startx,  int starty,  int addx,  int addy) const ;
void setFillColor (  int R,  int G,  int B) const ;
void setStrokeColor(int r, int g, int b) const;
void drawTriangle(int trix1,int triy1, int trix2, int triy2, int trix3, int triy3) const;
void fillTriangle(int trix1,int triy1,int trix2, int triy2,int trix3, int triy3) const;
void drawCircle(int trix,int triy,int trir) const; 
void text(int trix, int triy,string phrase)const;

};

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
string fileName;
Postscript (string newFileName);
void drawrect ( int startx,  int starty,  int addx,  int addy) const ;
void fillRect ( int startx,  int starty,  int addx,  int addy) const ;
void setFillColor (  int R,  int G,  int B) const ;
void setStrokeColor(int r, int g, int b) const;
void drawTriangle(int trix1,int triy1, int trix2, int triy2, int trix3, int triy3) const;
void fillTriangle(int trix1,int triy1,int trix2, int triy2,int trix3, int triy3) const;
void drawCircle(int trix,int triy,int trir) const; 
void text(int trix, int triy,string phrase)const;
//what does this do? I don't know, she doesn't know, so it does nothing
void grid(int arg1, int arg2, int arg3, int arg4, int arg4, int arg5, int arg6) const;
~Postscript ();
};

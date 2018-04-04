#include <Postscript.h>
#include <iostream>
#include <fstream>
#include <string>

Class Postscript{
	public:
	Postscript (string newFileName) {
		ofstream writer(newFileName);
		filename = newFileName;
	}
	~Postscript (){
		writer.close();
	};  
	
	void drawRect(int startx,  int starty,  int addx,  int addy) const{
		writer.append() << startx << " " << starty << " moveto " << addx+startx << " " << addy << " " << " lineto " << addx+startx << " " << addy+starty << " lineto " << startx << " " << endy+starty << " closepath stroke\n";
		
	}
	
	void fillRect ( int startx,  int starty,  int addx,  int addy) const {
		writer.append() << startx << " " << starty << " moveto " << addx+startx << " " << starty << " " << " lineto " << addx+startx << " " << addy+starty << " lineto " << startx << " " << endy+starty << " closepath fill\n";
	}
	void setFillColor (  int R,  int G,  int B) const {
		writer.append() << R << " " << G << " " << B << " setrgbcolor fill /n";    
	}
	void setStrokeColor(int r, int g, int b) const {
		writer.append() << R << " " << G << " " << B << " setrgbcolor stroke /n";
	}
	
	void drawTriangle(int trix1,int triy1, int trix2, int triy2, int trix3, int triy3) const{
		writer.append() << trix1 << " " << triy1 << " moveto " << trix2 << " " << triy2 << " lineto " << trix3 << " " << triy3 << " closepath stroke\n " ;
	}
	void fillTriangle(int trix1,int triy1,int trix2, int triy2,int trix3, int triy3) const{
		writer.append() << trix1 << " " << triy1 << " moveto " << trix2 << " " << triy2 << " lineto " << trix3 << " " << triy3 << " closepath fill\n " ;
	}
	void drawCircle(int trix,int triy,int trir) const {
		
	}
	void text(int trix, int triy,string phrase)const{
		
	}
	void grid(int arg1, int arg2, int arg3, int arg4, int arg4, int arg5, int arg6) const{
		
	}
	
	private:
	
};
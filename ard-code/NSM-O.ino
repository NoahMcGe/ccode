//NSM.ino
//Noah McGehee
#include <iostream>
#include <stdio.h>
int nsm();

int main()
{
	trs();
	return 0;
}
// Function
int nsm (){
	int r,c;
	int red, green, blue;
	int val = 0;
	int m[8][8] = {
///////add your 8x8 in
		{1,0,0,0,0,0,0,1} ,
		{2,1,1,1,1,1,1,2} ,
		{0,1,1,0,0,1,1,0} ,
		{2,1,2,1,1,2,1,2} ,
		{0,1,0,1,1,0,1,0} ,
		{2,1,1,2,2,1,1,2} ,
		{0,1,1,1,1,1,1,0},
		{2,0,0,0,0,0,0,2}
	};
//////////////////////////////////////////////////////////////////////////////////////////////////
	
		red = 0; green = 0; blue = 0;
		for (r = 0; r < 8; r++){
			for (c = 0; c < 8; c++){
				val = m[r][c];
				switch (val){
					case 0:
					red = 0; green = 0; blue = 0;
					break;
					case 1:
					red = 255; green = 0; blue = 0;
					break;
					case 2:
					red = 255; green = 255; blue = 0;
					break;
//////////////////////////////////////////////////////////////////////////////////////////////////
				}
				std::cout<<"["<<red<<" "<<green<<" "<<blue<<"]";
			}
			std::cout<<"\n";
	}
	return 0;
}

//compile g++ ifelse_2d6x9.cpp -o ifelse_2d6x9.o
//ifelse_2d.cpp
#include <iostream>
using namespace std;
#include <stdio.h>

int main()
{
		int r,c;//row and column
		char thechar;
		char w = 'O';
		char x = '*';
		char y = '?';
		char z = 'x';
		int val = 0;
		int m[6][9] = {
			{1,1,1,0,0,0,0,1,1} ,
			{1,1,0,1,0,0,0,1,1} ,
			{1,1,0,0,1,0,0,1,1} ,
			{1,1,0,0,0,1,0,1,1} ,
			{1,1,0,0,0,0,1,1,1},
			{1,1,0,0,0,0,0,1,1}
		};

		  for (r = 0; r < 6; r++){
			for (c = 0; c < 9; c++){
			  val = m[r][c];
			  if (val == 1){
				  thechar = w;}
			  else if (val == 2){
				  thechar = x;
				  }
			  else if (val == 3){
				  thechar = y;
				  }
			  else if (val == 0){
				  thechar = z;
				  }
			 
				  cout<<thechar;
			}
			cout<<"\n";
		}
	return 0;
}

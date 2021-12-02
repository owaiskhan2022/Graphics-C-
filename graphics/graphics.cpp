#include<iostream>
#include<graphics.h>

using namespace std;
int main(){
	
	int gd , gm ;
	initgraph(&gd,&gm,"");
	setfillstyle(2,12);
	floodfill(2,1,4);
	getch();
	return 0;
}

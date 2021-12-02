#include<iostream>
#include<graphics.h>

using namespace std;

int main(){
	int gd=DETECT,midx,midy,gm,err;
	char a;
	initgraph(&gd,&gm,"");
	err = graphresult();
	if(err!= grOk)
	cout<<"error\n"<<grapherrormsg(err);
	
while(kbhit()){
		
		cin>>a;
		switch(a)
		{
			case 'w':
				for(int i=500;i<800;i++){
					midy = i;
					circle(midx,midy,100);
					setfillstyle(1,4);
					floodfill(700,500,15);
					delay(100);
					system("cls");
				}
				for(int i=800;i>500;i--){
					midy = i;
					circle(midx,midy,100);
					setfillstyle(1,4);
					floodfill(700,500,15);
				}
				
		}
		
	}
	
	
	
	getch();
	//closegraph();
	return 0;
}

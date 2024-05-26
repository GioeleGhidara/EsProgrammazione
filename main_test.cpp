#include<iostream>
#include <cstring>

#include "CQuadrilateral.h"
#include "CRectangle.h"
#include "CRhombus.h"
#include "ListQuad.h"


const int LISTL=6; 

Quadrilateral* quadList[LISTL];

void Show() {
	
	int i; 
	
	for (i=0; i<LISTL; i++)
		quadList[i]->Drawing();
	
}


int main() {

	 
	TextArea a1, a2;
	char t1[SLEN]= "testo 1"; 
	char t2[SLEN]= "testo 2"; 
	char t3[SLEN]= "testo 3";
	
	memcpy(a1.string,t1,strlen(t1)+1);
	a1.size = 8; 
	memcpy(a2.string,t2,strlen(t2)+1);
	a2.size = 14;
	
	Rectangle rectA(10,5);
	Rectangle rectB(3,7,a1);
	Rectangle rectC = rectA;

	Rhombus rhoA(6,2,a2);
	Rhombus rhoB = rhoA;
	Rhombus rhoC(4,3);
		
	quadList[0]= &rectA;
	quadList[1]= &rectB;
	quadList[2]= &rectC;
	quadList[3]= &rhoA;
	quadList[4]= &rhoB;
	quadList[5]= &rhoC;

	Show();
	
	
	rectA.SetFontSize(20);
	rectC=rectA;
	rectB.SetTextArea(a2);
	rhoB.SetText(t3);
	
	Show();
	

	return 0;

}
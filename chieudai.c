  
#include<stdio.h>

int main(void) {
//khai bao bien l
	double l;
	printf("nhap do dai can chuyen doi l = ");
	scanf("%d",&l);
	printf("Met(m)\txentimet(cm)\tmilimet(mm)\n");	
	printf("%f\t%f\t%f",l,l*100,l*1000);
	return 0;
}

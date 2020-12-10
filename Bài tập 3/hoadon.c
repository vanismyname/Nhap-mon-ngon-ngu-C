#include<stdio.h>

int main(){
//khai bao hai bien dongia,soluong,thanhtien
	float dongia,soluong,thanhtien;
	printf("nhap vao dongia va soluong");
	scanf("%f%f", &dongia, &soluong);
//dieu kien
	if("soluong >= 5"){
		thanhtien = dongia + soluong;
//giam gia 25% = 75% cac loai hang hoa
		printf("thanhtien \n");
		thanhtien = (dongia + soluong)*0.75;
}else {
	printf("soluong < 5");
} 
	getchar();
	return 0;
}

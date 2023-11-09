#include <stdio.h>
int main(){
	int nam, thang;
	printf("Nhap thang");
	scanf("%d",&thang);
	printf("Nhap nam");
	scanf("%d", &nam);
	switch (thang){
		case 1: case 3: case 5: case 7 : case 8: case 10: case 12:
			printf("31 ngay");
			break;
			
		case 2:
			if(nam%4==0){
				printf("29 ngay");
			}else{
				printf("28 ngay");
			}
			break;
			
		case 4: case 6: case 9: case 11:
			printf("30 ngay");
			break;
			
		default:
			printf("Khong hop le");
			break;		
	}
}
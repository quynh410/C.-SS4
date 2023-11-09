#include <stdio.h>
int main(){
	int songuyen;
	printf("Nhap so nguyen bat ki : ");
	scanf("%d", &songuyen);
	if(songuyen % 3 == 0 && songuyen % 5 == 0){
		printf("thoa man");
	}else{
		printf("khong thoa man ");
	}
}
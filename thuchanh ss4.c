#include <stdio.h>
int main(){
	int number;
	printf("nhap vao 1 so nguyen:");
	scanf("%d",&number);
	if(number%2==0){
	printf("%d là so cha\n",number);
	}else{
		printf("%d la so le\n", number);
	}
}
#include <stdio.h>

int main(){
	int a;
	printf("nhap so nam can kiem tra ");
	scanf("%d",&a);
	if(a<=0){
	printf("nam vua nhap ko hop le ");
	}
	else {
	if (a%4==0&&a%100!=0||a%400==0){
		printf("nam vua nhap la nam nhuan");
	}
	  
	else{
		printf("nam vua nhap la nam ko nhuan");
	}
}
	return 0;
}

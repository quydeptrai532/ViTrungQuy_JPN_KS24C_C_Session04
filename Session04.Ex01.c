#include<stdio.h>

int main(){
	int n;
	printf("nhap vao mot so nguyen ");
	scanf("%d",&n);
	if(n<0){
		printf("so vua nhap la so am");
	}
	else {
		if(n>0){
			printf("so vua nhap la so duong");
		}
		else {printf("so vua nhap la so 0");
		}
	}
	
}


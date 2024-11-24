#include<stdio.h>

int main()
{
	int so1,so2,so3;
	printf("nhap vao so thu 1\n");
	scanf("%d",&so1);
	printf("nhap vao so thu 2\n");
	scanf("%d",&so2);
	printf("nhap vao so thu 3\n");
	scanf("%d",&so3);
	if (so1<so3&&so3<so2){
		printf("so thu 3 nam trong khoang tu so thu1 den so thu 2");
	}
	else {
		printf("so thu 3 ko nam trong khoang tu so thu 1 den so thu 2");
	}
	return 0;
}

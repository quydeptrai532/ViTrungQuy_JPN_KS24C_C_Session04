#include <stdio.h>

int main()
{
	int n;
	printf("nhap so can kiem tra");
	scanf("%d",&n);
	if (n%3==0&&n%5==0){
		printf("so vua nhap chia het cho ca 3 va 5");
		
	}
	else {
		if(n%3==0&&n%5!=0){
			printf("so vua nhap chi chia het cho 3");
		}
		else{
			if(n%3!=0&&n%5==0){
				printf("so vua nhap chi chia het cho 5");
				
			}
			else {
				printf("so vua nhap ko chia het cho ca 3 va 5");
			}
		}	
		}
}

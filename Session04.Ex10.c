#include <stdio.h>

int main(){
	int so1,so2,so3,tamthoi=0;
		printf("nhap so thu nhat ");
	scanf("%d",&so1);
	printf("nhap so thu hai ");
	scanf("%d",&so2);
	printf("nhap so thu ba ");
	scanf("%d",&so3);
	if (so1>so2){
		tamthoi=so1;
		so1=so2;
		so2=tamthoi;
		}
	if(so2>so3){
		tamthoi=0;
		tamthoi=so2;
		so2=so3;
		so3=tamthoi;
	}
	if (so1>so2){
		tamthoi=0;
		tamthoi=so1;
		so1=so2;
		so2=tamthoi;
		
	}
	printf("cac so tu be den lon la: %d %d %d",so1,so2,so3);
	return 0;
		
}

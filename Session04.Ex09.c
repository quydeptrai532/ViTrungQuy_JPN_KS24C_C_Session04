#include<stdio.h>

int main(){
	int ngay,thang,nam,songaytrongthang=0;	
	printf("nhap nam");
	scanf("%d",&nam);
	printf("nhap thang");
	scanf("%d",&thang);
	printf("nhap ngay");
    scanf("%d",&ngay);
    if(nam<1 || thang<1 || thang >12 || ngay <1 || ngay>31){
    	printf("ko hop le");
	}
	switch (thang){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12: 
		  printf("&d/%d/%d hop le",ngay,thang,nam);
		  break;
		case 4: case 6: case 9: case 11:
		 songaytrongthang=30;
		if(ngay<=songaytrongthang){
		    printf("%d/%d/%d hop le",ngay,thang,nam);	
		} 
		else {
			printf("%d/%d/%d khong hop le",ngay,thang,nam);
		}
		break; 
		case 2: 
		if (nam%4==0&&nam%100!=0||nam%400==0){
			songaytrongthang=29;
			
		}
		else { songaytrongthang=28;
		}
		if(ngay<=songaytrongthang){
		    printf("%d/%d/%d hop le",ngay,thang,nam);	
		} 
		else {
			printf("%d/%d/%d khong hop le",ngay,thang,nam);
		break;
		default	: return 0;	
	}
    
}
 return 0;
}



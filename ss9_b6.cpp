#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
	int i,j;
	int num;
	int a,b;
	int tong,tich;
	int matrix[100][100];
	int max1=matrix[0][0];
	int max2=matrix[0][0];
	int max3=matrix[0][0];
	do{
	printf("\nnhap lua chon cua ban: \n1:Nhap kich co va gia tri cac phan tu trong mang \n2:in gia tri cua cac phan trong mang theo ma tran \n3:in gia tri cac phan tu le va tinh tong \n4:in ra cac phan tu nam tren duong bien la tinh tich \n5:In ra cac phan tu nam tren duong cheo chinh \n6:In ra cac phan tu nam tren duong cheo phu \n7:tin ra dong co gia tri cac phan tu la lon nhat \n8:Thoat");
	printf("\n");
	scanf("%d", &num);
		if(num==1){
			printf("nhap so hang:");
			scanf("%d", &a);
			printf("nhap so cot:");
			scanf("%d", &b);
			printf("nhap cac phan tu trong mang(%d phan tu):", a*b);
			for(i=0;i<a;i++){
				for(j=0;j<b;j++){
				scanf("%d", &matrix[i][j]);
			}
		}
}
		if(num==2){
			for(i=0;i<a;i++){
				for(j=0;j<b;j++){
				printf("%d ", matrix[i][j]);
			}
			printf("\n");
		}
	}
		if(num==3){
			for(i=0;i<a;i++){
				for(j=0;j<b;j++){
					if(matrix[i][j]%2!=0){
						printf("\n cac phan tu le la %d ", matrix[i][j]);
						tong+=matrix[i][j];
					}
				}
			}
			printf("\ntong=%d", tong);
		}
		if(num==4){
				for(j=0;j<b;j++){
					printf("%d ", matrix[0][j]);
					tich*=matrix[0][j];
				}
				for(i=1;i<2;i++){
					printf("\n%d ", matrix[i][0]);
					tich*=matrix[i][0];
				}
				for(i=0;i<2;i++){
					printf(" ");
				}
				printf("%d ", matrix[1][2]);
				tich*=matrix[1][2];
				
				printf("\n");
				for(j=0;j<a;j++){
					printf("%d ", matrix[2][j]);
					tich*=matrix[2][j];
				}
				printf("\ntich=%d", tich);
			}
		if(num==5){
			printf("cac phan tu nam tren duong cheo chinh:\n");
				for(i=0;i<a;i++){
					for(j=0;j<i;j++){
						printf(" ");
					}
					printf("%d ", matrix[i][j]);
					printf("\n");
				}
		}
		if(num==6){
			printf("cac phan tu nam tren duong cheo chinh:\n");
				for(i=0;i<a;i++){
					for(j=2;j>=i;j--){
						printf(" ");
					}
					printf("%d ", matrix[i][a-1-i]);
					printf("\n");
				}
		}
		if(num==7){
			int col,max=matrix[0][0];
			for(i=0;i<a;i++){
				int sum=0;
				for(j=0;j<b;j++){
					sum+=matrix[i][j];   
				}
				
					if(sum>max){
					max=sum;
					col=i;
				}
			}
			printf("\ndong co phan tu lon nhat la:");
			for(int j=0;j<b;j++){
				printf("%d ", matrix[col][j]);
			}

		}
}while(num!=8);
exit(0);
}

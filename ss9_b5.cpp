#include <stdio.h>
#include <math.h>

int main(){
	
	int ne;
	
	int pos;
	
	int n,i;
	
	int num;
	
	int tong;
	
	int max=-pow(10,9);
	
	int min=pow(10,9);
	
	int tong2;
	
	int cnt;
	
	int count;
	
	int find;
	do {

		printf("\nnhap lua chon cua ban: \n1:Nhap so phan tu va gia tri cua phan tu \n2:hien thi mang \n3:in ra phan tu chan va tinh tong \n4:tim max, min \n5:In ra so nguyen to va tinh tong \n6:Nhap vao mot so va thong ke trong mang co bao nhieu so do \n7:them phan tu vao vi tri chi dinh \n8:Thoat");
		printf("\n");
		scanf("%d", &num);
		
		switch(num){
			case 1:
			int arr[100];
			printf("nhap so luong phan tu co trong mang:");
			scanf("%d", &n);
			printf("nhap cac phan tu co trong mang:");
			for(i=0;i<n;i++){
				scanf("%d", &arr[i]);
	}
			break;
			case 2:
				for(i=0;i<n;i++){
				printf("\nphan tu thu %d co gia tri la %d", i+1,arr[i]);
			}
			break;
			case 3:
				for(i=0;i<n;i++){
					if(arr[i]%2==0){
						printf("\n cac phan tu chan trong mang la %d", arr[i]);
						tong+=arr[i];
					}
				}
				printf("\ntong = %d", tong);
			break;
			case 4:
				for(i=0;i<n;i++){
					if(arr[i]>max){
						max=arr[i];
					}else if(arr[i]<min){
						min=arr[i];
					}
				}
				printf("\nmax=%d", max);
				printf("\nmin=%d", min);
			break;
			case 5:
				for(i=0;i<=n;i++){
					cnt=0;
					for(int j=1;j<=arr[n];j++){
						if(arr[i]%j==0){
							cnt++;
							
						}
					}
					if(cnt==2){
						printf("\n%d la so nguyen to", arr[i]);
						tong2+=arr[i];
					}
				}
			break;
			case 6:
				printf("nhap so bat ky:");
				scanf("%d", &find);
				count=0;
				for(i=0;i<n;i++){
					if(arr[i]==find){
						count++;
					}
				}
				printf("\nphan tu %d xuat hien %d lan",find,count);
				break;
			case 7:
				ne=i+1;
				printf("nhap vi tri phan tu can sua:");
				scanf("%d", &ne);
				ne--;
				if(ne>0){
					printf("\nhop le!");
				}else {
					printf("\nkhong hop le!");
					exit(0);
				}
				int pos;
					printf("nhap gia tri moi:");
					scanf("%d", &pos);
					arr[ne]=pos;
					for(i=0;i<n;i++){
					printf("\nphan tu thu %d co gia tri la %d", i+1,arr[i]);
				}
				printf("\n gia tri moi cua phan tu thu %d la %d", ne+1,pos);
			break;
			case 8:
				break;
			
		}
	}while(n!=8);
	exit(0);
}
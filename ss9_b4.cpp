#include <stdio.h>
#include <stdlib.h>
int main(){
	int ne;
	
	int pos;
	
	int n,i;
	
	int num;
	
	do {

		printf("\nnhap lua chon cua ban: \n1:Nhap vao mang \n2:hien thi mang \n3:Them phan tu \n4:Sua phan tu \n5:Xoa phan tu \n6:Thoat");
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
			printf("nhap vi tri phan tu muon them vao:");
			scanf("%d", &ne);
			ne--;
			if(ne>0){
			printf("hop le!");
			}else printf("khong hop le");
		pos=arr[ne]-1;
		printf("nhap gia tri tai vi tri da chon:");
		scanf("%d", &pos);
		if(ne>=n){
		for(i=0;i<ne;i++){
			printf("\nphan tu thu %d co gia la %d ", i+1,arr[i]);
		}
			printf("\nphan tu moi them vao la %d, vi tri thu %d ", pos, ne+1);
		}else {
		for(i=n;i>=ne;i--){
			arr[i]=arr[i-1];
		}
		arr[ne]=pos;
		for(i=0;i<=n;i++){
			printf("\nphan tu thu %d co gia la %d ", i+1,arr[i]);
		}
		printf("\nphan tu moi them vao la %d, vi tri thu %d ", pos, ne+1);
}
				break;
				
			case 4:
				ne=i+1;
				printf("nhap vi tri phan tu can sua:");
				scanf("%d", &ne);
				ne--;
				if(ne>0){
					printf("hop le!");
				}else {
					printf("khong hop le!");
				exit(0);
				}
				printf("nhap gia tri moi:");
				scanf("%d", &pos);
				arr[ne]=pos;
				for(i=0;i<n;i++){
					printf("\nphan tu thu %d co gia tri la %d", i+1,arr[i]);
				}	
					printf("\n gia tri moi cua phan tu thu %d la %d", ne+1,pos);
				break;
				
			case 5:
				printf("nhap vi tri muon xoa:");
				scanf("%d", &ne);
				ne--;
				if(ne>0){
					printf("hop le!");
				}else printf("khong hop le");	
				for(i=ne;i<n;i++){
					arr[i]=arr[i+1];
				}
			
				for(i=0;i<n-1;i++){
					printf("\nphan tu thu %d co gia la %d ", i+1,arr[i]);
				}
				break;
				
			case 6:
				break;
				
			default:
				printf("khong hop le!");
		}
	}while(num!=6);
	exit(0);
	return 0;
}
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
	int n,i;
	int arr[100];
	printf("nhap so luong phan tu co trong mang:");
	scanf("%d", &n);
	printf("nhap cac phan tu co trong mang:");
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	int ne=i+1;
	printf("nhap vi tri phan tu can sua:");
	scanf("%d", &ne);
	ne--;
	if(ne>0){
		printf("hop le!");
	}else {
		printf("khong hop le!");
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
}
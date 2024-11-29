#include <stdio.h>
#include <math.h>
int main(){
	int n,i;
	int arr[100];
	printf("nhap so luong phan tu muon nhap trong mang:");
		scanf("%d", &n);
	printf("nhap cac phan tu trong mang(%d phan tu):",n);
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	int ne;
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
}
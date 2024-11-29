#include <stdio.h>
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
	printf("nhap vi tri phan tu muon them vao:");
		scanf("%d", &ne);
	ne--;
		if(ne>0){
			printf("hop le!");
		}else printf("khong hop le");
	int pos=arr[ne]-1;
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
}


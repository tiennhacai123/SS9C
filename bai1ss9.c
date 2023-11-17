#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main(){
	// khai bao mang arr co 100 phan tu 
	int currentIndex=0;
	int arr[100];
	// khai bao so phan tu va gia tri trong tung phan tu
	int numberOfElements=0;
	int sum=0;
	int max,min;
	int divisor;
	int number,statistical;
	int position,value;
	do{
		// in danh sach de chon
		printf("MENU\n");
		printf("1.Nhap so phan tu can nhap va gia tri cac phan tu\n");
		printf("2.In ra gia tri cac phan tu dang quan ly\n");
		printf("3.In ra cac phan tu co gia tri chan va tinh tong\n");
		printf("4.In ra gia tri lon nhat va nho nhat trong mang\n");
		printf("5.In ra cac phan tu la so nguyen to trong mang va tinh tong\n");
		printf("6.Nhap vao 1 so va thong ke trong mang co bao nhieu phan tu co gia tri nhu vay\n");
		printf("7.Them 1 phan tu vao vi tri chi dinh\n");
		printf("8.Thoat\n");
		int choose;
		printf("Nhap so: ");
		scanf("%d",&choose);
		switch(choose){
			//1. Nhap so phan tu can nhap va gia tri cac phan tu
			case 1:
				printf("Nhap so phan tu can nhap: ");
				scanf("%d",&numberOfElements);
				printf("Nhap gia tri vao phan tu\n");
				for(int i=0;i<numberOfElements;i++){
					printf("arr[%d]= ", currentIndex);
					scanf("%d", &arr[currentIndex]);
					currentIndex++;
				}
				break;
			case 2:
				printf("Cac gia tri co trong mang la: ");
				for(int i=0;i<currentIndex;i++){
					printf("%d\t",arr[i]);
				}
				printf("\n");
				break;
			case 3:
				printf("Cac gia tri chan trong mang la:");
				for(int i=0;i<currentIndex;i++){
					if(arr[i]%2==0){
						printf("%d\t",arr[i]);
						sum+=arr[i];	
					}
				}
				printf("\n");
				printf("Tong cac gia tri chan la: %d\n",sum);
				break;
			case 4:
				max = arr[0];
				min = arr[0];
				for(int i=0;i<currentIndex;i++){
					if(max<arr[i]){
						max=arr[i];
					}
					if(min>arr[i]){
						min=arr[i];
					}
				}
				printf("\n");
				printf("So lon nhat trong mang la: %d\n",max);
				printf("So nho nhat trong mang la: %d\n",min);
				break;
			case 5:
				printf("Cac so nguyen to trong mang la:");
				for(int i=0;i<currentIndex;i++){
					divisor=0;
					for(int j=1;j<=sqrt(arr[i]);j++){
						if(arr[i]%j==0){
							divisor++;
						}
					}
					if(divisor==1){
						printf("arr[%d]\n",arr[1]);
						sum+=arr[i];
					}
				}
				printf("Tong cac so nguyen to trong mang la: %d\n",sum);
				break;
			case 6:
				printf("Nhap vao mot so: ");
				scanf("%d",&number);
				statistical=0;
				for(int i=0;i<currentIndex;i++){
					if(arr[i]==number){
						statistical++;
					}
				}
				printf("Co %d phan tu co gia tri bang %d\n",statistical,number);
				break;
			case 7:
				printf("Nhap vao vi tri muon chen: ");
				scanf("%d",&position);
				if(position<0){
					printf("Khong hop le/n");
				}else if(position>currentIndex){
					printf("Nhap gia tri muon chen: \n");
					scanf("%d",&value);
					currentIndex+=position-currentIndex;				
					printf("Cac gia tri sau khi them phan tu la: \n");
					for(int i=0;i<currentIndex;i++){
						printf("%d\t",arr[i]);
				}
				}else{
					printf("Nhap gia tri muon chen: ");
                    scanf("%d", &value);
                    for (int i = currentIndex; i > position; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[position] = value;
                    currentIndex++;
                    printf("Cac gia tri sau khi them phan tu la: ");
                    for (int i = 0; i < currentIndex; i++) {
                        printf("%d\t", arr[i]);
                    }
                    printf("\n");
                }
                break;
			case 8:
				exit(0);
			default:
				printf("Khong hop le");				
		}
	}while(1==1);
}
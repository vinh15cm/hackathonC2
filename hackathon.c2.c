#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>

int n,temp;
int min_index;
struct todoList{
	int id;
	char startDate[50];
	char endDate[50];
	char content[100];
	bool status;
};
struct todoList work[100];
void nhapTodoList(int *n)
{
	printf("nhap so cong viec can lam");
	scanf("%d",n);
	for(int i=0;i < *n ; i++){
	printf("Cong viec  %d\n",i+1);
	printf("Id :"); scanf("%d",&work[i].id);
	printf("Ngay can lam :"); scanf("%s",&work[i].startDate);
	printf("can xong truoc :"); scanf("%s",&work[i].endDate);
	printf("Noi dung :"); scanf("%s",&work[i].content);
	printf("\n");
}
}
void themLastTodoList(int *n)
{
	(*n)++;
	for(int i=*n;i <= *n ; i++){
		printf("Cong viec  %d\n",i);
		printf("Id :"); scanf("%d",&work[i-1].id);
		printf("Ngat can lam :"); scanf("%s",&work[i-1].startDate);
		printf("can xong truoc :"); scanf("%s",&work[i-1].endDate);
		printf("Noi dung :"); scanf("%s",&work[i-1].content);
		printf("\n");
	}
}
void hienthiTodoList(int *n)
{
	for(int i=0;i<*n;i++){
		printf("Todolist %d\n",i+1);
		printf("Id : %d\n",work[i].id);
		printf("Ngay can lam: %s\n",work[i].startDate);
		printf("Ngay ket thuc : %s\n",work[i].endDate);
		printf("Noi dung : %s\n",work[i].content);
		if(work[i].status==0){
			printf("Chua xong\n");
		}else if(work[i].status==1){
			printf("Da xong\n");
		}else {
			printf("\n");
		}
		printf("\n");
	}
}
void suaTodoList(int *n)
{
	int fix;
	printf("Nhap Id muon sua :");
	scanf("%d",&fix);
	if(fix >*n){
		printf("Khong co hoat dong\n");
	}
	printf("Cong viec thu %d\n",fix);
	printf("Id :"); scanf("%d",&work[fix].id);
	printf("Ngay can lam :"); scanf("%s",&work[fix-1].startDate);
	printf("Can xong truoc :"); scanf("%s",&work[fix-1].endDate);
	printf("Noi dung :"); scanf("%s",&work[fix-1].content);
	printf("\n");
}
void xoaTodoList(int *n,int del)
{
	
	for(int i=del-1 ; i<*n;i++){
		work[i] = work[i+1];
	}
	(*n)--;
}
int main()
{
	int del;
	nhapTodoList(&n);
	do{
		int choice;
		printf("MENU\n");
		printf("1. In ra toan bo danh sach\n");
		printf("2. Them 1 danh sach vao cuoi\n");
		printf("3. Sua todoList o id bat ki\n");
		printf("4. Xoa 1 todoList\n");
		printf("5. Sap xep tang dan theo content\n");
		printf("6. Thuc hie tim kiam nhi phan va in ra content cua todolist\n");
		printf("7. Thuc hien tim kiem va in ra cac mang theo status\n");
		printf("8. Thoat\n");
		printf("Lua chon cua ban :");
		scanf("%d",&choice);
		printf("\n");
		
		switch (choice){
			case 1:
				hienthiTodoList(&n);
				break;
			case 2:
				themLastTodoList(&n);
				break;
			case 3:
				suaTodoList(&n);
				break;
			case 4:
				printf("Nhap phan tu can xoa :");
				scanf("%d",&del);
				xoaTodoList(&n, del);
				break;
			case 8 :
				exit(0);
	}
}while(1==1);
}
	
			


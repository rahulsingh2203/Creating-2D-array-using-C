#include<stdio.h>
#include<conio.h>
void main(){
	int arr[2][2];
	int i,j;
	printf("\nEnter the array Elements:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\nArray Elements are:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	getch();
}

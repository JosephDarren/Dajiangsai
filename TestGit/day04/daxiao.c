#include <stdio.h>
#include <stdlib.h>
int daxiao(int num[],size_t size){
	int i,j;
	int min;
	for(i=0;i<size-1;i++){
     	for(j=0;j<size-1;j++) {
		if(num[j]>num[j+1]){
			min=num[j+1];
			num[j+1]=num[j];
			num[j]=min;

		}
	}
	
	}
     		
}
int main(){
	int i;
	int num[7]={4,3,5,6,2,1,7};
	daxiao(num,7);	
	for(i=0;i<7;i++){
    printf("%d\n",num[i]);
	}
}

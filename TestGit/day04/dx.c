#include <stdio.h>
#include <stdlib.h>
void insert(int num[],size_t size){
	int i,j;
	for(i=0;i<size-1;i++){
		int index=i;//每次都是从I开始
      for(j=i+1;j<size;j++){//从index+1开始比较
		  if(num[j]<num[index])
			  index=j;
	  }
	if(i !=index){
		int temp=num[i];
		num[i]=num[index];
		num[index]=temp;
	}
}
}

int main(){
	int i;
	int num[]={1,2,7,6,3,4,5};
	insert(num,7);
	for(i=0;i<7;i++)
	{
		printf("%d\n",num[i]);
				}
}


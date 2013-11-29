#include <stdio.h>
#include <stdlib.h>
void insert_sort(int data[],size_t size){
	int i,j;
	for(i=1;i<size;i++){
		int inserted =data[i];//先取出插入数据，避免覆盖
		for(j=i;(j>0&& inserted<data[j-1]);j--)//从后向前依次比较
		{
			data[j]=data[j-1];//后移一位，不需要交换
		}
		data[j]=inserted;//J就是inserted应该在的下标
	
	}
}
int main(){
	int i;
	int data[]={1,2,7,6,5,3,4};
	insert_sort(data,7);
	for(i=0;i<7;i++)
	{
		printf("%d\n",data[i]);
	}
}

#include <stdio.h>
#include <stdlib.h>
void quick_sort(int data[],size_t left,size_t right){
	size_t p=(left+right)/2;
	int num=data[p];//取基准数
     int i=left,j=right;
	 while(i<j){ //没有碰面循环，i==j循环结束
		// 如果i==p,或者找到比基准大的数,i不移动
        for(;!(i>=p|| num<data[i]);i++);
   if(i<p){//找到比num大的数
            data[p]=data[i];
			p=i;//p和i重合,下依次循环i不动，也不赋值
	 }
      for(;!(j<=p||  num>data[j]);j--);
	  if(j>p) {
		  data[p]=data[j];
		  p=j;
	  }
	}
 data[p]=num;
 if((p-left)>1) quick_sort(data,left,p-1);
 if ((right-p)>1) quick_sort(data,p+1,right);
}
int main(){
	int data[]={1,5,6,2,9,7,3};
	int i;
	quick_sort(data,0,6);
	for(i=0;i<7;i++){
		printf("%d\n",data[i]);
	}
}

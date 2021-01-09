#include<stdio.h>
#include"Partition.h"


void QuickSort(int data[],int length,int start,int end){
	if(start == end)
		return;
	int idx = Partition(data,length,start,end);//idx位元素已经排列完成
	if(idx > start)//处理[start,idx - 1]区间
		QuickSort(data,length,start,idx - 1);
	if(idx < end)
		QuickSort(data,length,idx + 1,end);
	return;
}
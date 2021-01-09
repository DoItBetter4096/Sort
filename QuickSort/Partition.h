/*
	功能：实现以数组中最后元素为基准
		  将比该元素大的移至右边，比
		  该元素小的移至左边
	参数列表：
			data:数组指针
			length：数组长度
			start：本次需要操作的起始地址
			end：本次需要操作的结束地址
	返回值：大于等于0：基准值最后的数组下标
			-1：参数错误
*/
int Partition(int data[],int length,int start,int end){
	if(data == nullptr || length <= 0 || start <0 || end >= length)
		return -1;
	int small = start - 1;//操作后数组比基准值小的最右元素下标。即small = max(all of index less than Ref Value)
	for(int idx = start;idx < end;idx++){
		if(data[idx] < data[end]){
			small++;
			if(small != idx){//data[small] > data[end] && data[idx] < data[end]
				swap(&data[small],data[idx]);
			}
		}
	}
	//插入基准值
	++small;
	swap(&data[small],&data[end]);
	return small;
}
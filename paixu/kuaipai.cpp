#include "common.h"
#include <algorithm>



int findsite(vector<int> &a_list, int start_offset, int end_offset)
{
 	int n = start_offset++;
	while(start_offset<=end_offset){
		while(a_list[start_offset]<a_list[n]) start_offset++;
		while(a_list[end_offset]>a_list[n]) end_offset--;
		if(start_offset<end_offset) swap(a_list[start_offset], a_list[end_offset]);
	}
	swap(a_list[n], a_list[end_offset]);
	return end_offset;
}

void kuaipai(vector<int> &a_list, int start_offset, int end_offset)
{
	if(start_offset<end_offset){
		int partition = findsite(a_list, start_offset, end_offset);
		cout<<"Posistion is "<<partition<<endl;
		kuaipai(a_list,start_offset, partition-1);
		kuaipai(a_list, partition+1, end_offset);
	}
}

void kuaipai2(vector<int>  &a_list, int start_offset, int end_offset)
{
	for(int i=start_offset;i<=end_offset;){
		int partition = findsite(a_list,i,end_offset);
		if(partition == i) i++;	
	}
}

int main()
{
	int a[]={9,0,1,2,5,4,3,6,7,8};
	vector<int> a_list(a,a+sizeof(a)/sizeof(int));
	cout<<"Before Kuaipai"<<endl;
	show(a_list);
	cout<<"After Kuaipai"<<endl;
	kuaipai2(a_list, 0, a_list.size()-1);
	show(a_list);
}


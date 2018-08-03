#include "common.h"




void paixu(vector<int> &a_list,int start_offset, int mid , int end_offset)
{
	vector<int> temp;
	int begin = start_offset;
	int end = mid+1; 
	while(begin<=mid && end<=end_offset){
		if(a_list[begin]<a_list[end]){
			temp.push_back(a_list[begin]);
			begin++;
		}
		else{
			temp.push_back(a_list[end]);
			end++;
		}
	}
	while(begin<=mid){
		temp.push_back(a_list[begin++]);
	}
	while(end<=end_offset){
		temp.push_back(a_list[end++]);
	}
	//cout<<"debug"<<endl;
	//show(temp);
	for(int i=0;i<temp.size();i++){
		a_list[start_offset+i] = temp[i];
	}
}

void guibing(vector<int> &a_list,int start_offset, int end_offset)
{
	if(start_offset<end_offset){
		int mid = start_offset+(end_offset-start_offset)/2;
		guibing(a_list,start_offset,mid);
		guibing(a_list,mid+1,end_offset);
		paixu(a_list,start_offset,mid,end_offset);
	}
}



void guibing2(vector<int> &a_list, int start_offset, int end_offset)
{
	for(int i=1;i<=end_offset;i=i*2){
		int j = start_offset;
		while(j+i<end_offset){
			int mid = j+i-1;
			int n = mid+i;
			if(n>end_offset){
				n = end_offset;
			} 
			paixu(a_list,j,mid,n);
			j = n+1;
		}
	}
}

int main()
{
	int a[]={9,0,1,2,3,5,4,6,7,8};
	vector<int> a_list(a,a+sizeof(a)/sizeof(int));
	cout<<"Before Sort"<<endl;
	show(a_list);
	cout<<"After Sort"<<endl;
	guibing2(a_list,0,a_list.size()-1);
	show(a_list);
	return 0;
}


#include "common.h"




void isort(vector<int> &first)
{
	if(first.size()<2) return;
	for(int i=1;i<first.size();i++){
		int temp=first[i];
		int j = i-1;
		while(j>=0&&first[j]>first[i]) j--;
		for(int k=i-1;k>j;k--){
			first[k+1]=first[k];
		}
		first[j+1]=temp;
	}
}


int main()
{
	int a[]={9,7,8,0,5,6,3,2,1,4};
	vector<int> a_list(a,a+sizeof(a)/sizeof(int));
	cout<<"Before Insert Sort"<<endl;
	show(a_list);
	isort(a_list);
	cout<<"After Insert Sort"<<endl;
	show(a_list);
}



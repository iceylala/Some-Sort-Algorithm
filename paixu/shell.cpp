#include "common.h"

void spaixu(vector<int> &a_list)
{
	for(int i=a_list.size()/2;i>0;i=i/2){
		for(int j=1;j<a_list.size();j=j+i){
			int temp = a_list[j];
			int k = j-i;
			while(k>=0&&temp<a_list[k]){
				a_list[k+i]=a_list[k];
				k=k-i;
			}
			a_list[k+i]=temp; 
		}
	}
}

int main()
{
	int a[]={9,0,6,8,7,4,5,1,3,2};
	vector<int> a_list(a,a+sizeof(a)/sizeof(int));
	cout<<"Before Shell Sort"<<endl;
	show(a_list);
	cout<<"After Shell Sort"<<endl;
	spaixu(a_list);
	show(a_list);
}



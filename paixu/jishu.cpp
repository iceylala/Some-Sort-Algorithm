#include "common.h"




void jishu(vector<int> &a_list)
{
	if(a_list.empty()) return;
	int max = a_list[0];
	vector<int> stor;
	for(int i=1;i<a_list.size();i++){
		if(a_list[i]>max) max = a_list[i];
	}
	for(int i=1;i<a_list.size();i++){
		stor.push_back(0);
	}
	vector<int> temp;
	for(int i=0;i<=max;i++){
		temp.push_back(0);
	}
	for(vector<int>::const_iterator it = a_list.begin();it!=a_list.end();it++){
		temp[*it]++;
	}
	for(int i = 1;i<temp.size();i++){
		temp[i] = temp[i]+temp[i-1];
	}
	for(vector<int>::const_iterator it = a_list.begin();it!=a_list.end();it++){
		stor[temp[*it]---1] = *it;
	}
	for(int i=0;i<a_list.size();i++){
		a_list[i]=stor[i];
	}
}

int main()
{
	int a[]={9,0,1,2,4,3,5,7,6,8};
	vector<int> a_list(a, a+sizeof(a)/sizeof(int));
	cout<<"Before Sort"<<endl;
	show(a_list);
	cout<<"After Sort"<<endl;
	jishu(a_list);
	show(a_list);
	return 0;
}



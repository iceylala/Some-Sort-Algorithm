#include <iostream>
#include <vector>
#include "common.h"
using namespace std;

void xuanze(vector<int> &a_list)
{
	for(int i=0;i<a_list.size();i++){
		int j = i;
		for(int k =i;k<a_list.size();k++){
			if(a_list[j]>a_list[k]){
				j=k;
			}
		}
		int tmp = a_list[i];
		a_list[i] = a_list[j];
		a_list[j] = tmp;
		/*if(j<i){
			i=j;
		}*/
		//cout<<i<<" times go"<<endl;
		//show(a_list);
	}
}

int main()
{
	int a[]={9,0,8,6,7,4,3,2,5,1};
	vector<int> a_list(a, a+sizeof(a)/sizeof(int));
 	cout<<"before insert"<<endl;
	show(a_list);
	cout<<"after insert"<<endl;
	xuanze(a_list);
	show(a_list);
	return 0;
}


#include "common.h"

#include <algorithm>


void dui(vector<int> &a_list)
{
	for(int i=0;i<=a_list.size()-1;i++){
		for(int j=(a_list.size()-i-2)/2;j>=0;j--){
			int n = j;
			while(n>=0){
				int big = 2*n+1;
				if((big+1)<=a_list.size()-i-1){
					big = a_list[big]>a_list[big+1]?big:big+1;
				}
				if(a_list[big]<a_list[n]) break;
				else{
					swap(a_list[big],a_list[n]);
					n = (n-1)/2;
				}
			}
		}
		/*for(int j=0;j<=a_list.size()-i-1;j++){
			int n = j;
			while(n>=0){
				int temp = (n-1)/2;
				if(a_list[temp]<a_list[n]){
					swap(a_list[temp],a_list[n]);
					n = temp;
				}
				else{
					break;
				}
			}
		}*/
		swap(a_list[0],a_list[a_list.size()-i-1]);	
	}
}

int main()
{
	int a[]={9,0,8,7,6,5,3,4,2,1};
	vector<int> a_list(a,a+sizeof(a)/sizeof(int));
	cout<<"Before Sort"<<endl;
	show(a_list);
	cout<<"After Sort"<<endl;
	dui(a_list);
	show(a_list);
	return 1;
}


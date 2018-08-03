#include <iostream>
#include <vector>


using namespace std;

void show(const vector<int> &tmp)
{
	for(vector<int>::const_iterator i = tmp.begin();i!=tmp.end();i++){
		cout<<*i<<endl;
	}
}


void buddle(vector<int> &set_list)
{
	for(int i=0;i<set_list.size();i++){
		bool is_sorted = true;
		for(int j=0;j<set_list.size()-i-1;j++){
			if(set_list[j] > set_list[j+1]){
				int tmp = set_list[j];
				set_list[j] = set_list[j+1];
				set_list[j+1] = tmp;
				is_sorted = false;
			}
		}
		if(is_sorted){
			break;
		}
	}
}

int main()
{
	int set_a[] = {9,8,6,7,3,4,5,1,2};
	vector<int> set_list(set_a,set_a+sizeof(set_a)/sizeof(int));
	show(set_list);
	buddle(set_list);
	show(set_list);
	return 1;
}


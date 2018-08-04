#include <vector>
#include "common.h"


void show(const vector<int> &a_list)
{
	for(vector<int>::const_iterator it = a_list.begin();it!=a_list.end();it++){
		cout<<*it<<endl;
	}
}


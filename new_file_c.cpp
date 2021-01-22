#include <vector>

int sum(std::vector<int> vec){
	int j = 0;
	for(auto& i: vec){
		j+=i;
	}
	return j + 1;
}


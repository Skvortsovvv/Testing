#include <vector>

int prod(const std::vector<int>& vec) const{
	int k = 1;
	for(const auto& j : vec){
		k = k * j;
	}
	return k;
}

int sum(const std::vector<int>& vec) const{
	int j = 0;
	for(coonst auto& i: vec){
		j+=i;
	}
	return j;
}


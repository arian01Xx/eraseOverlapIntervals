#include "solution.hpp"

using namespace std;

int main(){

	Solution solution;
	vector<vector<int>> intervals={{1,2},{2,3},{3,4},{1,4}};
	int output=solution.eraseOverlapIntervals(intervals);
	cout<<"output one= "<<output<<endl;

	return 0;
} 
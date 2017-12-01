#include <algorithm>
#include <vector>
#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc,char *argv[])
{
	if(argc < 3){
		cout << "Usage: ./shuffle <MIN_NUM> <MAX_NUM>" << endl;
		return 0;
	}

	int MIN_NUM = atoi(argv[1]);
	int MAX_NUM = atoi(argv[2]);
	vector<int> vi;
	for (int i = MIN_NUM; i <= MAX_NUM; i++){
			vi.push_back(i);
	}

	random_shuffle(vi.begin(), vi.end());

	for (int i = 0; i < vi.size(); i++)
	{
		cout << vi[i] << endl;
	}
}
// Checking an array of numbers divisible by 2
#include <iostream>
#include <vector>
using namespace std;

void Check(int a)
{
	if (a % 2 == 0)
	{
		cout << a << endl;
	}
}

void forEach(vector<int> &arr)
{
	for (auto vl : arr)
	{
		Check(vl);
	}
}


int main()
{
	vector<int> arr = { 1,2,3,4,5,6,7,8,9,10 };
	forEach(arr);

	return 0;
}


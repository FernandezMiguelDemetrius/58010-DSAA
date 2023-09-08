#include <iostream>
using namespace std;

int main()
{
	int numbers[] = {5, 4, 3, 2, 1};
	int length = sizeof(numbers) / sizeof(numbers[0]);
	cout<<"Length of the Array: "<< length<<endl;
	
	return 0;
}

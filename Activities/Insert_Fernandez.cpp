#include <iostream>
using namespace std;

int main(){
	int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int newNum = 11;
	int insert = 1;
	
	int size = sizeof(numbers)/ sizeof(numbers[0]);
	
	cout<<"Original Array: ";
	for(int i = 0;i < size;i++)
	{
		cout<< numbers[i]<<" ";
	}
	for(int i = size; i > insert; i--)
	{
		numbers[i]= numbers[i - 1];	
	}
numbers[insert]	= newNum;
cout<<"\nNew Array: ";
for(int i = 0;i<= size;i++){
	cout<< numbers[i]<<" ";
}
return 0;
}


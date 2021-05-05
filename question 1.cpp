#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int readfile(char*array)
{ 
	string str;
  int count=0;
	ifstream read(array);
	while(read>>str)
	{
		count++;
	}
	return count;
}
int main()
{
	int count=0;
	char array[100];
	
	cout<<"enter file name please\n";
	cin.getline(array,100);
	count=readfile(array);
	
	cout<<"total names = "<<count;
	return 0;
}

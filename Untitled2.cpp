#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char data **array;
	int rows=0;
	ifstream fin("");
	
	
	cout<<"enter number of rows\n";
	cin>>rows;
	array=new char*[rows];
	for(int i=0; i<rows;i++)
	{
		array[i]=new char [1];
	}
	
	while(!fin.eof())
	{
		
	}
	
	
	return 0;
}

#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
void SaveInFile(int sum,int**array,int*column,int rows)
{
	ofstream saad("output.txt",ios::app);
	
	for(int i=0; i<rows;i++)
	{
		for(int j=0; j<column[i];j++)
		{
			
			saad<<array[i][j]<<" ";
			
			
		}
	saad<<"\n";	
	}
	saad<<"\n\n";
	
	saad<<"sum="<<sum;
}
int main()
{
	int rows=0,**array, *column,sum=0;
	column=new int[rows];
	array=new int*[rows];
	
	cout<<"please enter number of rows\n";
	cin>>rows;
	for(int i=0; i<rows;i++)
	{
		cout<<"enter number of columns for row "<<i+1<<" :\n ";
		cin>>column[i];
	}
	for(int i=0; i<rows;i++)
	{
		array[i]=new int [column[i]];
	}
	for(int i=0; i<rows;i++)
	{
		for(int j=0; j<column[i];j++)
		{
			array[i][j]=(rand()%999)+100;
			sum=sum+array[i][j];
			
			
		}

	}
	SaveInFile(sum,array,column,rows);
	
	
	return 0;
}


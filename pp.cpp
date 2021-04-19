#include<iostream>
using namespace std;
int**rowregrow(int &row,int col,int input,int**array)
{
	int **newarray;
	newarray=new int*[row+1];
	for(int i=0;i<row;i++)
	{
		newarray[i]=new int[col];
	}
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			newarray[i][j]=array[i][j];
		}
	}
	
	row++;
	for(int i=0;i<row-1;i++)
	{
		delete[]array[i];
	}
	delete[]array;
	
 return newarray;	
	
}
int main()
{
	int col,input,row=1,**array;
	array=new int*[row+1];
	cout<<"enter number of column\n";
	cin>>col;
		for(int i=0;i<row;i++)
	{
		array[i]=new int[col];
	}
	

	for(int i=0;input!=-1;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<"input da tari maherbani\n";
			cin>>array[i][j];
			input=array[i][j];
			
		}
		row=+1;
		array=rowregrow(row,col,input,array);
		
	}
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				cout<<array[i][j]<<"\t";
			}
			cout<<"\n";
			
		}


}

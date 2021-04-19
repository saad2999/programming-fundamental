#include<iostream>
using namespace std;
int*regrow(int*array,int vel, int size)
{
	int *ptr;
	ptr=new int[++size];
	for(int i=0;i<size-1;i++)
	{
		ptr[i]=array[i];
		
	}
	ptr[size-1]=vel;
	delete []array;
	return ptr;
}
int main()
{
	int* array,velue,size=1,sw=0,count=0;
	bool check;
	while(true)
	{
	
	cout<<"enter 1 for regrow\n";
	cout<<"enter 2 for enter velue\n";
	cout<<"enter 3 for print\n";
	cout<<"enter 4 for exit\n";
	cin>>sw;
	switch(sw)
	{
		case 1:
			array[0]=velue;
			array=regrow(array,velue,size);
			break;
			case 2:
				cout<<"enter velue please\n";
				cin>>velue;
				count++;
				break;
				case 3:
					for(int i=0;i<count;i++)
					{
						cout<<array[i]<<endl;
					}
					break;
					case 4:
						check=1;
						if(check=1)
						{
							break;
						}
						
						break;
	}
}
}

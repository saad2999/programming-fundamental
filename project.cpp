#include<iostream>
#include<fstream>
#include<string>
using namespace std;  
void input(int*rollno,int studentcount, int***subject)
{
	int s1=0,sb1;
	subject=new int** [5];//dynamically allocating 3d array
	for(int i=0;i<5;i++)
	{
		subject[i]=new int* [4];
	}
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			subject[i][j]=new int [studentcount];
		}
   }
	/*	for(int k=0;k<studentcount;k++)
		{ // gernating rollnumber from 0 to total number of student
			cout<<rollno[k]=k; 
			
		}*/
		ofstream saad("student.txt",ios::app);
		int position=0;
	while(true)
	{
	
	cout<<"press 1 if you want to mark of enter first subject \n";	
	cin>>s1;
	switch(s1)
	{
		case 1:
			cout<<"if you want to enter marks of first  quiz  press 1 \n";
			cout<<"if you want to enter marks of second  quiz  press 2 \n";	
			cout<<"if you want to enter marks of first  assignment  press 3 \n";
			cout<<"if you want to enter marks of second  assignment  press 4\n";
			cin>>sb1;
			switch(sb1)
			{
			
			case 1:
				for(int a=0;a<studentcount;a++)
				{
					cout<<"enter marks of student "<<a+1<<" for quiz 1:\n";
					cin>>subject[0][0][a];
				
				}
				
					saad<<"marks of subject 1 quiz 1\n";
					position=saad.tellp();
					saad.seekp(position,ios::beg);
				position=saad.tellp();
				
				for(int a=0;a<studentcount;a++)
				{
					
					saad<<subject[0][0][a]<<"\n";
				}
				position=saad.tellp();
				
				break;
		case 2:
				for(int a=0;a<studentcount;a++)
				{
					cout<<"enter marks of student "<<a+1<<" for quiz 2:\n";
					cin>>subject[0][1][a];
				}
				
					saad<<"marks of subject 1 quiz 2\n";
					saad.seekp(position,ios::beg);
				for(int a=0;a<studentcount;a++)
				{
					
					saad<<subject[0][1][a]<<"\n";
				}
				position=saad.tellp();
			    
				break;
			case 3:
				for(int a=0;a<studentcount;a++)
				{
					cout<<"enter marks of student "<<a+1<<" for assignment 1:\n";
					cin>>subject[0][2][a];
				}
				
					saad<<"marks of subject 1 assignment 1\n";
					saad.seekp(position,ios::beg);
				for(int a=0;a<studentcount;a++)
				{
					
					saad<<subject[0][2][a]<<"\n";
				}
				position=saad.tellp();
                cout<<position; 			
				break;
				case 4:
				for(int a=0;a<studentcount;a++)
				{
					cout<<"enter marks of student "<<a+1<<" for assignment 2:\n";
					
					cin>>subject[0][3][a];
				}
				
					saad<<"marks of subject 1 assignment 2\n";
					saad.seekp(position,ios::beg);
				for(int a=0;a<studentcount;a++)
				{
					
					saad<<subject[0][3][a]<<"\n";
				}
				  position=saad.tellp();
			
				break;
			
				
			 default:
			 cout<<"enter correct option\n";
			
		
		}
			
		 break;
	}
	
    }
	
}

int main()
{
	int *rollno, ***subject, select=0,studentcount=0;
	
	
	cout << "enter 1 for input\n\r";
	cout << "enter 2 for edit\n";
	cout << "enter 3 for print\n";
	cin>>select;
	
	rollno=new int[studentcount];
	
	switch (select)
	{
	case 1:
		cout << "enter number of student in your class\n";
		cin>>studentcount;
		input(rollno,studentcount,subject);
		break;
	}
}

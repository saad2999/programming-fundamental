#include<iostream>
#include<fstream>
#include<string>
using namespace std;  
void input(int*rollno,int studentcount, int***subject)
{
	int s1=0,sb1,sb2, sb3,sb4;
	subject=new int** [4];//dynamically allocating 3d array
	for(int i=0;i<4;i++)
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
		ofstream saad,saad2; 
		saad.open("student.txt",ios::app);
		saad2.open("data.txt",ios::app);
		int position=0,sum;
	while(true)
	{
	
	cout<<"press 1 if you want to mark of enter first subject \n";
	cout<<"press 2 if you want to mark of enter second subject \n";
    cout<<"press 3 if you want to mark of enter third subject \n";	
    cout<<"press 4 if you want to mark of enter forth subject \n";
    cout<<"press 5 exit\n";
	cin>>s1;
	if(s1==5)
	{
		break;
	}
	
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
				
				
					saad<<"marks of subject one quiz one\n";
					saad.seekp(28,ios::beg);
				position=saad.tellp();
				
				for(int a=0;a<studentcount;a++)
				{
					
					saad<<subject[0][0][a]<<"\n";
					saad2<<subject[0][0][a]<<"\t";
				}
				saad2<<"\n\n";
				position=saad.tellp();
				
				break;
		case 2:
				for(int a=0;a<studentcount;a++)
				{
					cout<<"enter marks of student "<<a+1<<" for quiz 2:\n";
					cin>>subject[0][1][a];
				}
				
					saad<<"marks of subject one quiz two\n";
					saad.seekp(position,ios::beg);
				for(int a=0;a<studentcount;a++)
				{
					
					saad<<subject[0][1][a]<<"\n";
					saad2<<subject[0][1][a]<<"\t";
					
				}
				saad2<<"\n\n";
				position=saad.tellp();
			    
				break;
			case 3:
				for(int a=0;a<studentcount;a++)
				{
					cout<<"enter marks of student "<<a+1<<" for assignment 1:\n";
					cin>>subject[0][2][a];
				}
				
					saad<<"marks of subject one assignment 1\n";
					saad.seekp(position,ios::beg);
				for(int a=0;a<studentcount;a++)
				{
					
					saad<<subject[0][2][a]<<"\n";
					saad2<<subject[0][2][a]<<"\t";
				}
				saad2<<"\n\n";
				position=saad.tellp();
                 			
				break;
				case 4:
				for(int a=0;a<studentcount;a++)
				{
					cout<<"enter marks of student "<<a+1<<" for assignment 2:\n";
					
					cin>>subject[0][3][a];
				}
				
					saad<<"marks of subject one assignment two\n";
					saad.seekp(position,ios::beg);
				for(int a=0;a<studentcount;a++)
				{
					
					saad<<subject[0][3][a]<<"\n";
					saad2<<subject[0][3][a]<<"\t";
				}
				saad2<<"\n\n";
				  position=saad.tellp();
			
				break;
				
			
				
			 default:
			 cout<<"enter correct option\n";
			
		
		}
			
		   break;
		 case 2:
			cout<<"if you want to enter marks of first  quiz  press 1 \n";
			cout<<"if you want to enter marks of second  quiz  press 2 \n";	
			cout<<"if you want to enter marks of first  assignment  press 3 \n";
			cout<<"if you want to enter marks of second  assignment  press 4\n";
			cin>>sb2;
			switch(sb2)
			{
			
			case 1:
				for(int a=0;a<studentcount;a++)
				{
					cout<<"enter marks of student "<<a+1<<" for quiz 1:\n";
					cin>>subject[1][0][a];
				
				}
				
					saad<<"marks of subject two quiz one\n";
					saad.seekp(28,ios::beg);
				position=saad.tellp();
				
				for(int a=0;a<studentcount;a++)
				{
					
					saad<<subject[1][0][a]<<"\n";
					saad2<<subject[1][0][a]<<"\t";
				}
				saad<<"\n\n";
				position=saad.tellp();
				
				break;
		case 2:
				for(int a=0;a<studentcount;a++)
				{
					cout<<"enter marks of student "<<a+1<<" for quiz 2:\n";
					cin>>subject[1][1][a];
				}
				
					saad<<"marks of subject two quiz two\n";
					saad.seekp(position,ios::beg);
				for(int a=0;a<studentcount;a++)
				{
					
					saad<<subject[1][1][a]<<"\n";
					saad2<<subject[1][1][a]<<"\t";
				}
				saad2<<"\n\n";
				position=saad.tellp();
			    
				break;
			case 3:
				for(int a=0;a<studentcount;a++)
				{
					cout<<"enter marks of student "<<a+1<<" for assignment 1:\n";
					cin>>subject[1][2][a];
				}
				
					saad<<"marks of subject two assignment one\n";
					saad.seekp(position,ios::beg);
				for(int a=0;a<studentcount;a++)
				{
					
					saad<<subject[1][2][a]<<"\n";
					saad2<<subject[1][2][a]<<"\t";
				}
				saad2<<"\n\n";
				position=saad.tellp();
                cout<<position; 			
				break;
				case 4:
				for(int a=0;a<studentcount;a++)
				{
					cout<<"enter marks of student "<<a+1<<" for assignment 2:\n";
					
					cin>>subject[1][3][a];
				}
				
					saad<<"marks of subject two assignment two\n";
					saad.seekp(position,ios::beg);
				for(int a=0;a<studentcount;a++)
				{
					
					saad<<subject[1][3][a]<<"\n";
					saad2<<subject[1][3][a]<<"\t";
				}
				saad<<"\n\n";
				  position=saad.tellp();
			
				break;
				
			
				
			 default:
			 cout<<"enter correct option\n";
			
		
		}
		
		case 3:
			cout<<"if you want to enter marks of first  quiz  press 1 \n";
			cout<<"if you want to enter marks of second  quiz  press 2 \n";	
			cout<<"if you want to enter marks of first  assignment  press 3 \n";
			cout<<"if you want to enter marks of second  assignment  press 4\n";
			cin>>sb3;
			switch(sb3)
			{
			
			case 1:
				for(int a=0;a<studentcount;a++)
				{
					cout<<"enter marks of student "<<a+1<<" for quiz 1:\n";
					cin>>subject[2][0][a];
				
				}
				
					saad<<"marks of subject three quiz one\n";
					saad.seekp(28,ios::beg);
				position=saad.tellp();
				
				for(int a=0;a<studentcount;a++)
				{
					
					saad<<subject[2][0][a]<<"\n";
					saad2<<subject[2][0][a]<<"\t";
				}
				position=saad.tellp();
				saad2<<"\n\n";
				break;
		case 2:
				for(int a=0;a<studentcount;a++)
				{
					cout<<"enter marks of student "<<a+1<<" for quiz 2:\n";
					cin>>subject[2][1][a];
				}
				
					saad<<"marks of subject three quiz \n";
					saad.seekp(position,ios::beg);
				for(int a=0;a<studentcount;a++)
				{
					
					saad<<subject[2][1][a]<<"\n";
					saad2<<subject[2][1][a]<<"\t";
				}
				saad2<<"\n\n";
				position=saad.tellp();
			    
				break;
			case 3:
				for(int a=0;a<studentcount;a++)
				{
					cout<<"enter marks of student "<<a+1<<" for assignment 1:\n";
					cin>>subject[2][2][a];
				}
				
					saad<<"marks of subject 3 assignment 1\n";
					saad.seekp(position,ios::beg);
				for(int a=0;a<studentcount;a++)
				{
					
					saad<<subject[2][2][a]<<"\n";
					saad2<<subject[2][2][a]<<"\t";
				}
				saad2<<"\n\n";
				position=saad.tellp();
                cout<<position; 			
				break;
				case 4:
				for(int a=0;a<studentcount;a++)
				{
					cout<<"enter marks of student "<<a+1<<" for assignment 2:\n";
					
					cin>>subject[2][3][a];
				}
				
					saad<<"marks of subject 3 assignment 2\n";
					saad.seekp(position,ios::beg);
				for(int a=0;a<studentcount;a++)
				{
					
					saad<<subject[2][3][a]<<"\n";
					saad2<<subject[2][2][a]<<"\t";
				}
				saad2<<"\n\n";
				  position=saad.tellp();
			
				break;
				
			
				
			 default:
			 cout<<"enter correct option\n";
			
		
		}
		case 4:
			cout<<"if you want to enter marks of first  quiz  press 1 \n";
			cout<<"if you want to enter marks of second  quiz  press 2 \n";	
			cout<<"if you want to enter marks of first  assignment  press 3 \n";
			cout<<"if you want to enter marks of second  assignment  press 4\n";
			cin>>sb4;
			switch(sb4)
			{
			
			case 1:
				for(int a=0;a<studentcount;a++)
				{
					cout<<"enter marks of student "<<a+1<<" for quiz 1:\n";
					cin>>subject[3][0][a];
				
				}
				
					saad<<"marks of subject four quiz 1\n";
					saad.seekp(28,ios::beg);
				position=saad.tellp();
				
				for(int a=0;a<studentcount;a++)
				{
					
					saad<<subject[3][0][a]<<"\n";
					saad2<<subject[3][0][a]<<"\t";
				}
				saad<<"\n\n";
				position=saad.tellp();
				
				break;
		case 2:
				for(int a=0;a<studentcount;a++)
				{
					cout<<"enter marks of student "<<a+1<<" for quiz two:\n";
					cin>>subject[3][1][a];
				}
				
					saad<<"marks of subject four quiz two\n";
					saad.seekp(position,ios::beg);
				for(int a=0;a<studentcount;a++)
				{
					
					saad<<subject[3][1][a]<<"\n";
					saad2<<subject[3][1][a]<<"\t";
				}
				saad<<"\n\n";
				position=saad.tellp();
			    
				break;
			case 3:
				for(int a=0;a<studentcount;a++)
				{
					cout<<"enter marks of student "<<a+1<<" for assignment one:\n";
					cin>>subject[3][2][a];
				}
				
					saad<<"marks of subject four assignment one\n";
					saad.seekp(position,ios::beg);
				for(int a=0;a<studentcount;a++)
				{
					
					saad<<subject[3][2][a]<<"\n";
					saad2<<subject[3][2][a]<<"\t";
				}
				saad2<<"\n\n";
				position=saad.tellp();
                cout<<position; 			
				break;
				case 4:
				for(int a=0;a<studentcount;a++)
				{
					cout<<"enter marks of student "<<a+1<<" for assignment two:\n";
					
					cin>>subject[3][3][a];
				}
				
					saad<<"marks of subject four assignment two\n";
					saad.seekp(position,ios::beg);
				for(int a=0;a<studentcount;a++)
				{
					
					saad<<subject[3][3][a]<<"\n";
					saad2<<subject[3][3][a]<<"\t";
					
				}
				saad<<"\n\n";
				  position=saad.tellp();
			
				break;
				
			
				
			 default:
			 cout<<"enter correct option\n";
			
		
		}
		
			
	
			default:
				cout<<"enter correct option\n\n";
	}
	
	
    }
    saad.close();
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<studentcount;j++)
		{
			delete[]subject[i][j];
		}
		delete[] subject[i];
	}
	delete[] subject;
}

int main()
{
	int *rollno, ***subject, select=0,studentcount=0;
	float *avg=new float [16];
	
	
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
		case 2:
			{
			
			
			bool check=true;
			int array[4][4][1000];
			int temp, count,sub,qa,roll;
			fstream wr("data.txt",ios::in);
			while(!wr.eof())
			{
				count++;
				
        	for(int i=0;i<4;i++)
           {
         	for(int j=0;j<4;j++)
        	{
    		for(int k=0;k<count;k++)
    		{
    			wr>>array[i][j][k];
    		  
			}
			
	   	}
		
	  }
			
			}
			cout<<"enter subject number\n";
			cin>>sub;
			cout<<"enter quiz or assignment number\n";
			cin>>qa;
			cout<<"enter roll number of student\n";
			cin>>roll;
			cout<<"your current value is "<<array[sub][qa][roll]<<" "
			   <<"please enter new  value\n";
			   cin>>array[sub][qa][roll];
		    	wr.close();
		    /*	if(check==true)
		    	{
				
			     wr.open  ("data.txt",ios::out|ios::trunc);
			      wr.close();
		          }*/
		    check=0;
		    wr.open  ("data.txt",ios::out|ios::app);
            for(int i=0;i<4;i++)
         {
        	for(int j=0;j<4;j++)
        	{
    		for(int k=0;k<studentcount;k++)
    		{
    			wr<<array[i][j][k]<<"  ";
			}
			wr<<"\n";
	    	}
		   wr<<"\n\n";
		
        	}
			wr.close();
			break;
        }
		 	case 3:
		 		int count=0;
		 		int array[4][4][1000];
		 		
		 		fstream wr("data.txt",ios::in);
				while(!wr.eof())
			{
				count++;
				
        	for(int i=0;i<4;i++)
           {
         	for(int j=0;j<4;j++)
        	{
    		for(int k=0;k<count;k++)
    		{
    			wr>>array[i][j][k];
    		  
			}
			
	   	}
		
	  }
		} for(int i=0;i<4;i++)
         {
        	for(int j=0;j<4;j++)
        	{
    		for(int k=0;k<studentcount;k++)
    		{
    			cout<<array[i][j][k]<<"  ";
			}
			cout<<"\n";
	    	}
		   
		
        	}
		
			
				break;
			
     	
}
}

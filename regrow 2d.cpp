
    


#include<iostream>
#include<fstream>
using namespace std;



char* regrowCol( char* row, int col)
{
    
    char* newRow=new char[col+1];
    
    for( int i=0; i<col; i++)
    {
        newRow[i]=row[i];
    }
    
    delete [] row;
    return newRow;
    
    
}


char** regrowRow(char** ar, int rows, int* columns)
{
    
    
    char** array=new char*[rows +1];
    
    for(int z=0; z<rows; z++)
    {
        *(array + z)=new char[columns[z]];
        * (array+z)=*(ar + z);
        
        
    }
    
    *(array + rows)=new char[1];
    
    delete [] ar;
    return array;
    
    
}


int main()
{
    
    int columns[10]={0};
    
    char** ar=new char*[1];
    *(ar+0)=new char[1];
    
    fstream fin;
    fin.open("abcd.txt");
    char input;
    
    int row=0, col=0;
    
    do
    {
        fin.get(input);// fin>>input;
        
    
        
        if(input=='\n')
        {
            columns[row]=col;
            
            ar[row][col]='\0';
            ar=regrowRow(ar, ++row, columns);
            col=0;
            
        }
        
        *( *(ar+row) + col)=input;// ar[row][col]=input;
        
        
        *(ar+row) = regrowCol( *(ar+row), ++col );
//        col++;
        
        
        
    }while(!fin.eof());
    
    
    
    //display
    
    for( int i=0; i<=row; i++)
    {
        
        for( int j=0; ar[i][j]!='\0'; j++)
        {
            cout<<ar[i][j];
        }
        cout<<endl;
        
    }
    
    
    
    
    
    
}







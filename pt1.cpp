
    
#include<iostream>
using namespace std;
int**rowregrow(int &row, int col, int**array)
{
    /*int **newarray;
    newarray = new int*[row + 1];
    for (int i = 0; i<row; i++)
    {
        newarray[i] = new int[col];
    }
    for (int i = 0; i<row; i++)
    {
        for (int j = 0; j<col; j++)
        {
            newarray[i][j] = array[i][j];
        }
    }
    newarray[row + 1][0] = input;
    row++;
    for (int i = 0; i<row; i++)
    {
        delete[]array[i];
    }
    delete[]array;


    return newarray;*/


    int ** arr;
    arr = new int*[row + 1];
    cout << "yes"<<row << endl;
    for (int i = 0; i <= row; i++)
    {
        arr[i] = new int[col];
    }
    for (int i = 0; i < row-1; i++)
    {
        //cout << "I am in" << endl;
        
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = array[i][j];
        }


    }
    //    cout << "yes" << endl;
    //arr[row] = new int[col];
    for (int i = 0; i < row - 1; i++)
    {
        delete[] array[i];
    }
    delete[] array;


    return arr;




}
int main()
{
    int col=0, input=0,breaks=0, row = 1, **array;
    array = new int*[row];
    cout << "enter number of column\n";
    cin >> col;
    for (int i = 0; i<row; i++)
    {
        array[i] = new int[col];
    }


    
    for (int i = 0; breaks!= -1; i++)
    {
        for (int j = 0; j<col; j++)
        {
            //cout << "input da tari maherbani\n";
            cin >>array[i][j];


        }
        cout << "Enter -1 to break :";
        cin >> breaks;
        if (breaks != -1)
        {
            row+=1;
            array = rowregrow(row, col, array);
        }
        /*else if (breaks == -1)
        {
            row = i;
        }*/


        cout << "\nI am back" << endl;
    }
    for (int i = 0; i<row; i++)
    {
        for (int j = 0; j<col; j++)
        {
            cout << array[i][j] << "\t";
        }
        cout << "\n";


    }





}


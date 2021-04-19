
    
#include <iostream>
using namespace std;


void menu()
{
    cout << "Press 1 for Increase the Array: \n";
    cout << "Press 2 for Input from user: \n";
    cout << "Press 3 for output the Array: \n";
    cout << "Press 4 Exit: \n";
    cout << "Enter Your choise: ";
}


int* regrow(int *arr, int &arrSize)
{
    int *temp = new int[arrSize + 1];
    for (int i = 0; i < arrSize; i++)
    {
        temp[i] = arr[i];
    }
    arrSize++;
    delete[]arr;
    cout << "Array successfuly Incresed...\n";
    return temp;
}


void input(int *arr, int arrsize, int &dataSize)
{
    if (arrsize <= dataSize)
    {
        cout << "Your array have no space to store your data...\n";
    }
    else
    {
        cout << "Enter a number: ";
        cin >> arr[dataSize];
        dataSize++;
    }
}


void ouput(int *arr, int dataSize)
{
    if (dataSize > 0)
    {
        cout << "Your array is: ";
        for (int i = 0; i < dataSize; i++)
        {
            cout << arr[i] << "\t";
        }
        cout << endl;
    }
}


int main()
{
    
    int *arr[2][4] ;
    int arrSize = 0, dataSize = 0;
    int choise;
    while (true)
    {
        system("CLS");
        menu();
        cin >> choise;
        if (choise == 1)
        {
            arr[0] = regrow(arr[0], arrSize);
            system("pause");
        }
        else if (choise == 2)
        {
            input(arr, arrSize, dataSize);
            system("pause");
        }
        else if (choise == 3)
        {
            ouput(arr, dataSize);
            system("pause");
        }
        else if (choise == 4)
        {
            break;
        }
        else
        {
            cout << "Please Enter correct optopn...\n";
            system("pause");
        }
    }
    system("pause");
    return 0;
}
 





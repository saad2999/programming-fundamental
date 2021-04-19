
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int var;
    cin>>var;
    ofstream sad("saad.txt",ios::out);
        while(sad<<var)
        {
            sad<<var<<"\t";
            cout<<var<<"\n";
        }
            
        

    return 0;
}



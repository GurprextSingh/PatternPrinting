// *****
// *****
// ***** WAP Programt to print this pattern
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number of Rows: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for ( int j = 0; j<5; j++)
        {
          cout<<"* ";
        }
        cout<<endl;
    }
}

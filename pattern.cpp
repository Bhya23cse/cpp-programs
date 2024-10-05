#include <iostream>
using namespace std;

int main()
{
 
  int count = 4;
  cout<<"Enter a number of row to print in capital letter: "<<endl;
  cin>>count;
  char ch='A';

  for (int i = 0; i < count; i++)
  {
    for (int j = 0; j < count; j++)
    {
      
      cout << ch<<" ";
      ch++;
    }
    cout<<endl<<endl;
  }

  return 0;
}

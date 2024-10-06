#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
   
    for (int i = 0; i < n; i++)
    { int ch=1;
        for (int j = 0; j < i; j++)
        {
            cout<<ch<<" ";
            ch++;

            
        }
        cout<<endl;
        
    }
    cout<<endl;
    

    return 0;
}
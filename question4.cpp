#include <iostream>
using namespace std;
int main()
{
    int n = 5 ;
    
    for (int i = n; i >= 1; i--)
    {
        for(int j =1; j<=i-1;j++){
            cout<<" ";
        }
        for(int j =i; j<=n;j++){
            cout<<j;
        }   
        if(i<5){
            for(int j=4;j>=i;j--){
                cout<<j;
            }
        }

        cout<<endl;
    }
}
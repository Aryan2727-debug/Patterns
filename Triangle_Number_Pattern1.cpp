#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int i=1;
    int p=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<p;
            p++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}

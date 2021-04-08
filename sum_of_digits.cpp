

#include <iostream>
using namespace std;

int main()
{
    int sum=0;
    int a;
    cin>>a;
    
    if (a<10)
        sum=a;
    else{
        while(a!=0){
            sum+=a%10;
            a/=10;
        }
    }
    
    cout<<"the sum of all vase-10 digits of "<<a<<" is "<<sum;
    return 0;
}

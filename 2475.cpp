#include <iostream>

using namespace std;

int main()
{
    int sum=0;
    int k;
    for(int i=0;i<5;i++){
        cin >> k;
        sum+=(k*k);
        
        
        
    }
    
    cout << sum%10 << endl;
}

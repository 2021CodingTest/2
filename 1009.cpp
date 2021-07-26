

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int T;
    cin >> T;
  
    long long a[T]={0,};
    long long b[T]={0,};
    for(int i=0;i<T;i++){
        cin >> a[i];
        cin >> b[i];
    }

    for(int i=0;i<T;i++){
        b[i]%=4;
        if(b[i]==0)
            b[i]=4;
        long long res=(long long)pow(a[i],b[i]);
        
        int ress=(int)res%10;
        
        if(ress==0)
            ress=10;
        cout << ress << "\n";
    }
}

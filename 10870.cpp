

#include <iostream>

using namespace std;

int function(int n){
    if(n==1){
        return 0;
    }else if(n==2){
        return 1;
    }else{
        return function(n-1)+function(n-2);
    }
}

int main()
{
    int n;
    cin >> n;
    cout << function(n+1) << endl;
    

    return 0;
}

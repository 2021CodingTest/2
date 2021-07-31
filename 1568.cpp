#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int count=1;
    int res=0;
    while(N>0){
        if(N<count){
            count=1;
        }
        N-=count;
        count++;
        res++;
    }
    cout << res;
}

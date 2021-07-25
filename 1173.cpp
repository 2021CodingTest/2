/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int N,m,M,T,R;
    cin >> N >> m >> M >> T >> R;
    int count=0;
    int mac=m;
    int s_count=0;
    
    if(M-m<T){
        cout << -1;
        return 0;
    }
    
    while(N>s_count){
        if(mac+T <= M){
            mac+=T;
            count++;
            s_count++;
            continue;
        }
        if(mac+T >M){
            mac-=R;
            if(mac < m)
                mac=m;
            count++;
        }
        
    }
    cout << count;
    
}

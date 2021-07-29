
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N;
    cin >> N;
    long int arr[N]={0,};
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    if((arr[1]-arr[0])==(arr[2]-arr[1])){
        int Q=arr[1]-arr[0];
        int res=arr[N-1]+Q;
        //int res=arr[0]+Q*N;
        //Q*(N-1) + P
        cout << res;
        exit(0);
    }
    if((arr[1]/arr[0])==(arr[2]/arr[1])){
        int Q=arr[1]/arr[0];
        int res=arr[N-1]*(Q);
        //int res=arr[0]*pow(Q,N);
        //Q^(N-1) * P
        cout << res;
    }
}

#include <iostream>

using namespace std;

int main()
{
    int N, sum=0, room;
    cin >> N;
    int arr[101]={0,};
    for(int i=0;i<N;i++){
        cin >> room;
        if(arr[room]==0){
            arr[room]=1;
        }
        else{
            sum++;
        }
    }
    cout << sum;
    
}

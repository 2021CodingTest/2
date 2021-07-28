#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int D,H,W;
    cin >> D >> H >> W;
    double res=0.0;
    res=sqrt((double)(D*D)/(H*H + W*W));
    H=floor(H*res);
    W=floor(W*res);
    cout << (int)H << " "<< (int)W <<"\n";
    
    
    
}

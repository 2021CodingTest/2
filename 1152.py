#include <iostream>
#include <string>

using namespace std;

int main()
{
    string k;
    getline(cin,k);
    int sum=0;
  
    if(k.empty()){
        cout << "0" << endl;
    }
  
    sum=1;
    for(int i=0;i<k.length();i++){
        if(k[i]==' '){
            sum+=1;
        }
    }
  
    if(k[k.length()-1]==' ')
        sum--;
    if(k[0]==' ')
        sum--;
    cout << sum << endl;
}

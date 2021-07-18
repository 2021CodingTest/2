

#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int sum=0;
    for(int i=0;i<s.length();i++){
        //cout << s[i] << endl;
        sum*=16;
        
        if(s[i]>='A' && s[i]<='F'){
            sum+=s[i]-'A'+10;
        }
        else{
            sum+=s[i]-'0';
        }
        
        
    }
    cout << sum << endl;
}

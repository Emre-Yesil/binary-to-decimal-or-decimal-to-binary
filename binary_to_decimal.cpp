#include<iostream>
#include<cmath>
using namespace std;
int main(){
    string binary;
    int i,len,number=0;
    cout<<"binary number: ";
    cin>>binary;
    len = binary.length();
    for(i=0; i<=len-1; i++){
        if (binary[i] == '1'){
            number = number + pow(2,(len-i-1));
        }
    }
    cout<<number;
    return 0;
}
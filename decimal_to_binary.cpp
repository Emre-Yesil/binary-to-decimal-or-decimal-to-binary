#include<iostream>
#include<cmath>
using namespace std;
int main(){
    string binary = "";
    int number,total=0,n=0;
    cout<<"number: ";
    cin>>number;
    while(number >= pow(2,n)){
        n++;
    }
    for(int i=n-1; i>=0; i--){
        if(number >= total + pow(2,i)){
          total =total + pow(2,i);
          binary = binary + "1";
        }else{
            binary = binary + "0";
        }
    }
    while(binary.length() % 4 != 0){
      binary = "0"+ binary;
    }
cout<<binary;
return 0;
}
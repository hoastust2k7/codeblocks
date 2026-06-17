#include <iostream>
#include <string>

using namespace std;

int main()
{
    string data;
    int code[]={10,11,12,13,14,15,16,17,34,18,19,20,21,
                22,35,23,24,25,26,27,28,29,32,30,31,33};
    int sum=0,x,checksum;
    cin>>data;

    for (char j='A' ; j<='Z' ;j++){
        cout << j << data;
        x=code[j-'A'];


    sum= (x/10)*1+(x%10)*9;



    for (int i=0;i<8;i++){
        sum=sum+(data[i+1]-'0')*(8-i);
    }
    checksum=10-(sum%10);
    cout<<"ªºsum"<<sum<<"ªºchecksum="<<checksum<<endl;
    }
    return 0;
}

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string test;
    string a,b,c,d,f;
    //a=臺南 b=臺南市 c=31 d=2025...... f=單位
    float data;

    getline(cin,test);
    stringstream token(test);

    getline (token,a,',');
    getline (token,b,',');
    getline (token,c,',');
    getline (token,d,',');
    getline (token,f);
    data=stof(c);
    cout << a << "PM2.5="<< c << " " << f << " ";
    if (data<=50){
        cout << "良好" << endl;
    }
    else if (data<= 100){
        cout << "普通" << endl;
    }
    else if (data <= 150){
        cout << "對敏感族群不健康" << endl;
    }
    else if (data <= 200){
        cout << "對所有族群不健康" << endl;
    }
    else if (data <= 300){
        cout << "非常不健康" << endl;
    }
    else
        cout << "危害" << endl;
    return 0;
}

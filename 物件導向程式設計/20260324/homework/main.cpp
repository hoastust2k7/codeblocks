#include <iostream>

using namespace std;

int main()
{
        string id;  //身分證字號
        cin >> id;

        int eng=0;

        if (id[0]=='A')
            eng=0*9+1; //台北市
        else if (id[0]=='B')
            eng=1*9+1;  //台中市
        else if (id[0]=='C')
            eng=2*9+1;  //基隆市
        else if (id[0]=='D')
            eng=3*9+1;  //台南市
        else if (id[0]=='E')
            eng=4*9+1;  //高雄市
        else if (id[0]=='F')
            eng=5*9+1;  //台北縣
        else if (id[0]=='G')
            eng=6*9+1;  //宜蘭縣
        else if (id[0]=='H')
            eng=7*9+1;  //桃園縣
        else if (id[0]=='I')
            eng=4*9+3; //嘉義市
        else if (id[0]=='J')
            eng=8*9+1;  //新竹縣
        else if (id[0]=='K')
            eng=9*9+1; //苗栗縣
        else if (id[0]=='L')
            eng=0*9+2; //台中縣
        else if (id[0]=='M')
            eng=1*9+2; //南投縣
        else if (id[0]=='N')
            eng=2*9+2; //彰化縣
        else if (id[0]=='O')
            eng=5*9+3; //新竹市
        else if (id[0]=='P')
            eng=3*9+2; //雲林縣
        else if (id[0]=='Q')
            eng=4*9+2; //嘉義縣
        else if (id[0]=='R')
            eng=5*9+2; //台南縣
        else if (id[0]=='S')
            eng=6*9+2; //高雄縣
        else if (id[0]=='T')
            eng=7*9+2; //屏東縣
        else if (id[0]=='U')
            eng=8*9+2; //花蓮縣
        else if (id[0]=='V')
            eng=9*9+2; //台東縣
        else if (id[0]=='W')
            eng=2*9+3; //金門縣
        else if (id[0]=='X')
            eng=0*9+3; //澎湖縣
        else if (id[0]=='Y')
            eng=1*9+3; //陽明山
        else if (id[0]=='Z')
            eng=3*9+3; //連江縣


        for (int i=1;i<9;i++)
            eng=eng+(id.at(9-i)-'0')*i;

        eng=eng+(id.at(9)-'0');

        if (eng%10==0)
            cout << "real" << endl;
        else
            cout << "fake" << endl;
        return 0;
    }

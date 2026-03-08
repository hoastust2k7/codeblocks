#include <iostream>
#include <iomanip>

using namespace std;

void tax() {
    float price, tax, total;

    cout << "輸入價格（0 - 5000000）：";
    cin >> price;

    if(price > 5000000) {
        cout << "價格超過5000000，請重新輸入！" << endl;
        // return ;
    } else if(price < 370000) {
        tax = 0.06;
        total = price * tax;
        cout << fixed << "扣稅金額：" << setprecision(2) << total << "元" << endl;
    } else if(price < 990000) {
        tax = 0.13;
        total = (370000 * 0.06) + ((price - 370000) * tax);
        cout << fixed << "扣稅金額：" << setprecision(2) << total << "元" << endl;
    } else if(price < 1980000) {
        tax = 0.21;
        total = (370000 * 0.06) + ((990000 - 370000) * 0.13) + ((price - 990000) * tax);
        cout << fixed << "扣稅金額：" << setprecision(2) << total << "元" << endl;
    } else if(price < 3720000) {
        tax = 0.30;
        total = (370000 * 0.06) + ((990000 - 370000) * 0.13) + ((1980000 - 990000) * 0.21) + ((price - 1980000) * tax);
        cout << fixed << "扣稅金額：" << setprecision(2) << total << "元" << endl;
    } else {
        tax = 0.40;
        total = (370000 * 0.06) + ((990000 - 370000) * 0.13) + ((1980000 - 990000) * 0.21) + ((3720000 - 1980000) * 0.30) + ((price - 3720001) * tax);
        cout << fixed << "扣稅金額：" << setprecision(2) << total << "元" << endl;
    }
}

int main() {
    // tax();
    float price, tax, total;

    cout << "輸入價格（0 - 5000000）：";
    cin >> price;

    if(price > 5000000) {
        cout << "價格超過5000000，請重新輸入！" << endl;
        return main();
    } else if(price < 370000) {
        tax = 0.06;
        total = price * tax;
        cout << fixed << "扣稅金額：" << setprecision(2) << total << "元" << endl;
    } else if(price < 990000) {
        tax = 0.13;
        total = (370000 * 0.06) + ((price - 370000) * tax);
        cout << fixed << "扣稅金額：" << setprecision(2) << total << "元" << endl;
    } else if(price < 1980000) {
        tax = 0.21;
        total = (370000 * 0.06) + ((990000 - 370000) * 0.13) + ((price - 990000) * tax);
        cout << fixed << "扣稅金額：" << setprecision(2) << total << "元" << endl;
    } else if(price < 3720000) {
        tax = 0.30;
        total = (370000 * 0.06) + ((990000 - 370000) * 0.13) + ((1980000 - 990000) * 0.21) + ((price - 1980000) * tax);
        cout << fixed << "扣稅金額：" << setprecision(2) << total << "元" << endl;
    } else {
        tax = 0.40;
        total = (370000 * 0.06) + ((990000 - 370000) * 0.13) + ((1980000 - 990000) * 0.21) + ((3720000 - 1980000) * 0.30) + ((price - 3720001) * tax);
        cout << fixed << "扣稅金額：" << setprecision(2) << total << "元" << endl;
    }

    return 0;
}

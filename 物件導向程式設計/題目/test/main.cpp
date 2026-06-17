#include <iostream>

using namespace std;

int main()
{
    int n, data, a;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> data;

        if (i == 0) {
            a = data;
        }
        else if (data < a) {
            a = data;
        }
    }

    cout << a << endl;

    return 0;
}

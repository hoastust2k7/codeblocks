#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

// void first() {
//     int rand_number;
//     int loop = 10;

//     // cout << "請輸入迴圈次數：";
//     // cin >> loop;

//     srand(time(NULL));

//     for(int i = 1; i <= loop; i++) {
//         rand_number = rand();
//         cout << "第" << i << "次" << endl;
//         cout << rand_number << endl;
//     }
// }

// void second() {
//     int rand_number;
//     int loop = 3;

//     srand(time(NULL));

//     for(int i = 1; i <= loop; i++) {
//         rand_number = rand();
//         cout << "第" << i << "次" << endl;
//         if(rand_number % 2 == 0) {
//             cout << "正面" << endl;
//         } else {
//             cout << "反面" << endl;
//         }
//     }
// }

// void third() {
//     int rand_number;
//     int loop = 12;

//     srand(time(NULL));

//     for(int i = 1; i <= loop; i++) {
//         rand_number = rand();
//         cout << "第" << i << "次" << endl;
//         if(rand_number % 3 == 0) {
//             cout << "剪刀" << endl; 
//         } else if(rand_number % 3 == 1) {
//             cout << "石頭" << endl;
//         } else {    
//             cout << "布" << endl;
//         }
//     }
// }

// void fourth() {
//     int rand_number;
//     int loop = 0;
//     int up = 0, back = 0;

//     cout << "請輸入迴圈次數：";
//     cin >> loop;

//     srand(time(NULL));

//     for(int i = 1; i <= loop; i++) {
//         rand_number = rand();
//         cout << "第" << i << "次" << endl;
//         if(rand_number % 2 == 0) {
//             cout << "正面" << endl;
//             up++;
//         } else {
//             cout << "反面" << endl;
//             back++;
//         }
//     }
//     cout << "正面次數：" << up << endl;
//     cout << "反面次數：" << back << endl;
// }

// void fifth() {
//     int bottom, height;
//     double area;
    
//     // cout << "請輸入底邊長度：";
//     cin >> bottom;
//     // cout << "請輸入高度：";
//     cin >> height;

//     area = bottom * height / 2.0;

//     cout << fixed << setprecision(1) << "Triangle area:" << area << endl;
// }

void sixth() {
    int n = 0;
    double data = 0, area = 0;
    
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> data;
        area = data * data;
        cout << fixed << setprecision(5) << area << endl;
    }
}

int main() {
    // first();
    // second();
    // third();
    // fourth();
    // fifth();
    sixth();

    return 0;
}
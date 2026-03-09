// #include <QApplication>
#include <QWidget>

int main(int argc, char *argv[]) {
    // 1. Khởi tạo ứng dụng
    QApplication app(argc, argv);

    // 2. Tạo một cửa sổ (QWidget là lớp cơ bản nhất của UI)
    QWidget window;
    
    // 3. Thiết lập thuộc tính cửa sổ
    window.resize(400, 300); // Rộng 400px, cao 300px
    window.setWindowTitle("Cửa sổ Qt đầu tiên của tôi");
    
    // 4. Hiển thị cửa sổ
    window.show();

    // 5. Chạy vòng lặp sự kiện
    return app.exec();
}

#include <QApplication>
#include <QDesktopWidget>
#include <QMetaType>
// this is the program for..
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setFixedSize(w.width(),w.height()); // This will fix the size of the window.
    w.setWindowFlags(w.windowFlags()^Qt::WindowMaximizeButtonHint); // This will disable the maximize button.
    w.move(QApplication::desktop()->screen()->rect().center()-w.rect().center()); //This will shift the main window to the center of the screen.
    w.show();
    qRegisterMetaType<QVector<double> >("QVector<double>"); // Register the QVector<double> type before using it in the code.
    return a.exec();
}

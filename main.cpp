#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

//    ulong x = 39452;
//    QString s = QString::number(x, 16).toUpper();
    int i = 45;
    QString n = QString("%1").arg(i, 4 ,10, QChar('0'));
    qDebug() << n;

//    QString s = "2014:10:15";
//    s.replace(":", "-");
//    QString s1 = s.left(10);
//    int year = s.left(4).toInt();
//    int month = s.mid(5,2).toInt();
//    int day = s.mid(8,2).toInt();
//    qDebug() << s << year << month << day << s1;

//    QString s1 = "Rory";
//    QString s2 = "Hill";
//    s1 += s2;
//    qDebug() << s1;

//    int h1 = 8;
//    int h2 = 10;
//    int w1 = 20;
//    float r = (float)h1/w1;
//    int x = r*h2;
//    qDebug() << "x =" << x;
    return a.exec();
}


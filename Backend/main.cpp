#include <iostream>
#include <QDate>
#include <QDebug>

using namespace std;

int main()
{
    qDebug() << QDate::currentDate();
    return 0;
}

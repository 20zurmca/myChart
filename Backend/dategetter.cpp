#include "dategetter.h"

DateGetter::DateGetter(QObject *parent) : QObject(parent)
{

}

DateGetter::~DateGetter()
{

}

QString DateGetter::getAbbrDate() const
{
    return date.currentDate().toString("M/dd/yyyy");
}

QString DateGetter::getLongDate() const
{
    return date.currentDate().toString("MMMM dd yyyy");
}

QString DateGetter::getlocalTime() const
{
    return time.currentTime().toString();
}

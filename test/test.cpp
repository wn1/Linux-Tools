#include "test.h"
#include "QByteArray"
#include "QString"
#include "QProcess"

Test::Test(){

}

QString* Test::getBuildInfo()
{
    QProcess* getOsInfoP1 = new QProcess();
    getOsInfoP1->start("uname --release");
    getOsInfoP1->waitForReadyRead();

    QString* releaseInfo = new QString();
    QByteArray info = getOsInfoP1->readAllStandardOutput();
    releaseInfo->append(info);
    return releaseInfo;
}

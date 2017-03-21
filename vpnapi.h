#ifndef VPNAPI_H
#define VPNAPI_H

#include <QString>
#include <QDataStream>

class vpnApi
{
public:
    vpnApi();

    enum vpnApiAction
    {
        ACTION_HELLO = 0,
        ACTION_STOP,
        ACTION_VPN_UPDATE_STATUS
    };

    QString objName;
    int action;
    QByteArray data;
};

QDataStream &operator<<(QDataStream &ds, const vpnApi &obj);
QDataStream &operator>>(QDataStream &ds, vpnApi &obj) ;

#endif // VPNAPI_H
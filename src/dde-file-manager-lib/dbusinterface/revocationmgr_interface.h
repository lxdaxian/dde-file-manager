/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -c RevocationMgrInterface -p ../dbusservice/dbusinterface/revocationmgr_interface revocation.xml
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef REVOCATIONMGR_INTERFACE_H
#define REVOCATIONMGR_INTERFACE_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface com.deepin.filemanager.daemon.RevocationManager
 */
class RevocationMgrInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "com.deepin.filemanager.daemon.RevocationManager"; }

public:
    RevocationMgrInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = nullptr);

    ~RevocationMgrInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<int> popEvent()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("popEvent"), argumentList);
    }

    inline QDBusPendingReply<> pushEvent(int event, const QString &user)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(event) << QVariant::fromValue(user);
        return asyncCallWithArgumentList(QStringLiteral("pushEvent"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void deskRevocationAction();
    void fmgrRevocationAction(const QString &user);
};

namespace com {
  namespace deepin {
    namespace filemanager {
      namespace daemon {
        typedef ::RevocationMgrInterface RevocationManager;
      }
    }
  }
}
#endif

/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -v -c AutopilotAdaptor -a src/dbus_adaptor.h:src/dbus_adaptor.cpp src/dbus_spec.xml
 *
 * qdbusxml2cpp is Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef DBUS_ADAPTOR_H_1337917721
#define DBUS_ADAPTOR_H_1337917721

#include <QObject>
#include <QtDBus>

class QString;


/*
 * Adaptor class for interface com.canonical.Unity.Debug.Introspection
 */
class AutopilotAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "com.canonical.Unity.Debug.Introspection")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"com.canonical.Unity.Debug.Introspection\">\n"
"    <method name=\"GetState\">\n"
//"      <annotation value=\"QList<QVariantMap>\" name=\"com.trolltech.QtDBus.QtTypeName.Out0\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"piece\"/>\n"
"      <arg direction=\"out\" type=\"aa{sv}\" name=\"state\"/>\n"
"    </method>\n"
"  </interface>\n"
        "")
public:
    AutopilotAdaptor(QObject *parent);
    virtual ~AutopilotAdaptor();

public: // PROPERTIES
public Q_SLOTS: // METHODS
    void GetState(const QString &piece, const QDBusMessage &message);
Q_SIGNALS: // SIGNALS
};

#endif

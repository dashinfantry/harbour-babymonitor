#ifndef APPSETTINGS_H
#define APPSETTINGS_H

#include <QSettings>

class AppSettings : public QSettings
{
    Q_OBJECT
public:
    explicit AppSettings(QObject *parent = 0) : QSettings(parent) {}

    Q_INVOKABLE inline void setValue(const QString &key, const QVariant &value) { QSettings::setValue(key, value); }

    Q_INVOKABLE inline QVariant value(const QString &key, const QVariant &defaultValue = QVariant()) const { return QSettings::value(key, defaultValue); }

signals:

public slots:

};

Q_DECLARE_METATYPE(AppSettings*)

#endif // APPSETTINGS_H
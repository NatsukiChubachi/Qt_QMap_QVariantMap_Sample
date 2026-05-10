#ifndef SAMPLEQMAP_H
#define SAMPLEQMAP_H

#include <QObject>
#include <QQmlEngine>

/**
 * @brief QMap使用のサンプルプログラム
 */
class SampleQMap : public QObject
{
    Q_OBJECT
    QML_ELEMENT


public:
    /**
     * @brief コンストラクタ
     */
    explicit SampleQMap(QObject *parent = nullptr);

    /**
     * @brief 初期化関数
     */
    Q_INVOKABLE void initialize();


private:
    /**
     * メンバ変数
     */
    QMap<QString,int> _mapNumber;     // 数値Map


};

#endif // SAMPLEQMAP_H

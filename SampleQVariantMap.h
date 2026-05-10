#ifndef SAMPLEQVARIANTMAP_H
#define SAMPLEQVARIANTMAP_H

#include <QObject>
#include <QQmlEngine>

/**
 * @brief QVariantMap使用のサンプルプログラム
 */
class SampleQVariantMap : public QObject
{
    Q_OBJECT
    QML_ELEMENT


public:
    /**
     * @brief コンストラクタ
     */
    explicit SampleQVariantMap(QObject *parent = nullptr);

    /**
     * @brief 初期化関数
     */
    Q_INVOKABLE void initialize();

    /**
     * @brief データの取得
     * @return データ
     */
    Q_INVOKABLE QVariantMap getMapData();


private:
    /**
     * メンバ変数
     */
    QVariantMap _mapVariant;     // データ


};

#endif // SAMPLEQVARIANTMAP_H

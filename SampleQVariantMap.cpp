#include "SampleQVariantMap.h"

/**
 * @brief コンストラクタ
 * @param parent
 */
SampleQVariantMap::SampleQVariantMap(QObject *parent)
    : QObject{parent}
{

    // メンバ変数初期化
    this->_mapVariant.clear();
}


/**
 * @brief 初期化関数
 */
void SampleQVariantMap::initialize()
{
    // QVariantListの内部データクリア
    this->_mapVariant.clear();

    // QVariantListの要素追加
    this->_mapVariant.insert( "one", 1 );
    this->_mapVariant.insert( "two", 3.14 );
    this->_mapVariant.insert( "three", 0.0016 );
    this->_mapVariant.insert( "four", "Hello world." );
    this->_mapVariant.insert( "five", 999 );
    this->_mapVariant.insert( "six", 9876.5 );

    // QVariantList要素数のカウント
    int listLength = this->_mapVariant.keys().length();
    qDebug() << "QVariantMapの要素数：" << listLength;

    // QVariantListの要素へのアクセス
    qDebug() << "[one]の内容" << this->_mapVariant[ "one" ].toInt();
    qDebug() << "[two]の内容" << this->_mapVariant[ "two" ].toFloat();
    qDebug() << "[three]の内容" << this->_mapVariant[ "three" ].toDouble();
    qDebug() << "[four]の内容" << this->_mapVariant[ "four" ].toString();
    qDebug() << "[five]の内容" << this->_mapVariant[ "five" ].toInt();
    qDebug() << "[six]の内容" << this->_mapVariant[ "six" ].toFloat();
    qDebug() << "[six]の内容" << this->_mapVariant[ "XXX" ].toFloat();

    // QListの要素削除
    this->_mapVariant.remove( "five" );
    qDebug() << "QVariantMapの[five]を削除しました";
    this->_mapVariant.remove( "six" );
    qDebug() << "QVariantMapの[six]を削除しました";

}

/**
 * @brief リストデータの取得
 * @return リストデータ
 */
QVariantMap SampleQVariantMap::getMapData()
{
    return this->_mapVariant;
}


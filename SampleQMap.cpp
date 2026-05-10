#include "SampleQMap.h"

/**
 * @brief コンストラクタ
 * @param parent
 */
SampleQMap::SampleQMap(QObject *parent)
    : QObject{parent}
{

    // メンバ変数初期化
    this->_mapNumber.clear();
}

/**
 * @brief 初期化関数
 */
void SampleQMap::initialize()
{
    // QMapの内部データクリア
    this->_mapNumber.clear();

    // QMapの要素追加
    this->_mapNumber.insert( "one", 1 );
    this->_mapNumber.insert( "two", 2 );
    this->_mapNumber.insert( "three", 3 );
    this->_mapNumber.insert( "four", 4 );
    this->_mapNumber.insert( "five", 5 );

    // QMap要素数のカウント
    int listLength = this->_mapNumber.keys().length();
    qDebug() << "QMapの要素数：" << listLength;

    // QMapの要素へのアクセス
    qDebug() << "[one]の内容" << this->_mapNumber.value( "one" );
    qDebug() << "[three]の内容" << this->_mapNumber.value( "three" );
    qDebug() << "[five]の内容" << this->_mapNumber.value( "five" );

    // QMapの要素削除
    this->_mapNumber.remove( "five" );
    qDebug() << "QMapの[five]を削除しました";

    // 要素数を使ったループ処理
    QList<QString> _listKey = this->_mapNumber.keys();
    listLength = _listKey.length();

    qDebug() << "";
    qDebug() << "QListの要素数：" << listLength;

    for ( int i=0; i<listLength; i++ ) {
        qDebug() << "QList[" << _listKey[i] << "]の内容：" << this->_mapNumber.value( _listKey[i] );
    }

}


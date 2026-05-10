import QtQuick
import QtQuick.Controls

Rectangle {
    id: _root
    anchors.fill: parent
    color: "#ffffff"

    // Repeaterで使用するリスト
    property var repeaterItems: []
    property var repeaterKeys: []


    // 画面読み込み後に実行される処理
    Component.onCompleted: {

        // 初期化処理の呼び出し
        _model.initialize();

        // リストデータの取得
        var data = _model.getMapData();
        console.log( data["one"] );
        console.log( Object.keys( data ) );
        _root.repeaterItems = data;
        _root.repeaterKeys = Object.keys( data );
    }

    // Model
    SampleQVariantMap {
        id: _model
    }

    // 画面デザイン
    Label {
        id: _label

        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter

        font.pixelSize: 24
        color: "#000000"

        text: "QVariantMapサンプル"
    }

    Column {
        anchors.top: parent.top
        anchors.topMargin: 10
        anchors.left: parent.left
        anchors.leftMargin: 10

        Repeater {
            id: _repeatItems
            model: _root.repeaterKeys

            Rectangle {

                color: "#ffffff"
                border.width: 1
                border.color: "#000000"

                width: 150
                height: 30

                Label {
                    anchors.fill: parent
                    anchors.margins: 5

                    text: repeaterItems[ _root.repeaterKeys[ index ] ]
                }
            }
        }
    }
}

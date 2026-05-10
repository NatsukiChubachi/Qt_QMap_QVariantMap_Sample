import QtQuick
import QtQuick.Controls

Rectangle {
    id: _root
    anchors.fill: parent
    color: "#ffffff"

    // 画面読み込み後に実行される処理
    Component.onCompleted: {

        // 初期化処理の呼び出し
        _model.initialize();
    }

    // Model
    SampleQMap {
        id: _model
    }

    // 画面デザイン
    Label {
        id: _label

        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter

        font.pixelSize: 24
        color: "#000000"

        text: "QMapサンプル"
    }
}

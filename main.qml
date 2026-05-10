import QtQuick
import QtQuick.Controls

Window {
    width: 640
    height: 480
    visible: true
    title: "Qt_QMap_QVariantMap_Sample"

    // Window表示時に実行される処理
    Component.onCompleted: {

        // Loaderのsourceプロパティに画面Aのファイルパスを設定する
        _loader.source = "./SampleQMap.qml";
    }

    // 画面QMLを読み込むLoader
    Loader {
        id: _loader
        anchors.fill: parent
    }

    // 画面Aへ遷移するボタン
    Button {
        id: _buttonA

        anchors.left: parent.left
        anchors.leftMargin: 50
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 50

        width: 150
        height: 80

        text: "画面Aへ"
        palette.buttonText: "#000000"

        // ボタンがクリックされた場合の処理
        onClicked: {

            // Loaderのsourceプロパティを空にし、内容をクリアする
            _loader.source = "";

            // Loaderのsourceプロパティに画面Aのファイルパスを設定する
            _loader.source = "./SampleQMap.qml";
        }
    }

    // 画面Bへ遷移するボタン
    Button {
        id: _buttonB

        anchors.right: parent.right
        anchors.rightMargin: 50
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 50

        width: 150
        height: 80

        text: "画面Bへ"
        palette.buttonText: "#000000"

        // ボタンがクリックされた場合の処理
        onClicked: {

            // Loaderのsourceプロパティを空にし、内容をクリアする
            _loader.source = "";

            // Loaderのsourceプロパティに画面Bのファイルパスを設定する
            _loader.source = "./SampleQVariantMap.qml";
        }
    }
}

import QtQuick 2.5
import QtQuick.Window 2.2
import QtQuick.Controls 1.4
import QtQuick.Controls.Styles 1.4

Window{
    id:login_panel
    visible:true
    width: 300
    height:300

    color:"transparent" //背景色






    title:qsTr("SimpleSip");

    Column{
        Rectangle{//用户名
            id:user
            Text{
                id:user_text
                anchors.left: parent.left
                anchors.leftMargin: 20
                anchors.top:parent.top
                anchors.topMargin: 50
                text:"用户:"
            }

            TextInput{
                id:user_input
                anchors.verticalCenter:user_text.verticalCenter
                anchors.left: user_text.right
                anchors.leftMargin: 20
                width: 100
            }
        }

        Rectangle{//密码
            id:password

            Text{
                id:password_text
                anchors.left: parent.left
                anchors.leftMargin: 20
                anchors.top: parent.top
                anchors.topMargin: 50
                text:"密码:"
            }
            TextInput{
                id:password_input
                anchors.verticalCenter:password_text.verticalCenter
                anchors.left: password_text.right
                anchors.leftMargin: 20
                width: 100
            }
            Button{//密码是否可见
                id:visi
                anchors.left:password_input.right
                anchors.leftMargin:20

                style:ButtonStyle{

                }
            }
        }
    }

}

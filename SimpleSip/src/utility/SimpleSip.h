/*
*   主控类：进程运行状态监控，进程相关的全局变量存储
*   单例模式
*   注入qml元对象系统
*
*
*
*/
#ifdef SIMPLESIP_H
#define SIMPLESIP_H
#include <QObject>

class SimpleSip : public QObject{

public:
    Q_PROPERTY(LoadStage stage READ stage WRITE setStage NOTIFY stageChanged)

    Q_ENUMS(LoadStage)

public:
    enum LoadStage{     //界面加载进度
        LS_INIT,        //初始状态，尚未加载
        LS_LOGIN,       //登录界面加载完毕
        LS_CHATPANEL,   //聊天面板加载完毕
        LS_FINISH,      //全部加载完毕

        LS_COUNT,       //共有多少个状态
    };

private:


signals:
    void stageChanged(LoadStage);

public:
    void setStage

};

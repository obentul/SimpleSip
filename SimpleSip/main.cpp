#include <QGuiApplication>
#include <QQmlApplicationEngine>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/qml/Login.qml")));

    //1.注册c++为qml类型,提供多实例途径
    //qmlRegisterType<qmltype>("namespace",mainversion,subversion,"classname");

    //2.实例化一个c++类，注册到qml中，作为单例被使用
    //

    //3.为上下文创建附加属性
    //engine->rootContext()->setContextProperty("Propertyname",propertyvalue);  //后面在qml中可直接使用Propertyname，获得的就是propertyvalue的值
                                                                                //propertyvalue可以使具体的值，也可以是某个实例的指针

    //注：2和3的区别，2创建的历史在engine中通用，3创建的property仅在某个context中通用，比如engine可以有rootContext，也可以通过createcontext创建context1 2 3...
    //   2比3 更“全局”，不过一般3就够用了

    return app.exec();
}

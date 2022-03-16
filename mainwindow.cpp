#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QJsonDocument>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    const QString dbPath = QString("O:/VCSharp/MediaStreamer/MediaStreamer.WPF.NetCore3.1/bin/Release/netcoreapp3.1/Compositions/Compositions.json");
    std::cout << "Creating data access..." << std::endl;
    DataAccess aA = DataAccess(dbPath);
    _player = new QMediaPlayer();
    // ...
    _player->setMedia(QUrl::fromLocalFile(aA.filePaths[0]));
    _player->setVolume(50);
    _player->play();
    std::cout << "Created data access..." << std::endl;
}

MainWindow::~MainWindow()
{
    _player->stop();
    delete _player;
    delete ui;
}

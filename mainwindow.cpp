#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtNetwork>
#include <QtWebEngineWidgets>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QWebEngineView* webview = new QWebEngineView;
    QWebEngineSettings::globalSettings()->setAttribute(QWebEngineSettings::PluginsEnabled, true);
    webview->load(QUrl("http://s.61.com/home"));
    setCentralWidget(webview);
}

MainWindow::~MainWindow()
{
    delete ui;
}

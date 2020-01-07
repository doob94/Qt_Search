#include "mainwindow.h"
#include "searchbox.h"
#include <QGridLayout>
#include <QTabBar>
#include "searchhistory.h"
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    setWindowTitle("Search");

    QWidget *centralWidget = new QWidget();
    QGridLayout *gridLayout = new QGridLayout(centralWidget);

    //검색Edit
    SearchBox *searchBox = new SearchBox();

    //검색엔진Tab
    QTabBar *searchEngineTabbar = new QTabBar();
    searchEngineTabbar->addTab("Google");
    searchEngineTabbar->addTab("Naver");

    //Tabbar 변경시 검색엔진 변경
    connect(searchEngineTabbar,SIGNAL(tabBarClicked(int)), searchBox, SLOT(changeSearchUrl(int)));

    //검색히스토리
    SearchHistory *searchHistory = new SearchHistory();

    connect(searchBox, &SearchBox::returnPressed, searchHistory, [=](){
       searchHistory->addItem(searchBox->text());
    });

    gridLayout->addWidget(searchHistory,1,1,2,1);
    gridLayout->addWidget(searchEngineTabbar,1,2,1,1);
    gridLayout->addWidget(searchBox,2,2,1,1);

    this->setCentralWidget(centralWidget);


}

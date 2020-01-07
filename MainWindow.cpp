#include "MainWindow.h"
#include "searchbox.h"
#include "SearchList.h"
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    SearchBox *searchBox = new SearchBox();

    QWidget *mainWidget = new QWidget();
    QGridLayout *mainLayout = new QGridLayout(mainWidget);
    mainLayout->addWidget(searchBox,2,2,1,1);

    QTabBar *tbSearchEngine = new QTabBar();
    tbSearchEngine->addTab("GOOGLE");
    tbSearchEngine->addTab("NAVER");

    connect(tbSearchEngine,SIGNAL(tabBarClicked(int)),searchBox, SLOT(ChangeSearchEngine(int)));

    mainLayout->addWidget(tbSearchEngine,1,2,1,1);

    SearchList *searchHistory = new SearchList();
    mainLayout->addWidget(searchHistory,1,1,2,1);

    connect(searchBox,&SearchBox::returnPressed, searchHistory, [=](){
        searchHistory->addItem(searchBox->text());
    });

    connect(searchHistory, &SearchList::clicked, searchBox, [=](){
        searchBox->doSearch(searchHistory->currentItem()->text());
    } );

    this->setCentralWidget(mainWidget);

}

#ifndef SEARCHHISTORY_H
#define SEARCHHISTORY_H

#include <QListWidget>

class SearchHistory : public QListWidget
{
    Q_OBJECT
public:
    SearchHistory(QWidget *parent = 0);
};

#endif // SEARCHHISTORY_H

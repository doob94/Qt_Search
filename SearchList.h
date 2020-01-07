#ifndef SEARCHLIST_H
#define SEARCHLIST_H

#include <QWidget>
#include <QListWidget>
class SearchList : public QListWidget
{
    Q_OBJECT
public:
    explicit SearchList(QWidget *parent = nullptr);

signals:

public slots:
private:

};

#endif // SEARCHLIST_H

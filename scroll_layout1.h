//
// Created by 申翔宇 on 2022/11/23.
//

#ifndef RESPONSIVE_SCROLL_LAYOUT1_H
#define RESPONSIVE_SCROLL_LAYOUT1_H




#include <QtGui>
#include <QList>
#include <QLayout>

class scroll_t : public QLayout {
public:
    scroll_t(): QLayout() {}
    ~scroll_t();

    // standard functions for a QLayout
    void setGeometry(const QRect &rect);

    void addItem(QLayoutItem *item);
    QSize sizeHint() const;
    QSize minimumSize() const;
    int count() const;
    QLayoutItem *itemAt(int) const;
    QLayoutItem *takeAt(int);

private:
    QList<QLayoutItem*> list2_;
};


#endif //RESPONSIVE_SCROLL_LAYOUT_H

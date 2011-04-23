/*
 * ListAccountsWidget.cpp
 *
 *  Created on: 22 avr. 2011
 *      Author: chtitux
 */

 #include <QApplication>


#include "ListAccountsWidget.h"

ListAccountsWidget::ListAccountsWidget(QWidget *parent):
	QWidget(parent)
{
	lw = new QListWidget(this);
	lw->addItem("Theo");
	lw->addItem("Max");
	lw->addItem("Matth");


}

void ListAccountsWidget::newAccount() {
	lw->addItem("Nouveau !");
}

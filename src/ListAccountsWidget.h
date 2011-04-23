/*
 * ListAccountsWidget.h
 *
 *  Created on: 22 avr. 2011
 *      Author: chtitux
 */

#ifndef LISTACCOUNTSWIDGET_H_
#define LISTACCOUNTSWIDGET_H_

#include <QWidget>
#include <QListWidget>


class ListAccountsWidget: public QWidget {

	Q_OBJECT

	public:
		ListAccountsWidget(QWidget *parent = 0);

	private slots:
		void newAccount();

	private:
		QListWidget *lw;


};

#endif /* LISTACCOUNTSWIDGET_H_ */

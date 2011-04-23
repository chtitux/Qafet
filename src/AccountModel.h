/*
 * AccountModel.h
 *
 *  Created on: 23 avr. 2011
 *      Author: chtitux
 */

#ifndef ACCOUNTMODEL_H_
#define ACCOUNTMODEL_H_

#include <QSqlTableModel>

class AccountModel : public QSqlTableModel {

	Q_OBJECT

	public:
		AccountModel();
		virtual ~AccountModel();
		void refresh();

	public slots:
		void newAccount();



};

#endif /* ACCOUNTMODEL_H_ */

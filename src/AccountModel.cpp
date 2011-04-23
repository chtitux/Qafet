/*
 * AccountModel.cpp
 *
 *  Created on: 23 avr. 2011
 *      Author: chtitux
 */

#include <QSqlQuery>

#include "AccountModel.h"

	enum {
		Account_Id = 0,
		Account_Surname = 1,
		Account_Name = 2,
		Account_Balance = 3
	};

AccountModel::AccountModel() {
	this->setTable("account");
	this->setSort(Account_Id, Qt::AscendingOrder);
	this->setHeaderData(Account_Surname, Qt::Horizontal, tr("Surname"));
	this->setHeaderData(Account_Name, Qt::Horizontal, tr("Name"));
	this->setHeaderData(Account_Balance, Qt::Horizontal, tr("Balance"));

	this->select();
}

AccountModel::~AccountModel() {
	// TODO Auto-generated destructor stub
}

void AccountModel::newAccount() {
	QSqlQuery *query = new QSqlQuery("INSERT INTO `qafet`.`account` (`id`, `surname`, `name`, `balance`, `is_contributor`) VALUES (NULL, 'Truc', 'Bidule', '50', '0');");

	refresh();
}

void AccountModel::refresh() {
	this->select();

}

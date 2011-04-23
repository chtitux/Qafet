/*
 * main.cpp
 *
 *  Created on: 22 avr. 2011
 *      Author: chtitux
 */

 #include <QApplication>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

#include <QMessageBox>
#include <QObject>
#include "MainWindow.h"

bool createConnection()
{
	QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
	db.setHostName("localhost");
	db.setDatabaseName("qafet");
	db.setUserName("qafet");
	db.setPassword("emDb7sATbupq5CyD");
	if (!db.open()) {
		QMessageBox::critical(0, QObject::tr("Database Error"),
		db.lastError().text());
		return false;
	}
	return true;
}


int main(int argc, char *argv[])
 {

	QApplication app(argc, argv);

	if (!createConnection())
		return 1;


	MainWindow mainWin;
	mainWin.show();

	return app.exec();
 }

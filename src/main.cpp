/*
 * main.cpp
 *
 *  Created on: 22 avr. 2011
 *      Author: chtitux
 */

 #include <QApplication>

#include "MainWindow.h"

 int main(int argc, char *argv[])
 {

	QApplication app(argc, argv);
	MainWindow mainWin;
	mainWin.show();

	return app.exec();
 }

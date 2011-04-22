/*
 * MainWindow.cpp
 *
 *  Created on: 22 avr. 2011
 *      Author: chtitux
 */
 #include <QApplication>

#include "MainWindow.h"

MainWindow::MainWindow() {
	accounts = new QList<QString>();

	createActions();
	createMenus();
	//createContextMenu();
	//createToolBars();
	createStatusBar();

}

void MainWindow::createActions()
{

	newAction = new QAction(tr("&New account"), this);

	newAction->setShortcut(QKeySequence::New);
	connect(newAction, SIGNAL(triggered()), this, SLOT(newAccount()));

	aboutQtAction = new QAction(tr("About &Qt"), this);
	aboutQtAction->setStatusTip(tr("Show the Qt library's About box"));
	connect(aboutQtAction, SIGNAL(triggered()), qApp, SLOT(aboutQt()));

	exitAction = new QAction(tr("&Quit"), this);
	exitAction->setShortcut(QKeySequence::Quit);
	connect(exitAction, SIGNAL(triggered()), qApp, SLOT(quit()));
}

void MainWindow::createMenus()
{
	accountMenu = menuBar()->addMenu(tr("&Account"));
	accountMenu->addAction(newAction);
	accountMenu->addSeparator();
	accountMenu->addAction(aboutQtAction);
	accountMenu->addAction(exitAction);

}

void MainWindow::createStatusBar()
{
	statusBar()->showMessage(trUtf8("Qafet lancé"), 0);

}

void MainWindow::newAccount()
{
	accounts->append("theo");
}

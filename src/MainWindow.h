/*
 * MainWindow.h
 *
 *  Created on: 22 avr. 2011
 *      Author: chtitux
 */

#ifndef MAINWINDOW_H_
#define MAINWINDOW_H_

#include <QMainWindow>
#include <QAction>
#include <QLabel>
#include <QList>
#include <QMenu>
#include <QMenuBar>
#include <QToolBar>
#include <QStatusBar>

#include "ListAccountsWidget.h"
#include "AccountModel.h"
#include "AccountListView.h"

class MainWindow: public QMainWindow {

	Q_OBJECT

	public:
		MainWindow();

	protected:
		//void closeEvent(QCloseEvent *event);

	private slots:
		//void newAccount();
		//void updateStatusBar();
		//void find();

	private:
		void createActions();
		void createMenus();
		//void createContextMenu();
		//void createToolsBars();
		void createStatusBar();

		QMenu *accountMenu;
		QToolBar *fileToolBar;
		QAction *newAction;
		QAction *exitAction;
		QAction *aboutQtAction;

		AccountModel *accountModel;
		AccountListView *accountListView;

		QList<QString> *accounts;
		ListAccountsWidget *accountsWidget;
};

#endif /* MAINWINDOW_H_ */

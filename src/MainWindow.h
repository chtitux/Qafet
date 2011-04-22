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

class MainWindow: public QMainWindow {

	Q_OBJECT

	public:
		MainWindow();

	protected:
		//void closeEvent(QCloseEvent *event);

	private slots:
		void newAccount();
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

		QList<QString> *accounts;

};

#endif /* MAINWINDOW_H_ */

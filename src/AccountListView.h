/*
 * AccountListView.h
 *
 *  Created on: 23 avr. 2011
 *      Author: chtitux
 */

#ifndef ACCOUNTLISTVIEW_H_
#define ACCOUNTLISTVIEW_H_

#include <qlistview.h>
#include "AccountModel.h"

class AccountListView: public QListView {
public:
	AccountListView(AccountModel*);
	virtual ~AccountListView();
};

#endif /* ACCOUNTLISTVIEW_H_ */

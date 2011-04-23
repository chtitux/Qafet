/*
 * AccountListView.cpp
 *
 *  Created on: 23 avr. 2011
 *      Author: chtitux
 */

#include "AccountListView.h"
#include "AccountModel.h"

AccountListView::AccountListView(AccountModel *model) {
	this->setModel(model);


}

AccountListView::~AccountListView() {
	// TODO Auto-generated destructor stub
}

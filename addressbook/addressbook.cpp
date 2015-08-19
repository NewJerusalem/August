#include "addressbook.h"

addressbook::addressbook(QWidget *parent)
	: QWidget(parent)
{
	QLabel *nameLabel    = new QLabel(tr("Name:"));
	QLabel *addressLabel = new QLabel(tr("Address:"));

	nameline_    = new QLineEdit;
	addresstext_ = new QTextEdit;

	QGridLayout *mainLayout = new QGridLayout;
	mainLayout->addWidget(nameLabel, 0, 0);
	mainLayout->addWidget(nameline_, 0, 1);
	mainLayout->addWidget(addressLabel, 1, 0, Qt::AlignTop);
	mainLayout->addWidget(addresstext_, 1, 1);

	setLayout(mainLayout);
	setWindowTitle(tr("Simple AddressBook"));

	nameline_->setReadOnly(true);
	addresstext_->setReadOnly(true);

	addbtn_ = new QPushButton(tr("&Add"));
	submitbtn_ = new QPushButton(tr("&Submit"));
	cancelbtn_ = new QPushButton(tr("&Cancel"));

	connect(addbtn_, SIGNAL(clicked), this, SLOT(addContact));
	connect(submitbtn_, SIGNAL(clicked), this, SLOT(submitContact));
	connect(cancelbtn_,SIGNAL(clicked),this,SLOT(cancel));

	QVBoxLayout* btnLayout = new QVBoxLayout();
	btnLayout->addWidget(addbtn_, Qt::AlignTop);
	btnLayout->addWidget(submitbtn_);
	btnLayout->addWidget(cancelbtn_);
	btnLayout->addStretch();

	mainLayout->addLayout(btnLayout,1,2);
}

addressbook::~addressbook()
{

}


void addressbook::addContact()
{

}

void addressbook::submitContact()
{

}

void addressbook::cancel()
{

}
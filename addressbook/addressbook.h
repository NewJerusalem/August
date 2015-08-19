#ifndef ADDRESSBOOK_H
#define ADDRESSBOOK_H

#include <QtWidgets/QWidget>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QLabel>
#include <QGridLayout>
#include <QPushButton>

class addressbook : public QWidget
{
	Q_OBJECT

public:
	addressbook(QWidget *parent = 0);
	~addressbook();

public slots:
	void addContact();
	void submitContact();
	void cancel();

private:
	QLineEdit *nameline_;
	QTextEdit *addresstext_;
	QPushButton *addbtn_;
	QPushButton *submitbtn_;
	QPushButton *cancelbtn_;
};

#endif // ADDRESSBOOK_H

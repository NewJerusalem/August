#include "addressbook.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	addressbook w;
	w.show();
	return a.exec();
}

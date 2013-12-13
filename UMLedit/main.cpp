#include "umledit.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	UMLedit w;
	w.show();
	return a.exec();
}

#include"svMainWindow.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	svMainWindow w;
	w.show();
	return a.exec();
}

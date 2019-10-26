#include "svMainWindow.h"
#include"ui_svMainWindow.h"
svMainWindow::svMainWindow(QWidget *parent)
	: QMainWindow(parent),
	ui(new Ui::svMainWindowClass)
{
	ui->setupUi(this);
}

#include "svMainWindow.h"
#include"ui_svMainWindow.h"
#include"svDialog.h"
svMainWindow::svMainWindow(QWidget *parent)
	: QMainWindow(parent),
	ui(new Ui::svMainWindowClass)
{
	ui->setupUi(this);

	svDialog *svD = new svDialog(NULL);
	svD->show();
}

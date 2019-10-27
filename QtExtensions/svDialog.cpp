#include "svDialog.h"
#include "ui_svDialog.h"

svDialog::svDialog(QWidget *parent)
	: QWidget(parent)
{
	ui = new Ui::svDialog();
	ui->setupUi(this);
}

svDialog::~svDialog()
{
	delete ui;
}

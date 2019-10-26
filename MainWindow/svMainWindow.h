#pragma once

#include <QtWidgets/QMainWindow>
#include"MainWindowExport.h"


namespace Ui
{
	class svMainWindowClass;
}
class MAINWINDOW_EXPORT svMainWindow : public QMainWindow
{
	Q_OBJECT

public:
	svMainWindow(QWidget *parent = Q_NULLPTR);

private:
	Ui::svMainWindowClass *ui;
};

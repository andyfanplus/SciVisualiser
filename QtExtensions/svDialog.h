#pragma once
#include"QtExtensionsExport.h"

#include <QWidget>
namespace Ui { class svDialog; };

class QTEXTENSIONS_EXPORT svDialog : public QWidget
{
	Q_OBJECT

public:
	svDialog(QWidget *parent = Q_NULLPTR);
	~svDialog();

private:
	Ui::svDialog *ui;
};

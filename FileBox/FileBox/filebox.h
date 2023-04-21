#ifndef FILEBOX_H
#define FILEBOX_H

#include <QtWidgets/QMainWindow>
#include "ui_filebox.h"

class FileBox : public QMainWindow
{
	Q_OBJECT

public:
	FileBox(QWidget *parent = 0);
	~FileBox();

private:
	Ui::FileBoxClass ui;
};

#endif // FILEBOX_H

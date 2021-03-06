#ifndef __VSC_USER_STATUS_H__
#define __VSC_USER_STATUS_H__

#include <QDialog>
#include "ui_vscuserstatus.h"
#include "utility.hpp"
#include <QTimer>
#include <QPoint>
#include <QMouseEvent>

class VSCUserStatus : public QDialog
{
    Q_OBJECT

public:
    VSCUserStatus(QWidget *parent = 0);
    ~VSCUserStatus(){}
	void mousePressEvent(QMouseEvent *event);
	void mouseMoveEvent(QMouseEvent *event);
	void mouseReleaseEvent(QMouseEvent *event);
public:
	BOOL IsQuit()
	{
		return m_quit;
	}

public slots: 
	void QuitClicked();
	void CancelClicked();

public:
	Ui::VSCUserStatus ui;
private:
	QPoint m_DragPosition;
	bool m_Drag;

private:
	BOOL m_quit;
	
};

#endif // __VSC_USER_STATUS_H__

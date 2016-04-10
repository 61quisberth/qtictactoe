#ifndef POPUPWINDOW_H
#define POPUPWINDOW_H

#include <QWidget>

class PopupWindow : public QWidget
{
  Q_OBJECT

public:
  // TODO: can we use nullptr instead
  PopupWindow(QWidget *parent = 0);
  void setWindowFlags(Qt::WindowFlags flags);

private:
  QTextEdit *textEdit;
  QPushButton *closeButton;

};

#endif

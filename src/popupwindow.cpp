#include <QtWidgets>
#include "popupwindow.h"


PopupWindow::PopupWindow(QWidget *parent = 0) : QWidget(parent)
{
  textEdit = new QTextEdit;
  textEdit->setReadOnly(true); 
  textEdit->setLineWrapMode(QTestEdit::NoWrap);

  closeButton = new QPushButton(tr("&Close"));
  connect(closeButton, SIGNAL(clicked()), this, SLOT(close()));
 
  QVBoxLayout *layout = new QVBoxLayout;
  layout->addWidget(textEdit);
  layout->addWidget(closeButton);
  setLayout(layout);
 
  setWindowTitle(tr("Preview"));
}

void PopupWindow::setWindowFlags(Qt::WindowFlags flags)
{
  QWidget::setWindowFlags(flags);

  QString text;

  Qt::WindowFlags type = (flags & Qt::WindowType_Mask);
  if (type == Qt::Popup) {
      text = "Qt::Popup";
  }

  textEdit->setPlainText(text);

}

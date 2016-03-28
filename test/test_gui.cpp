// Test gui board
#include <QtWidgets>
#include <QtTest/QtTest>
#include "mainwindow.h"

class TestGui: public QObject
{
  Q_OBJECT
private slots:
  void changeTextOnClick();
};

// TODO: test all buttons, not just one
void TestGui::changeTextOnClick()
{
  MainWindow mw;
  QCOMPARE(mw.on_pushButton_clicked(), true);
}



QTEST_MAIN(TestGui)
#include "test_gui.moc"

// Copyright 2011 Panagiotis Koutsourakis

// This file is part of QtTimer. QtTimer is free software: see file
// License for more information.

#ifndef QTTIMER_SRC_QTTIMER_H_
#define QTTIMER_SRC_QTTIMER_H_

#include <QMainWindow>

class QFrame;
class QPushButton;

namespace qt_timer {

class QtTimer: public QMainWindow {
  Q_OBJECT;
 public:
  QtTimer();

 protected:
  void closeEvent(QCloseEvent *event);

 private slots:
 private:
  void SetAppearance();
  QFrame *main_frame_;
  QPushButton *start_;
  QPushButton *pause_;
  QPushButton *stop_;
};

} // namespace qt_timer
#endif // QTTIMER_SRC_QTTIMER_H_

// Copyright 2011 Panagiotis Koutsourakis

// This file is part of QtTimer. QtTimer is free software: see file
// License for more information.

#include <QApplication>
#include "qt-timer.h"

using qt_timer::QtTimer;

int main(int argc, char *argv[]) {
  QApplication app(argc, argv);

  QtTimer *timer_app = new QtTimer();
  timer_app->show();
  return app.exec();
}

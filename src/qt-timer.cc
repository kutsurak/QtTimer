// Copyright 2011 Panagiotis Koutsourakis

// This file is part of QtTimer. QtTimer is free software: see file
// License for more information.
#include <QtGui>

#include "qt-timer.h"

namespace qt_timer {

QtTimer::QtTimer()
    : main_frame_(new QFrame()),
      start_(new QPushButton(tr("Start"), this)),
      pause_(new QPushButton(tr("Pause"), this)),
      stop_(new QPushButton(tr("Stop"), this)) {
  SetAppearance();
}

void QtTimer::SetAppearance() {
  QHBoxLayout *main_layout = new QHBoxLayout();
  main_layout->addWidget(start_);
  main_layout->addWidget(pause_);
  main_layout->addWidget(stop_);
  main_frame_->setLayout(main_layout);

  setCentralWidget(main_frame_);
  setWindowTitle(tr("QtTimer"));
}

void QtTimer::closeEvent(QCloseEvent *event) {
  event->accept();
}

}  // namespace qt_timer

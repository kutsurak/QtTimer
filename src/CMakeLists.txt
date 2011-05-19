# Copyright 2011 Panagiotis Koutsourakis. 

# This file is part of QtTimer. QtTimer is free software: see file
# License for more information.

include(${QT_USE_FILE})

set(QtTimer_sources
  qt-timer.h
  qt-timer.cc
  main.cc)

set(QtTimer_moc_headers
  qt-timer.h)

qt4_wrap_cpp(QtTimer_moc_sources
  ${QtTimer_moc_headers})

add_executable(qt_timer
  ${QtTimer_sources}
  ${QtTimer_moc_sources})

target_link_libraries(qt_timer
  ${QT_LIBRARIES})


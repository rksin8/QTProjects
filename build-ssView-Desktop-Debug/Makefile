#############################################################################
# Makefile for building: ssView
# Generated by qmake (2.01a) (Qt 4.8.7) on: Thu Dec 7 09:06:46 2017
# Project:  ../simple_seismic_View/ssView.pro
# Template: app
# Command: /usr/lib/x86_64-linux-gnu/qt4/bin/qmake -spec /usr/share/qt4/mkspecs/linux-g++-64 CONFIG+=debug -o Makefile ../simple_seismic_View/ssView.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_GUI_LIB -DQT_NETWORK_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -m64 -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -m64 -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++-64 -I../simple_seismic_View -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtNetwork -I/usr/include/qt4/QtGui -I/usr/include/qt4 -I. -I. -I../simple_seismic_View -I.
LINK          = g++
LFLAGS        = -m64
LIBS          = $(SUBLIBS)  -L/usr/lib/x86_64-linux-gnu -lQtGui -lQtNetwork -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/lib/x86_64-linux-gnu/qt4/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = ../simple_seismic_View/mainwindow.cpp \
		../simple_seismic_View/trace_ex.cpp \
		../simple_seismic_View/trace_group_ex.cpp \
		../simple_seismic_View/qcustomplot.cpp \
		../simple_seismic_View/main.cpp \
		../simple_seismic_View/fft_complx.cpp \
		../simple_seismic_View/geom_ex.cpp \
		../simple_seismic_View/hilbert.cpp \
		../simple_seismic_View/wignerville.cpp moc_mainwindow.cpp \
		moc_trace_ex.cpp \
		moc_trace_group_ex.cpp \
		moc_qcustomplot.cpp \
		moc_geom_ex.cpp
OBJECTS       = mainwindow.o \
		trace_ex.o \
		trace_group_ex.o \
		qcustomplot.o \
		main.o \
		fft_complx.o \
		geom_ex.o \
		hilbert.o \
		wignerville.o \
		moc_mainwindow.o \
		moc_trace_ex.o \
		moc_trace_group_ex.o \
		moc_qcustomplot.o \
		moc_geom_ex.o
DIST          = ../simple_seismic_View/geom_map.qml \
		/usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/debug.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/shared.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		../simple_seismic_View/ssView.pro
QMAKE_TARGET  = ssView
DESTDIR       = 
TARGET        = ssView

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET): ui_mainwindow.h ui_trace_ex.h ui_trace_group_ex.h ui_geom_ex.h $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)
	{ test -n "$(DESTDIR)" && DESTDIR="$(DESTDIR)" || DESTDIR=.; } && test $$(gdb --version | sed -e 's,[^0-9][^0-9]*\([0-9]\)\.\([0-9]\).*,\1\2,;q') -gt 72 && gdb --nx --batch --quiet -ex 'set confirm off' -ex "save gdb-index $$DESTDIR" -ex quit '$(TARGET)' && test -f $(TARGET).gdb-index && objcopy --add-section '.gdb_index=$(TARGET).gdb-index' --set-section-flags '.gdb_index=readonly' '$(TARGET)' '$(TARGET)' && rm -f $(TARGET).gdb-index || true

Makefile: ../simple_seismic_View/ssView.pro  /usr/share/qt4/mkspecs/linux-g++-64/qmake.conf /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/debug.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/shared.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		/usr/lib/x86_64-linux-gnu/libQtGui.prl \
		/usr/lib/x86_64-linux-gnu/libQtNetwork.prl \
		/usr/lib/x86_64-linux-gnu/libQtCore.prl
	$(QMAKE) -spec /usr/share/qt4/mkspecs/linux-g++-64 CONFIG+=debug -o Makefile ../simple_seismic_View/ssView.pro
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/common/gcc-base.conf:
/usr/share/qt4/mkspecs/common/gcc-base-unix.conf:
/usr/share/qt4/mkspecs/common/g++-base.conf:
/usr/share/qt4/mkspecs/common/g++-unix.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
/usr/share/qt4/mkspecs/features/debug.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/shared.prf:
/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/share/qt4/mkspecs/features/include_source_dir.prf:
/usr/lib/x86_64-linux-gnu/libQtGui.prl:
/usr/lib/x86_64-linux-gnu/libQtNetwork.prl:
/usr/lib/x86_64-linux-gnu/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -spec /usr/share/qt4/mkspecs/linux-g++-64 CONFIG+=debug -o Makefile ../simple_seismic_View/ssView.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/ssView1.0.0 || $(MKDIR) .tmp/ssView1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/ssView1.0.0/ && $(COPY_FILE) --parents ../simple_seismic_View/mainwindow.h ../simple_seismic_View/trace_ex.h ../simple_seismic_View/trace_group_ex.h ../simple_seismic_View/qcustomplot.h ../simple_seismic_View/fft_complx.h ../simple_seismic_View/geom_ex.h ../simple_seismic_View/hilbert.h ../simple_seismic_View/wignerville.h .tmp/ssView1.0.0/ && $(COPY_FILE) --parents ../simple_seismic_View/mainwindow.cpp ../simple_seismic_View/trace_ex.cpp ../simple_seismic_View/trace_group_ex.cpp ../simple_seismic_View/qcustomplot.cpp ../simple_seismic_View/main.cpp ../simple_seismic_View/fft_complx.cpp ../simple_seismic_View/geom_ex.cpp ../simple_seismic_View/hilbert.cpp ../simple_seismic_View/wignerville.cpp .tmp/ssView1.0.0/ && $(COPY_FILE) --parents ../simple_seismic_View/mainwindow.ui ../simple_seismic_View/trace_ex.ui ../simple_seismic_View/trace_group_ex.ui ../simple_seismic_View/geom_ex.ui .tmp/ssView1.0.0/ && (cd `dirname .tmp/ssView1.0.0` && $(TAR) ssView1.0.0.tar ssView1.0.0 && $(COMPRESS) ssView1.0.0.tar) && $(MOVE) `dirname .tmp/ssView1.0.0`/ssView1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/ssView1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_mainwindow.cpp moc_trace_ex.cpp moc_trace_group_ex.cpp moc_qcustomplot.cpp moc_geom_ex.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_mainwindow.cpp moc_trace_ex.cpp moc_trace_group_ex.cpp moc_qcustomplot.cpp moc_geom_ex.cpp
moc_mainwindow.cpp: ../simple_seismic_View/trace_ex.h \
		../simple_seismic_View/qcustomplot.h \
		../simple_seismic_View/geom_ex.h \
		../simple_seismic_View/trace_group_ex.h \
		../simple_seismic_View/mainwindow.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) ../simple_seismic_View/mainwindow.h -o moc_mainwindow.cpp

moc_trace_ex.cpp: ../simple_seismic_View/qcustomplot.h \
		../simple_seismic_View/trace_ex.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) ../simple_seismic_View/trace_ex.h -o moc_trace_ex.cpp

moc_trace_group_ex.cpp: ../simple_seismic_View/qcustomplot.h \
		../simple_seismic_View/trace_group_ex.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) ../simple_seismic_View/trace_group_ex.h -o moc_trace_group_ex.cpp

moc_qcustomplot.cpp: ../simple_seismic_View/qcustomplot.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) ../simple_seismic_View/qcustomplot.h -o moc_qcustomplot.cpp

moc_geom_ex.cpp: ../simple_seismic_View/qcustomplot.h \
		../simple_seismic_View/geom_ex.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) ../simple_seismic_View/geom_ex.h -o moc_geom_ex.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_mainwindow.h ui_trace_ex.h ui_trace_group_ex.h ui_geom_ex.h
compiler_uic_clean:
	-$(DEL_FILE) ui_mainwindow.h ui_trace_ex.h ui_trace_group_ex.h ui_geom_ex.h
ui_mainwindow.h: ../simple_seismic_View/mainwindow.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic ../simple_seismic_View/mainwindow.ui -o ui_mainwindow.h

ui_trace_ex.h: ../simple_seismic_View/trace_ex.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic ../simple_seismic_View/trace_ex.ui -o ui_trace_ex.h

ui_trace_group_ex.h: ../simple_seismic_View/trace_group_ex.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic ../simple_seismic_View/trace_group_ex.ui -o ui_trace_group_ex.h

ui_geom_ex.h: ../simple_seismic_View/geom_ex.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic ../simple_seismic_View/geom_ex.ui -o ui_geom_ex.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_uic_clean 

####### Compile

mainwindow.o: ../simple_seismic_View/mainwindow.cpp ../simple_seismic_View/mainwindow.h \
		../simple_seismic_View/trace_ex.h \
		../simple_seismic_View/qcustomplot.h \
		../simple_seismic_View/geom_ex.h \
		../simple_seismic_View/trace_group_ex.h \
		ui_mainwindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mainwindow.o ../simple_seismic_View/mainwindow.cpp

trace_ex.o: ../simple_seismic_View/trace_ex.cpp ../simple_seismic_View/trace_ex.h \
		../simple_seismic_View/qcustomplot.h \
		ui_trace_ex.h \
		../simple_seismic_View/fft_complx.h \
		../simple_seismic_View/hilbert.h \
		../simple_seismic_View/wignerville.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o trace_ex.o ../simple_seismic_View/trace_ex.cpp

trace_group_ex.o: ../simple_seismic_View/trace_group_ex.cpp ../simple_seismic_View/trace_group_ex.h \
		../simple_seismic_View/qcustomplot.h \
		ui_trace_group_ex.h \
		../simple_seismic_View/fft_complx.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o trace_group_ex.o ../simple_seismic_View/trace_group_ex.cpp

qcustomplot.o: ../simple_seismic_View/qcustomplot.cpp ../simple_seismic_View/qcustomplot.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qcustomplot.o ../simple_seismic_View/qcustomplot.cpp

main.o: ../simple_seismic_View/main.cpp ../simple_seismic_View/mainwindow.h \
		../simple_seismic_View/trace_ex.h \
		../simple_seismic_View/qcustomplot.h \
		../simple_seismic_View/geom_ex.h \
		../simple_seismic_View/trace_group_ex.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o ../simple_seismic_View/main.cpp

fft_complx.o: ../simple_seismic_View/fft_complx.cpp ../simple_seismic_View/fft_complx.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o fft_complx.o ../simple_seismic_View/fft_complx.cpp

geom_ex.o: ../simple_seismic_View/geom_ex.cpp ../simple_seismic_View/geom_ex.h \
		../simple_seismic_View/qcustomplot.h \
		ui_geom_ex.h \
		../simple_seismic_View/mainwindow.h \
		../simple_seismic_View/trace_ex.h \
		../simple_seismic_View/trace_group_ex.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o geom_ex.o ../simple_seismic_View/geom_ex.cpp

hilbert.o: ../simple_seismic_View/hilbert.cpp ../simple_seismic_View/hilbert.h \
		../simple_seismic_View/fft_complx.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o hilbert.o ../simple_seismic_View/hilbert.cpp

wignerville.o: ../simple_seismic_View/wignerville.cpp ../simple_seismic_View/wignerville.h \
		../simple_seismic_View/fft_complx.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o wignerville.o ../simple_seismic_View/wignerville.cpp

moc_mainwindow.o: moc_mainwindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_mainwindow.o moc_mainwindow.cpp

moc_trace_ex.o: moc_trace_ex.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_trace_ex.o moc_trace_ex.cpp

moc_trace_group_ex.o: moc_trace_group_ex.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_trace_group_ex.o moc_trace_group_ex.cpp

moc_qcustomplot.o: moc_qcustomplot.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_qcustomplot.o moc_qcustomplot.cpp

moc_geom_ex.o: moc_geom_ex.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_geom_ex.o moc_geom_ex.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:


#############################################################################
# Makefile for building: game
# Generated by qmake (2.01a) (Qt 4.6.2) on: Sun Apr 22 14:29:30 2012
# Project:  game.pro
# Template: app
# Command: /usr/bin/qmake -unix -o Makefile game.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_NO_DEBUG -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++ -I. -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4 -I. -I.
LINK          = g++
LFLAGS        = -Wl,-O1
LIBS          = $(SUBLIBS)  -L/usr/lib -lQtGui -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/bin/qmake
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

SOURCES       = backcover.cpp \
		blade.cpp \
		bleh.cpp \
		block.cpp \
		bolt.cpp \
		bomb.cpp \
		cloud.cpp \
		cover.cpp \
		door.cpp \
		eye.cpp \
		game.cpp \
		lazer.cpp \
		main.cpp \
		man.cpp \
		ninja.cpp \
		piano.cpp \
		portal.cpp \
		seven.cpp \
		side.cpp \
		sidewalk.cpp \
		siete.cpp \
		six.cpp \
		star.cpp \
		wall.cpp \
		yellow.cpp moc_game.cpp
OBJECTS       = backcover.o \
		blade.o \
		bleh.o \
		block.o \
		bolt.o \
		bomb.o \
		cloud.o \
		cover.o \
		door.o \
		eye.o \
		game.o \
		lazer.o \
		main.o \
		man.o \
		ninja.o \
		piano.o \
		portal.o \
		seven.o \
		side.o \
		sidewalk.o \
		siete.o \
		six.o \
		star.o \
		wall.o \
		yellow.o \
		moc_game.o
DIST          = /usr/share/qt4/mkspecs/common/g++.conf \
		/usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		game.pro
QMAKE_TARGET  = game
DESTDIR       = 
TARGET        = game

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

$(TARGET):  $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: game.pro  /usr/share/qt4/mkspecs/linux-g++/qmake.conf /usr/share/qt4/mkspecs/common/g++.conf \
		/usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		/usr/lib/libQtGui.prl \
		/usr/lib/libQtCore.prl
	$(QMAKE) -unix -o Makefile game.pro
/usr/share/qt4/mkspecs/common/g++.conf:
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
/usr/share/qt4/mkspecs/features/release.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/share/qt4/mkspecs/features/include_source_dir.prf:
/usr/lib/libQtGui.prl:
/usr/lib/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -unix -o Makefile game.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/game1.0.0 || $(MKDIR) .tmp/game1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/game1.0.0/ && $(COPY_FILE) --parents backcover.h blade.h bleh.h block.h bolt.h bomb.h cloud.h cover.h door.h eye.h game.h lazer.h man.h ninja.h piano.h portal.h seven.h side.h sidewalk.h siete.h six.h star.h wall.h yellow.h .tmp/game1.0.0/ && $(COPY_FILE) --parents backcover.cpp blade.cpp bleh.cpp block.cpp bolt.cpp bomb.cpp cloud.cpp cover.cpp door.cpp eye.cpp game.cpp lazer.cpp main.cpp man.cpp ninja.cpp piano.cpp portal.cpp seven.cpp side.cpp sidewalk.cpp siete.cpp six.cpp star.cpp wall.cpp yellow.cpp .tmp/game1.0.0/ && (cd `dirname .tmp/game1.0.0` && $(TAR) game1.0.0.tar game1.0.0 && $(COMPRESS) game1.0.0.tar) && $(MOVE) `dirname .tmp/game1.0.0`/game1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/game1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_game.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_game.cpp
moc_game.cpp: cover.h \
		six.h \
		bleh.h \
		star.h \
		lazer.h \
		block.h \
		seven.h \
		bomb.h \
		bolt.h \
		wall.h \
		blade.h \
		door.h \
		backcover.h \
		portal.h \
		yellow.h \
		ninja.h \
		eye.h \
		cloud.h \
		sidewalk.h \
		side.h \
		piano.h \
		man.h \
		siete.h \
		game.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) game.h -o moc_game.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean 

####### Compile

backcover.o: backcover.cpp backcover.h \
		cover.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o backcover.o backcover.cpp

blade.o: blade.cpp blade.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o blade.o blade.cpp

bleh.o: bleh.cpp bleh.h \
		star.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o bleh.o bleh.cpp

block.o: block.cpp block.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o block.o block.cpp

bolt.o: bolt.cpp bolt.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o bolt.o bolt.cpp

bomb.o: bomb.cpp bomb.h \
		lazer.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o bomb.o bomb.cpp

cloud.o: cloud.cpp cloud.h \
		block.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o cloud.o cloud.cpp

cover.o: cover.cpp cover.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o cover.o cover.cpp

door.o: door.cpp door.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o door.o door.cpp

eye.o: eye.cpp eye.h \
		ninja.h \
		block.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o eye.o eye.cpp

game.o: game.cpp game.h \
		cover.h \
		six.h \
		bleh.h \
		star.h \
		lazer.h \
		block.h \
		seven.h \
		bomb.h \
		bolt.h \
		wall.h \
		blade.h \
		door.h \
		backcover.h \
		portal.h \
		yellow.h \
		ninja.h \
		eye.h \
		cloud.h \
		sidewalk.h \
		side.h \
		piano.h \
		man.h \
		siete.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o game.o game.cpp

lazer.o: lazer.cpp lazer.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o lazer.o lazer.cpp

main.o: main.cpp game.h \
		cover.h \
		six.h \
		bleh.h \
		star.h \
		lazer.h \
		block.h \
		seven.h \
		bomb.h \
		bolt.h \
		wall.h \
		blade.h \
		door.h \
		backcover.h \
		portal.h \
		yellow.h \
		ninja.h \
		eye.h \
		cloud.h \
		sidewalk.h \
		side.h \
		piano.h \
		man.h \
		siete.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

man.o: man.cpp man.h \
		ninja.h \
		block.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o man.o man.cpp

ninja.o: ninja.cpp ninja.h \
		block.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o ninja.o ninja.cpp

piano.o: piano.cpp piano.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o piano.o piano.cpp

portal.o: portal.cpp portal.h \
		door.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o portal.o portal.cpp

seven.o: seven.cpp seven.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o seven.o seven.cpp

side.o: side.cpp side.h \
		wall.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o side.o side.cpp

sidewalk.o: sidewalk.cpp sidewalk.h \
		lazer.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o sidewalk.o sidewalk.cpp

siete.o: siete.cpp siete.h \
		cover.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o siete.o siete.cpp

six.o: six.cpp six.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o six.o six.cpp

star.o: star.cpp star.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o star.o star.cpp

wall.o: wall.cpp wall.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o wall.o wall.cpp

yellow.o: yellow.cpp yellow.h \
		cover.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o yellow.o yellow.cpp

moc_game.o: moc_game.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_game.o moc_game.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

QT      +=  network widgets
SOURCES =   main.cpp searchbox.cpp googlesuggest.cpp \
    mainwindow.cpp
HEADERS  =  searchbox.h googlesuggest.h \
    mainwindow.h

# install
target.path = $$[QT_INSTALL_EXAMPLES]/network/googlesuggest
INSTALLS += target

QT      +=  network widgets
SOURCES =   main.cpp searchbox.cpp googlesuggest.cpp \
    mainwindow.cpp \
    searchhistory.cpp
HEADERS  =  searchbox.h googlesuggest.h \
    mainwindow.h \
    searchhistory.h

# install
target.path = $$[QT_INSTALL_EXAMPLES]/network/googlesuggest
INSTALLS += target

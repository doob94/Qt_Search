QT      +=  network widgets
SOURCES =   main.cpp searchbox.cpp googlesuggest.cpp \
    MainWindow.cpp \
    SearchList.cpp
HEADERS  =  searchbox.h googlesuggest.h \
    MainWindow.h \
    SearchList.h

# install
target.path = $$[QT_INSTALL_EXAMPLES]/network/googlesuggest
INSTALLS += target

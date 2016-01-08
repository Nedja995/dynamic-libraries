FILE (GLOB firstLib_SRCS *.cpp *.cxx *.cc *.C *.c *.h *.hpp)

ADD_LIBRARY(FirstLibrarySH SHARED ${firstLib_SRCS})
ADD_LIBRARY(FirstLibrary ${firstLib_SRCS})
#TARGET_LINK_LIBRARIES(${project_BIN} ${project_LIBS})



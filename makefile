HEADERS = -Ic:/headers

all: a.exe

a.exe: src/*.cpp fmt/*.cc
	g++ *.cpp *.cc %(HEADERS)
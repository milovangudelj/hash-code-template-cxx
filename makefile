HEADERS = -Ic:/headers

all: a.exe

a.exe: src/*.cpp fmt/*.cc
	g++ src/*.cpp fmt/*.cc $(HEADERS)
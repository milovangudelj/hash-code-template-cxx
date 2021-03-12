HEADERS = -Ic:/headers
LIBS = fmt/*.cc
SRC = src/*.cpp

# Detect operating system

EXECUTABLE 				:=
ifeq ($(OS), Windows_NT)
	EXECUTABLE = a.exe
else
	EXECUTABLE = a.out
endif

# Build

all: $(EXECUTABLE)

$(EXECUTABLE): $(SRC) $(LIBS)
	g++ $(SRC) $(LIBS) $(HEADERS)

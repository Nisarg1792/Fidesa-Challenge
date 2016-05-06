CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		FindMatchingPair.o

LIBS =

TARGET =	FindMatchingPair.exe

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)

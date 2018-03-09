SOURCE=WebMain.cpp
TARGET=zctrl.min.js
OBJECT=zctrl
ZCC=clang++
CFLAGS=-target cheerp 
NODE=node

zctrl:
	$(ZCC) -D__CHEERP_PLATFROM_H__=1 $(CFLAGS) $(SOURCE) -o $(TARGET)
	
test: zctrl
	$(NODE) $(TARGET)

all:$(OBJECT)
	echo "done"

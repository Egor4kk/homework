TARGET = ./main.out
HDRS_DIR = project/include

# XXX: Don't forget backslash at the end of any line except the last one
SRCS = \
       project/src/main.c \
       project/src/utils.c \
       project/src/utils1.c
       

.PHONY: all build rebuild check test clean

all: clean check test

$(TARGET): $(SRCS)
	$(CC) -Wpedantic -Wall -Wextra -Werror -I $(HDRS_DIR) -o $(TARGET) $(CFLAGS) $(SRCS)

build: $(TARGET)

rebuild: clean build

check:
    chmod 700 run_linters.sh
    ./run_linters.sh

test: $(TARGET)
    chmod 700 btests/run.sh
    ./btests/run.sh $(TARGET)
    
clean:
	rm -rf $(TARGET)

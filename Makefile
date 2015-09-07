BUILD = cc binarytree.c main.c -o main
OUT = main

all:
	$(BUILD)
build_and_run:
	clear; $(BUILD) && ./$(OUT)
clean:
	rm -f $(OUT)

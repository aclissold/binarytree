OUT = main
BUILD = cc binarytree.c main.c -o $(OUT)

all:
	$(BUILD)
build_and_run:
	$(BUILD) && ./$(OUT)
clean:
	rm -f $(OUT)

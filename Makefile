yolo: yolo.c
	$(CC) yolo.c -o yolo

.PHONY: clean install
clean:
	rm -f yolo
install: yolo
	cp yolo /usr/bin/yolo
	chmod 4755 /usr/bin/yolo

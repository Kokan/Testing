.PHONY: all clean libsyslogng


all: main

libsyslogng:
	./build-syslog-ng.sh
	

main: syslog-node.so main.go syslog-node1.h
	go build -v -x main.go

syslog-node.so: syslog-node.c syslog-node1.h libsyslogng
	gcc -o syslog-node.so -c `pkg-config --libs --cflags glib-2.0` -Isyslog-ng/install/include/syslog-ng -Isyslog-ng/ syslog-node.c

clean:
	rm main
	rm syslog-node.so

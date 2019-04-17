package main

//#cgo CFLAGS: -I/tmp/install/syslog-ng-3.6.2/
//#cgo CFLAGS: -I/usr/local/include/syslog-ng/
//#cgo CFLAGS: -I/usr/local/include/syslog-ng/compat/
//#cgo CFLAGS: -I/tmp/install/syslog-ng-3.6.2/lib/compat/
//#cgo CFLAGS: -I/tmp/install/syslog-ng-3.6.2/lib/ivykis/
//#cgo CFLAGS: -I/usr/local/include/syslog-ng/ivykis/
//#cgo CFLAGS: -I/usr/local/include/eventlog/
//#cgo CFLAGS: -I/usr/include/glib-2.0/
//#cgo CFLAGS: -I/tmp/install/syslog-ng-3.6.2/modules/
// #include "syslog-node1.h"
import "C"
import (
	"fmt"
	_ "fmt"
	"unsafe"
)

type Syslog struct {
	patterndb string
	module string
	mappings  map[string]string
}

var field_mappings map[string]string = map[string]string{
	" A": "a",
	"B": "b",
	"C": "c",
	"D": "d"}

func process(p string, m string){
	p1 := p
	m1 := m


	app := C.CString(p1)
	defer C.free(unsafe.Pointer(app))
	msg := C.CString(m1)
	defer C.free(unsafe.Pointer(msg))
	C.match(msg, C.int(len(msg)), app, C.int(len(app)))

}


func main(){
	fmt.Println("START")
	process("bro_http", "abc")

}

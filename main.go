package main
//#cgo CFLAGS: -g -Wall
//#include "syslog-node1.h"
import "C"
import (
	"fmt"
	_ "fmt"
	"unsafe"
)

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
	process("bro", "abc")

}

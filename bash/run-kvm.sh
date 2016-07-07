#!/bin/bash

#El parametro sera el nombre de nuestra imagen

start_vm(){

echo " Launching VM with architecture x86_64 the parameter you sent is the image"
qemu-system-x86_64 $1 -m 512

}

start_vm

@echo off
qemu-system-arm -M vexpress-a9 -kernel ../../../build/arm/qemu/qemu-vexpress-a9/qemu-vexpress-a9.elf -serial stdio -m 512
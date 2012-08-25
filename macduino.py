import serial
import subprocess
import time
import psutil

def main():
	print readCPU()
	print readMem()

def readCPU():
	return psutil.cpu_percent(interval=1)

def readMem():
	return psutil.used_virtmem()

main()
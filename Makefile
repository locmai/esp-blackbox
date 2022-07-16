.POSIX:

default: build upload

build:
	pio run

upload:
	pio run --target upload

monitor:
	pio device monitor

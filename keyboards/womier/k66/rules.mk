# project specific files
SRC = ../../../drivers/led/sn32/matrix_sn32f24xx.c
SRC += rgb_matrix.c
SRC += config_led.c
SRC += underglow.c

# MCU name
MCU = SN32F268F


# Build Options
#   comment out to disable the options.
#
LTO_ENABLE = yes			# reduces firmware size
MAGIC_ENABLE = yes			# enable magic, can be disabled to reduce size
MOUSEKEY_ENABLE = no    	# Mouse keys
EXTRAKEY_ENABLE = yes   	# Audio control and System control
CONSOLE_ENABLE = no     	# Console for debug
COMMAND_ENABLE = no     	# Commands for debug and configuration
NKRO_ENABLE = yes        	# USB Nkey Rollover
KEYBOARD_SHARED_EP = no		# not needed, no = better BIOS support
CUSTOM_MATRIX = yes			# custom key matrix driver, since COLs are shared
RGB_MATRIX_ENABLE = yes		# use RGB Matrix
RGB_MATRIX_DRIVER = custom  # use LED custom driver, since COLs are shared

USE_EXCEPTIONS_STACKSIZE = 0xC0
USE_PROCESS_STACKSIZE = 0x170

#USE_EXCEPTIONS_STACKSIZE = 0xFF # reduce RAM usage
#USE_PROCESS_STACKSIZE = 0x200
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
MAGIC_ENABLE = no			# magic not needed, personal preference
MOUSEKEY_ENABLE = no    	# Mouse keys
EXTRAKEY_ENABLE = yes   	# Audio control and System control
CONSOLE_ENABLE = no     	# Console for debug
COMMAND_ENABLE = no     	# Commands for debug and configuration
NKRO_ENABLE = yes        	# USB Nkey Rollover
KEYBOARD_SHARED_EP = no	# not needed, no = better BIOS 
CUSTOM_MATRIX = yes			# custom key matrix driver, since COLs are shared
RGB_MATRIX_ENABLE = yes		# use RGB Matrix
RGB_MATRIX_DRIVER = custom  # use LED custom driver, since COLs are shared
WAIT_FOR_USB = no			# 

USE_EXCEPTIONS_STACKSIZE = 0xFF # reduce RAM usage
USE_PROCESS_STACKSIZE = 0x200

#USE_EXCEPTIONS_STACKSIZE = 0xFF # reduce RAM usage
#USE_PROCESS_STACKSIZE = 0x200
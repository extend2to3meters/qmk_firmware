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
EXTRAKEY_ENABLE = no   	# Audio control and System control
CONSOLE_ENABLE = no     	# Console for debug
SWAP_HANDS_ENABLE= no
UNICODE_ENABLE   = no  # Unicode
COMMAND_ENABLE = no     	# Commands for debug and configuration
SPACE_CADET_ENABLE = no
GRAVE_ESC_ENABLE = no 
SERIAL_LINK_ENABLE = no
MUSIC_ENABLE = no
NKRO_ENABLE = no        	# USB Nkey Rollover
KEYBOARD_SHARED_EP = yes	# not needed, no = better BIOS 
CUSTOM_MATRIX = yes			# custom key matrix driver, since COLs are shared
RGB_MATRIX_ENABLE = yes		# use RGB Matrix
RGB_MATRIX_DRIVER = custom  # use LED custom driver, since COLs are shared
OPENRGB_ENABLE = yes
RAW_ENABLE = yes

USE_EXCEPTIONS_STACKSIZE = 0xE0 # reduce RAM usage
USE_PROCESS_STACKSIZE = 0x170

#USE_EXCEPTIONS_STACKSIZE = 0xFF # reduce RAM usage
#USE_PROCESS_STACKSIZE = 0x200
QMK ?= $(HOME)/qmk_akko
REV := 7adfd652014d
KB  := akko/5075b/ansi
KM  := mine

all: link
	$(MAKE) -C $(QMK) $(KB):$(KM)

flash: link
	$(MAKE) -C $(QMK) $(KB):$(KM):flash

link:
	ln -sfn $(CURDIR)/keymap $(QMK)/keyboards/$(KB)/keymaps/$(KM)

setup:
	git clone --filter=blob:none -b rgblight https://github.com/akkogear/qmk_firmware $(QMK)
	git -C $(QMK) checkout $(REV)

.PHONY: all flash link setup

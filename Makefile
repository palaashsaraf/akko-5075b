QMK ?= $(HOME)/qmk_akko
REV := 7adfd652014d
KB  := akko/5075b/ansi
KM  := mine

all: link patch
	$(MAKE) -C $(QMK) $(KB):$(KM)

flash: link patch
	$(MAKE) -C $(QMK) $(KB):$(KM):flash

link:
	ln -sfn $(CURDIR)/keymap $(QMK)/keyboards/$(KB)/keymaps/$(KM)

patch:
	git -C $(QMK) apply -R --check $(CURDIR)/sleep.patch 2>/dev/null || \
	git -C $(QMK) apply $(CURDIR)/sleep.patch

setup:
	git clone --filter=blob:none -b rgblight https://github.com/akkogear/qmk_firmware $(QMK)
	git -C $(QMK) checkout $(REV)

.PHONY: all flash link patch setup

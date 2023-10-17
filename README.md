Chrumm QMK config
=================

This is an experimental QMK configuration for the [Chrumm] keyboard.

- [Setup] the QMK environment (avr and dfu can be ignored)
- Copy the `chrumm` directory to `qmk_firmware/keyboards/`
- Create a [Keymap] with `qmk new-keymap -kb chrumm`
- Edit the [Keycodes] in the keymap to your needs
- [Compile] with `qmk compile -kb chrumm -km KEYMAP`
- [Flash] the uf2 firmware file

[Chrumm]: https://github.com/sevmeyer/chrumm-keyboard
[Setup]: https://docs.qmk.fm/#/newbs_getting_started
[Keymap]: https://docs.qmk.fm/#/newbs_building_firmware?id=create-a-new-keymap
[Keycodes]: https://docs.qmk.fm/#/keycodes
[Compile]: https://docs.qmk.fm/#/newbs_building_firmware?id=build-your-firmware
[Flash]: https://docs.qmk.fm/#/flashing?id=raspberry-pi-rp2040-uf2

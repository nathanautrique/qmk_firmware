# strafer

*The Strafer is a gaming keypad especially designed for competitive gaming. Due to it's special shape, you can press multiple keys with one finger at once, giving you a competitive advantage*

* Keyboard Maintainer: [Nathan Autrique](https://github.com/nathanautrique)
* Hardware Availability: *Still in user-testing phase*

Make example for this keyboard (after setting up your build environment):

    make strafer:default

Flashing example for this keyboard:

    make strafer:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Short the 'reset pads' on the back of the PCB (for example with tweezers)
* **Keycode in layout**: Press the key mapped to `QK_BOOT`. 
For The default `QK_BOOT` mapping, do the following:
1. hold the FN key to go into layer 1 (keep holding during step 2)
2. hold the TAB key to go into layer 2 (keep holding step 1 and step 2 during step 3)
3. press ESC, which transformed to `QK_BOOT` due to the layers.

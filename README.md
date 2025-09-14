# corneGLP Keymap for Boardsource Unicorne

This keymap is inspired by the corneGLP configuration and adapted for the Boardsource Unicorne keyboard. It provides a comprehensive layout with multiple layers and useful features.

## Features

- **4 Layers**: Base, Numbers, Function, and Adjust
- **RGB Lighting**: Full RGB matrix/light support with custom effects
- **OLED Display**: Support for OLED displays with custom graphics
- **Encoder Support**: Rotary encoder functionality
- **Tap Dance**: Advanced key combinations
- **Leader Key**: Custom key sequences
- **Mouse Keys**: Mouse control from keyboard
- **WPM Calculation**: Words per minute tracking
- **Caps Word**: Smart caps lock functionality

## Layer Layout

### Base Layer (Default)
```
┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
│Tab│ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │Bsp│
├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
│Ctl│ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │ ' │
├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
│Sft│ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │Sft│
└───┴───┴───┼───┼───┼───┼───┼───┼───┼───┼───┼───┴───┴───┘
            │GUI│Nav│Spc│   │Ent│Num│Alt│
            └───┴───┴───┘   └───┴───┴───┘
```

### Num_Sym Layer (Right Thumb)
```
┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
│   │   │ 7 │ 8 │ 9 │   │       │ _ │ & │ * │ - │ + │   │
├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
│   │   │ 0 │ 4 │ 5 │ 6 │       │ = │ $ │ % │ ^ │ \ │ ` │
├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
│Gui│Sft│ 1 │ 2 │ 3 │   │       │ - │ ! │ @ │ # │ | │ ~ │
└───┴───┴───┼───┼───┼───┼───┼───┼───┼───┼───┼───┴───┴───┘
            │   │   │   │   │   │   │   │   │
            └───┴───┴───┘   └───┴───┴───┘
```

### Nav Layer (Left Thumb)
```
┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
│Tab│PgD│PgU│Ins│ 4 │ 5 │       │ 6 │ 7 │ 8 │ 9 │ 0 │Bsp│
├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
│Mse│Gui│Alt│Sft│Ctl│   │       │   │   │   │   │   │   │
├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
│   │   │   │   │   │   │       │   │   │   │   │   │   │
└───┴───┴───┼───┼───┼───┼───┼───┼───┼───┼───┼───┴───┴───┘
            │   │   │   │   │   │   │   │   │
            └───┴───┴───┘   └───┴───┴───┘
```

### Fn Layer
```
┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
│F18│F15│F7 │F8 │F9 │F12│       │BT0│Vol│Mut│Vol│BT │Rst│
├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
│F17│F14│F4 │F5 │F6 │F11│       │BT1│Prv│Ply│Nxt│Out│Rst│
├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
│F16│F13│F1 │F2 │F3 │F10│       │BT2│   │   │   │Out│Rst│
└───┴───┴───┼───┼───┼───┼───┼───┼───┼───┼───┼───┴───┴───┘
            │   │   │   │   │   │   │   │   │
            └───┴───┴───┘   └───┴───┴───┘
```

### Gaming1 Layer
```
┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
│Esc│ T │ Q │ W │ E │ R │       │   │   │   │   │   │   │
├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
│Tab│Sft│ A │ S │ D │ F │       │   │   │   │   │   │   │
├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
│Ctl│ Z │ X │ C │ V │   │       │   │   │   │   │   │   │
└───┴───┴───┼───┼───┼───┼───┼───┼───┼───┼───┼───┴───┴───┘
            │   │   │   │   │   │   │   │   │
            └───┴───┴───┘   └───┴───┴───┘
```

### Gaming2 Layer
```
┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
│   │ 6 │ 7 │   │ 8 │ 9 │       │   │   │   │   │   │   │
├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
│   │   │   │   │ 0 │   │       │   │   │   │   │   │   │
├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
│   │ 1 │ 2 │ 3 │ 4 │ 5 │       │   │   │   │   │   │   │
└───┴───┴───┼───┼───┼───┼───┼───┼───┼───┼───┼───┴───┴───┘
            │   │   │   │   │   │   │   │   │
            └───┴───┴───┘   └───┴───┴───┘
```

## Key Features

### Layer Navigation
- **MO(_NAV)**: Hold left thumb to access Nav layer
- **MO(_NUM_SYM)**: Hold right thumb to access Num_Sym layer
- **TG(_GAMING1)**: Toggle Gaming1 layer
- **TG(_GAMING2)**: Toggle Gaming2 layer

### Special Keys
- **QK_BOOT**: Reset keyboard to bootloader
- **EE_CLR**: Clear EEPROM settings
- **KC_MAKE**: Compile and flash firmware (custom keycode)
- **KC_RGB_T**: Toggle RGB lighting (custom keycode)

### Combos
**Basic Navigation:**
- **Q+W**: ESC
- **A+S**: TAB
- **;+'**: ENTER  
- **O+P**: BACKSPACE
- **M+,**: DELETE

**Quotes and Brackets:**
- **K+L**: Single Quote (')
- **J+K**: Double Quote (")
- **U+I**: Left Parenthesis (
- **I+O**: Right Parenthesis )
- **Y+U**: Left Curly Brace {
- **O+P**: Right Curly Brace }
- **T+Y**: Left Square Bracket [
- **P+Bspc**: Right Square Bracket ]

**Symbols:**
- **Z+X**: Grave Accent (`)
- **X+C**: Tilde (~)
- **C+V**: Underscore (_)
- **V+B**: Minus (-)
- **B+N**: Equals (=)
- **N+M**: Plus (+)
- **M+,**: Pipe (|)
- **,+.**: Backslash (\)

## Building and Flashing

1. **Compile the firmware:**
   ```bash
   qmk compile -kb boardsource/unicorne -km corneglp
   ```

2. **Flash the firmware:**
   ```bash
   qmk flash -kb boardsource/unicorne -km corneglp
   ```

3. **Or use the make command:**
   ```bash
   make boardsource/unicorne:corneglp:flash
   ```

## Customization

The keymap is highly customizable through the following files:
- `keymap.c`: Main keymap definition and custom functions
- `config.h`: Feature configuration and settings
- `rules.mk`: Enabled features and drivers
- `keymap.json`: JSON representation of the keymap

## Hardware Support

This keymap is designed to work with the following Unicorne features:
- RGB Matrix/Light (42 LEDs)
- OLED Display (128x64)
- Rotary Encoder
- Split keyboard functionality
- USB-C connectivity

## Credits

Based on the corneGLP configuration by [cyb3rkun](https://github.com/cyb3rkun/corneGLP) and adapted for the Boardsource Unicorne keyboard.
# EMPINATOR

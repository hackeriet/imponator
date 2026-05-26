# Software Documentation
You can program the ATtiny804 however you like. I know it works with C and whatever Microchip supplies. I also suspect Rust has support for it. However, I have tested it with Arduino, and thus that is what I document below.

## Bootloader
```
avrdude -p attiny804 -c serialupdi -P /dev/ttyUSB0 -b 230400 -U fuse6:w:0x06:m -U fuse7:w:0x00:m -U fuse8:w:0x02:m
```

## Arduino
To program an ATtiny804 with Arduino, I used the https://github.com/SpenceKonde/megaTinyCore library. This also allows you to install the Optiboot bootloader, which allows for programing over the USB port.  
Beware, the PA7 is default for Optiboot LED. PA7 on the badge is connected to the MCP2221 UART<->USB bridge, so we have to change the default Optiboot configuration.

The megaTinyCore library also has a NeoPixel example, making it straight-forward to get started with the RGB LEDs on the badge.

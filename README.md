# Hackeriet Imponator / Badge
Below, you see the layout for the test version, ordered from JLCPCB:
![PCB Layout 3D model](images/model_jlcpcb.png)


## TODO
Lessons learned after the test version
- [ ] Remove Silkscreen text from top side. Either delete or move to bottom side.
- [ ] Add useful information to bottom side. Such as link. Or maybe also fun stuff, its free (silkscreen) real estate after all.
- [ ] Add pin 1 indicator to Shitty Add-on header.
- [x] Add 2 step toggle switch to switch between external battery and USB C.
- [ ] Consider adding button(s). And/or encoder.
- [ ] Add numbering to UPDI programming header.
- [ ] Add github link.
- [ ] Add LED for SoC, so we can run blinky.
- [ ] If keeping USB LED, add footprint for resistor in series. Also make it so that the USB LED is off by default and only blinks during transfer.
- Fix MINUS LEDs.
    - [ ] Split LEDs to two different pins, so brightness can be controlled individually.
    - [ ] Minus LEDs should use diffused LEDs,
    - [ ] or add a Diffuser acryllic as minus with sideways LED. Press-fitted in hole in the PCB.
- [ ] Add accelerometer or similar
- [X] Swap ring out for sideways LEDS. WS2812B-4020.
    - Add more LEDs.
- [ ] Double check all components to see if we need an LDO.
- [ ] Remove backplate for batteries. Instead use battery box with possible 3d printed holder.

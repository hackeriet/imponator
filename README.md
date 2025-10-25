# Hackeriet Imponator / Badge
Below, you see the layout for the test version, ordered from JLCPCB:
![PCB Layout 3D model](images/model_jlcpcb.png)


## TODO
Lessons learned after the test version
- [ ] Remove Silkscreen text from top side. Either delete or move to bottom side.
- [ ] Add useful information to bottom side. Such as link. Or maybe also fun stuff, its free (silkscreen) real estate after all.
- [ ] Add pin 1 indicator to Shitty Add-on header.
- [ ] Add 3 step toggle switch to switch between battery,external battery and USB C.
- [ ] Consider adding button(s).
- [ ] Add numbering to UPDI programming header.
- [ ] Add github link.
- [ ] Add LED for SoC, so we can run blinky.
- [ ] If keeping USB LED, add footprint for resistor in series. Also make it so that the USB LED is off by default and only blinks during transfer.
- [ ] Find out why USB C alone does not power this thing.
- [ ] Split LEDs to two different pins, so brightness can be controlled individually.

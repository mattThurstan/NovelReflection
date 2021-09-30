# NovelReflection
(a) Novel Reflection light installation, by Thurstan <br>


### Concept
An installation of automated reflectors. Light is reflected from source to target. The installation can automatically track the sun, act as a heliostat, or be sent target coordinates via MQTT. 
- V1 : reflect light to a single target.
- V2 : reflector sub-arrays.
- V3 : multiple targets.
- V4 : device orientation.
- V5 : multiple reflector paths.
- V6 : tracking (sun, GPS, local lights, etc.).
- V7 : solar charging.
- V8 : automated calibration (setup, alignment, error correction (eg. missed steps)).

Multiple targets examples:
- outside light up several (*normally*) shaded seating areas.
- fill up shaded areas of a room with plants.
- highlight paintings or room features.
- light up several books on shelves. (*dependant upon reflector count*)
-- collections by author
-- series
-- colour palette. ( The home automation system holds a model of the room. The model of the room holds a model of a bookshelf, complete with books. The model books contain the colour information for the spine of the book. The system can check where the items in the room actually are (using Machine Learning, Vision, Physical tag scanning, Light level sensors, etc.). E.g. A red(ish) wash, to complement the lighting, can be obtained by getting the system to reflect light onto all the books with mostly red spines (*dependant upon reflector count*). )

Each controller board can run just one reflector or many. Reflectors may be housed in many ways.
- board and one main reflector.
- just one main reflector (controlled by another device).
- board and several reflectors.
- board and several refelctors that can all orientate as one relector.

Modular hardware. Some parts having internal and external versions. Weather influences the device design. The smaller the unit, the more susceptable to the elements (harder to waterproof, harder to protect from wind).

### Equipment
#### Hardware
- .. board
  * ..

#### Software
- Arduino
- Wire library
- BigNumber library
- BigNumberMath library

### Reference
https://www.appropedia.org/Heliostats <br> 
https://www.britannica.com/science/coelostat <br >
https://www.oxfordreference.com/view/10.1093/oi/authority.20110803095621883 <br> 
https://www.omnicalculator.com/physics/gear-ratio <br> 
https://geargenerator.com/ <br> 
https://affinityenergy.com/moving-solar-tracking-system-every-hour-pointless/ <br> 
https://rechneronline.de/winkel/angle-of-incidence.php <br> 
http://www.smoothware.com/danny/mirrorsmirror.html <br> 
https://forums.adafruit.com/viewtopic.php?t=11835 <br> 
https://www.creativeapplications.net/processing/volume-interactive-cube-of-responsive-mirrors-that-redirects-light-and-sound/ <br> 
https://forum.arduino.cc/t/arduino-to-control-a-mirror-and-light-output-based-on-an-image/60569/20 <br> 
https://www.youtube.com/watch?v=j_yqBdbuKpg <br> 
https://www.instructables.com/HeliosCap-Hard-Drive-Sun-Tracker-Heliostat-for-Fix/ <br> 
https://www.timken.com/timken-world/worm-gears-power-solar-plant-mojave/ <br> 
http://www.astrofriend.eu/astronomy/astronomy-calculations/mount-gearbox-ratio/mount-gearbox-ratio.html <br> 
https://www.plasticstoday.com/injection-molding/injection-molding-design-fundamentals-snap-fits-plastic-parts <br> 
https://www.fictiv.com/articles/too-tight-or-perfect-fit-when-to-use-press-fits-in-your-assemblies <br> 


### Licence
- Written by MTS Standish (Thurstan|mattKsp) 2021
- Released under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 (see LICENCE file)

This software is provided on an "AS-IS-BASIS"

Originally based on project by Gabriel Miller.
- https://github.com/FrodgE/sun-harvester


# ORIGINALY FORKED FROM: The Open Sun Harvesting Project

The goal of [the Open Sun Harvesting Project](https://www.cerebralmeltdown.com/open-sun-harvesting-project) is to make advanced DIY sun tracking and heliostat projects more accessible to the general public. Overall, it has been a great success. The programs, electronics, and designs found on this page have successfully been used in both hobbyist and commercial installations located around the world.

This site is authored by me, Gabriel Miller (In case you are wondering who the ” I ” is). I started this particular project in 2008 both because I wanted to learn computer programming and also because I have always had an interest in solar energy. It has grown wildly from there. Suffice it to say that I now know how to program computers.

Note that there is quite a bit of information scattered around this site. The process of building either a sun tracker or a heliostat is a rather extensive one after all. If your goal is to build one of your own, make sure you read through as much as possible. Don’t forget to also visit [the forums](https://www.cerebralmeltdown.com/forum) and [the blog](https://www.cerebralmeltdown.com/) for most up to date information.

While reading through the topics on this page, you will no doubt notice that the information is largely biased towards heliostats. This is because my own personal interest is in heliostats, not sun trackers. Of course, heliostats and sun trackers are similar enough in their design that by developing a heliostat control system I also had a sun tracking system too. So if your own interest is to build a sun tracker, you should find that much of this information is still quite relevant.

## Arduino Sun Tracking / Heliostat Program

The Arduino Sun Tracking / Heliostat Program is a program for the Arduino that is able to control multiple types of sun tracking machines and heliostats. It is able to control not just one machine but several, each with its own set of design parameters. It has a myriad of other features as well such as manual control, stepper motor acceleration, and wind protection mode just to start.

To download and learn more about this program, please visit the following links.

[Arduino Sun Tracking / Heliostat Program Download Page](https://www.cerebralmeltdown.com/arduino-sun-tracking-heliostat-program-download-page/)

[Arduino Sun Tracking / Heliostat Program Set Up](https://www.cerebralmeltdown.com/arduino-sun-tracking-heliostat-program-documentation/)

[Using the Arduino Sun Tracking / Heliostat Program](https://www.cerebralmeltdown.com/using-the-arduino-sun-tracking-heliostat-program/)

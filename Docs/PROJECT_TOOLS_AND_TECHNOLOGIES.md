# Tools

One of the future goals is to develop auxiliary tools for the ecosystem.

WADCheck

A planned tool for analyzing WADs:

```
WADCheck mymap.wad

WAD INFORMATION
----------------
Type: PWAD
Maps: 5
Lumps: 421

Compatibility
-------------
Vanilla       ✓
Boom          ✓
MBF           ✓
MBF21         ✓
ID24          ✗

Multiplayer
------------
Co-op starts     ✓
DM starts        ✓
Player 4 start   ✗

Result
------
MBF21 compatible
```

The tool may eventually check for common compatibility and multiplayer issues.



# Technologies

The project is currently being developed using:

* C
* CMake
* CLion
* SDL3
* Git

External libraries and technologies will be added as needed by the engine.
The platform layer will use a cross-platform library to handle windowing, input, controllers, and other operating system features.
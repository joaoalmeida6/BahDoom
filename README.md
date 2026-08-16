<p align="center">
  <img src="resources/bahdoom-banner.png" alt="BahDoom">
</p>

<h1 align="center">BahDoom Engine</h1>

<p align="center">
  An engine inspired by Doom, developed from scratch in C, with a focus on learning, engine architecture, compatibility with the Doom ecosystem, and multiplayer.
The project was born from the idea of understanding how a game engine works by building each layer gradually, from the game loop and memory management to WAD loading, rendering, and networking.
</p>

<p align="center">
 «Status: 🚧 Early development».
</p>

# Central Objective

The goal of this project is to develop a modern Doom engine that is modular and extensible while maintaining compatibility with specification standards already established by the community.

The main focus will be:

* Local multiplayer with split-screen
* Functional online multiplayer
* Compatibility with specifications such as MBF21 and ID24
* Modular architecture
* Tools for WAD analysis and validation
* Clear and detailed documentation
* Implementation in C to deepen low-level programming knowledge

The idea is not simply to create another source port, but to build an engine while understanding each component that makes it work.

# Multiplayer First-Class

Multiplayer will not be treated as a feature added to the engine at a later stage.
The architecture will be planned from the beginning to support:

```mermaid
       flowchart BT
    SIM["GAME SIMULATION"]

    LOCAL["LOCAL INPUT"]
    NETWORK["NETWORK INPUT"]

    KEYBOARD["Keyboard"]
    CONTROLLER["Controller"]

    CLIENT["Client"]
    SERVER["Server"]

    KEYBOARD --> LOCAL
    CONTROLLER --> LOCAL

    CLIENT --> NETWORK
    SERVER --> NETWORK

    LOCAL --> SIM
    NETWORK --> SIM
```

The simulation should receive player commands without necessarily needing to know where they came from.
This will make it possible to use the same foundation for singleplayer, split-screen, LAN, and online multiplayer.



# Split-screen

One of the main planned differentiators of the engine will be native local multiplayer support.
The goal is to support up to four players (or more).
Each player should have:

* independent camera;
* independent HUD;
* independent input;
* independent player state;
* appropriate audio for their perspective.



# WAD Compatibility

The engine intends to use clearly defined compatibility levels.
Conceptual example:

```mermaid
flowchart TD
    Vanilla["Vanilla Doom"]
    Limit_Removing["Limit Removing"]
    Boom["Boom"]
    MBF["MBF"]
    MBF21["MBF21"]
    ID24["ID24"]

    Vanilla -->|Extension| Limit_Removing
    Limit_Removing -->|Extension| Boom
    Boom -->|Extension| MBF
    MBF -->|Extension| MBF21
    MBF21 -->|Extension| ID24
```
*This diagram represents the intended compatibility model and is not a complete representation of the historical or technical relationships between specifications.*

The intention is for a WAD to behave predictably according to the specification it was developed for.
The engine may also identify and report resources used by a WAD.

# Documentation

Documentation will be maintained within the project itself, and it contains all the extra details and explanations about the vision, architecture, how to contribute, etc.

Initial planning:

```
docs/
├── architecture.md
├── game-loop.md
├── memory.md
├── rendering.md
├── wad.md
├── compatibility.md
├── mbf21.md
├── id24.md
├── networking.md
└── multiplayer.md
````

The documentation will also serve as a record of the technical decisions made during development.

# Status

This project is in early development and is not currently a functional replacement for other Doom source ports.
APIs, architecture, internal formats, and code organization may change significantly during development.

# Main Development Objectives

Legend:
* [ ] To do
* [x] Done
* 🛠️ Under making

Engine

* [x] Game loop
* [x] Time system
* [ ] Memory management
* [ ] File system
* [x] Logging system
* [ ] Engine configuration
* [ ] Internal console

Platform

* [x] Window creation
* 🛠️ Keyboard
* [ ] Mouse
* [ ] Gamepads
* [ ] Audio
* [ ] Support for different operating systems

WAD

* [ ] IWAD loading
* [ ] PWAD loading
* [ ] Lump system
* [ ] Map identification
* [ ] VERTEXES reading
* [ ] LINEDEFS reading
* [ ] SIDEDEFS reading
* [ ] SECTORS reading
* [ ] THINGS reading
* [ ] NODES reading
* [ ] SSECTORS reading
* [ ] SEGS reading

Gameplay

* [ ] Player
* [ ] Movement
* [ ] Collision
* [ ] Weapons
* [ ] Ammunition
* [ ] Items
* [ ] Monsters
* [ ] Projectiles
* [ ] Damage
* [ ] Doors
* [ ] Elevators
* [ ] Platforms
* [ ] Teleporters
* [ ] Switches

Rendering

* [ ] Initial renderer
* [ ] Map rendering
* [ ] BSP
* [ ] Walls
* [ ] Flats
* [ ] Textures
* [ ] Sprites
* [ ] Visibility
* [ ] Lighting
* [ ] HUD

Multiplayer

* [ ] Local multiplayer
* [ ] 2-player split-screen
* [ ] 3-player split-screen
* [ ] 4-player split-screen
* [ ] Cooperative play
* [ ] Deathmatch
* [ ] LAN multiplayer
* [ ] Online multiplayer
* [ ] Client/Server
* [ ] Dedicated server
* [ ] Interpolation
* [ ] Prediction
* [ ] Reconnection
* [ ] Spectator

Compatibility

* [ ] Doom Vanilla
* [ ] Limit Removing
* [ ] Boom
* [ ] MBF
* [ ] MBF21
* [ ] ID24

Compatibility will be treated as documented specifications, rather than simply as a list of features.

Experimental

* [ ] Profile System
* [ ] Achievements System
* [ ] Modern Multiplayer
* [ ] Built-in PWAD/WAD loader & manager
* [ ] Wad Downloader
* [ ] System for distributing current wads/mods (with creators' consent)
* [ ] ACS
* [ ] Zscript (probably impossible and time demanding)
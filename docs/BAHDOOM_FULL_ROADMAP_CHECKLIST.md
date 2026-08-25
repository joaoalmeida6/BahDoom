# BahDoom — Development Roadmap

> Concise implementation checklist and milestones.

## Core

- [x] create `engine.h`;
- [x] create `engine.c`;
- [x] define engine state;
- [x] initialization;
- [x] execution;
- [x] shutdown;
- [x] shutdown;
- [x] integrate time system;
- [x] integrate platform;
- [x] integrate game.

## Time

- [x] implement clock;
- [x] calculate delta time;
- [x] define tick rate;
- [x] establish 35 Hz;
- [x] create accumulator;
- [x] execute multiple ticks when necessary;
- [x] prevent frame rate from controlling the simulation.

## Platform

- [x] SDL3;
- [x] janela;
- [x] events;
- [x] quit;
- [x] `PlatformEvent` abstraction;
- [x] platform lifecycle.
- [ ] mouse;
- [ ] gamepad;
- [ ] audio;
- [ ] filesystem;
- [ ] clipboard if necessary;
- [ ] resolution management;
- [ ] fullscreen;
- [ ] configurable window.

## Input

- [x] create `input/input.h`;
- [x] create `input/input.c`;
- [x] define actions;
- [x] map keyboard to actions;
- [x] separate physical key from action;
- [x] implement action query;
- [x] implement DOWN state;
- [x] implement PRESSED state;
- [x] implement RELEASED state;
- [x] prepare architecture for rebinding.
- [x] move forward;
- [x] move backward;
- [x] move left;
- [x] move right;
- [x] turn left;
- [x] turn right;
- [x] fire;
- [x] use;
- [x] menu;
- [x] pause.

## Player Commands

- [x] create command structure;
- [x] separate physical input from command;
- [x] define movement;
- [ ] define rotation;
- [ ] define fire;
- [ ] define use;
- [ ] define special actions;
- [ ] prepare for multiple players.

## Minimal Renderer

- [ ] create `renderer_init()`;
- [ ] create `renderer_shutdown()`;
- [ ] create `renderer_begin_frame()`;
- [ ] create `renderer_end_frame()`;
- [ ] clear the screen;
- [ ] present frame;
- [ ] draw first pixel;
- [ ] draw first rectangle;
- [ ] test viewport.

## Renderer Architecture

- [ ] define renderer API;
- [ ] define begin/end cycle;
- [ ] define texture;
- [ ] define framebuffer;
- [ ] define viewport;
- [ ] define camera;
- [ ] define required draw calls;
- [ ] define resource ownership.

## WAD Loader

- [ ] open file;
- [ ] validate header;
- [ ] identify IWAD/PWAD;
- [ ] read number of lumps;
- [ ] read directory offset;
- [ ] load directory;
- [ ] represent lump;
- [ ] find lump by name;
- [ ] read content;
- [ ] handle errors;
- [ ] close file.

## Resource System

- [ ] resource cache;
- [ ] lookup;
- [ ] namespaces;
- [ ] lifetime;
- [ ] on-demand loading;
- [ ] unloading when appropriate;
- [ ] type identification.

## DOOM Map Data

- [ ] VERTEXES;
- [ ] LINEDEFS;
- [ ] SIDEDEFS;
- [ ] SECTORS;
- [ ] THINGS;
- [ ] SEGS;
- [ ] SSECTORS;
- [ ] NODES.
- [ ] load map;
- [ ] validate references;
- [ ] build internal structures;
- [ ] prepare collision;
- [ ] prepare rendering.

## DOOM World

- [ ] world;
- [ ] sector;
- [ ] linedef;
- [ ] thing;
- [ ] subsector;
- [ ] BSP;
- [ ] position;
- [ ] orientation;
- [ ] speed;
- [ ] flags.

## Player

- [ ] position;
- [ ] direction;
- [ ] height;
- [ ] speed;
- [ ] radius;
- [ ] collision;
- [ ] input;
- [ ] movement;
- [ ] rotation;
- [ ] state;
- [ ] camera.

## Physics and Collision

- [ ] movement;
- [ ] collision com walls;
- [ ] clipping;
- [ ] floor;
- [ ] ceiling;
- [ ] height;
- [ ] step;
- [ ] gravity;
- [ ] projectile movement;
- [ ] hitscan;
- [ ] doors;
- [ ] lifts;
- [ ] platforms.

## DOOM Renderer

- [ ] camera;
- [ ] BSP traversal;
- [ ] subsectors;
- [ ] segments;
- [ ] walls;
- [ ] visplanes;
- [ ] flats;
- [ ] textures;
- [ ] sprites;
- [ ] clipping;
- [ ] lighting;
- [ ] sky;
- [ ] effects.

## Entities

- [ ] thing;
- [ ] state;
- [ ] position;
- [ ] momentum;
- [ ] flags;
- [ ] health;
- [ ] radius;
- [ ] height;
- [ ] sprite;
- [ ] frame;
- [ ] thinker/update;
- [ ] interaction.

## Weapons and Combat

- [ ] fists;
- [ ] pistol;
- [ ] shotgun;
- [ ] super shotgun;
- [ ] chaingun;
- [ ] rocket launcher;
- [ ] plasma;
- [ ] BFG;
- [ ] chainsaw;
- [ ] ammo;
- [ ] pickup;
- [ ] hitscan;
- [ ] projectile;
- [ ] damage;
- [ ] death.

## Monsters and AI

- [ ] states;
- [ ] thinkers;
- [ ] chase;
- [ ] attack;
- [ ] pain;
- [ ] death;
- [ ] targeting;
- [ ] infighting;
- [ ] sound awareness;
- [ ] movement;
- [ ] special actions.

## Specials

- [ ] doors;
- [ ] lifts;
- [ ] floors;
- [ ] ceilings;
- [ ] platforms;
- [ ] switches;
- [ ] triggers;
- [ ] teleporters;
- [ ] crushers;
- [ ] exits;
- [ ] secret sectors.

## Classic Compatibility

- [ ] timing;
- [ ] movement;
- [ ] collision;
- [ ] weapons;
- [ ] monsters;
- [ ] RNG;
- [ ] damage;
- [ ] pickups;
- [ ] states;
- [ ] specials;
- [ ] intermission;
- [ ] endings;
- [ ] save/load when appropriate.

## MBF21

- [ ] study specification;
- [ ] identify differences;
- [ ] implement parser;
- [ ] implement flags;
- [ ] implement extensions;
- [ ] implement actions;
- [ ] test real WADs;
- [ ] create regression tests.

## ID24

- [ ] study specification;
- [ ] identify new data;
- [ ] identify new actions;
- [ ] identify new properties;
- [ ] implement parser;
- [ ] implement runtime;
- [ ] test WADs;
- [ ] compatibility tests.

## Split-screen

- [ ] PlayerContext;
- [ ] multiple inputs;
- [ ] multiple cameras;
- [ ] multiple viewports;
- [ ] HUD individual;
- [ ] layout configuration;
- [ ] 2 players;
- [ ] 3 players;
- [ ] 4 players;
- [ ] coop local;
- [ ] deathmatch local.

## Local Multiplayer

- [ ] PlayerCommand per player;
- [ ] spawn;
- [ ] identification;
- [ ] state individual;
- [ ] damage between players;
- [ ] coop;
- [ ] deathmatch;
- [ ] score;
- [ ] respawn;
- [ ] match rules.

## Network Multiplayer

- [ ] socket abstraction;
- [ ] connection;
- [ ] identification;
- [ ] handshake;
- [ ] messages;
- [ ] player commands;
- [ ] synchronization;
- [ ] latency;
- [ ] perda de pacotes;
- [ ] reconnection;
- [ ] disconnection.

## Modern Multiplayer

- [ ] lobby;
- [ ] session creation;
- [ ] join session;
- [ ] player list;
- [ ] matchmaking;
- [ ] servidor dedicado;
- [ ] filtros;
- [ ] match settings;
- [ ] reconnection;
- [ ] connection status.

## Frontend

### Classic Base
- [ ] main menu;
- [ ] new game;
- [ ] episode;
- [ ] skill;
- [ ] load;
- [ ] save;
- [ ] options.

### Modern Base
- [ ] multiplayer;
- [ ] profiles;
- [ ] achievements;
- [ ] server browser;
- [ ] settings;
- [ ] controls.

## Profiles

- [ ] Profile;
- [ ] creation;
- [ ] selection;
- [ ] persistence;
- [ ] settings;
- [ ] statistics;
- [ ] achievements;
- [ ] progress;
- [ ] individual split-screen.

## Achievements

- [ ] Achievement ID;
- [ ] name;
- [ ] description;
- [ ] category;
- [ ] secret;
- [ ] condition;
- [ ] progress;
- [ ] score;
- [ ] desbloqueio;
- [ ] persistence;
- [ ] perfil;
- [ ] split-screen.

## Save/Load

- [ ] formato de save;
- [ ] world state;
- [ ] player state;
- [ ] weapons;
- [ ] inventory;
- [ ] entidades;
- [ ] door state;
- [ ] switch state;
- [ ] save version;
- [ ] future compatibility.

## Audio

- [ ] SDL audio or chosen backend;
- [ ] SFX;
- [ ] music;
- [ ] volume;
- [ ] channels;
- [ ] spatialization when necessary;
- [ ] pause;
- [ ] streaming;
- [ ] resource loading.

## Music

- [ ] MIDI;
- [ ] supported formats;
- [ ] playback;
- [ ] track switching;
- [ ] volume;
- [ ] optional randomization;
- [ ] WAD compatibility.

## Future - Scripting

- [ ] ACS;
- [ ] ZScript.

## Extensibility

- [ ] APIs public;
- [ ] events;
- [ ] custom entities;
- [ ] custom resources;
- [ ] scripting;
- [ ] game modes;
- [ ] extensible frontend;
- [ ] configuration;
- [ ] plugins/mod interfaces if it makes sense.

## Dev Tools

- [ ] debug overlay;
- [ ] FPS counter;
- [ ] tick counter;
- [ ] profiler;
- [ ] entity inspector;
- [ ] WAD inspector;
- [ ] console;
- [ ] logging;
- [ ] debug commands;
- [ ] collision visualization;
- [ ] BSP visualization.

## Testing

- [ ] unit tests;
- [ ] WAD parsing tests;
- [ ] timing tests;
- [ ] input tests;
- [ ] collision tests;
- [ ] RNG tests;
- [ ] compatibility tests;
- [ ] regression tests;
- [ ] multiplayer tests.

## Performance

- [ ] measure;
- [ ] identify bottlenecks;
- [ ] profiler;
- [ ] CPU;
- [ ] memory;
- [ ] renderer;
- [ ] WAD loading;
- [ ] simulation;
- [ ] networking.

## Portability

- [ ] Windows;
- [ ] Linux;
- [ ] eventually macOS;
- [ ] other platforms compatible with SDL3, if it makes sense.

## Polish

- [ ] settings;
- [ ] controls;
- [ ] resolution;
- [ ] fullscreen;
- [ ] audio;
- [ ] menus;
- [ ] messages;
- [ ] HUD;
- [ ] graphics options;
- [ ] multiplayer options;
- [ ] perfis.

## Release

- [ ] release build;
- [ ] documentation;
- [ ] README;
- [ ] license;
- [ ] credits;
- [ ] third parties;
- [ ] build instructions;
- [ ] installation instructions;
- [ ] changelog;
- [ ] versioning;
- [ ] releases GitHub.

## Major Milestones

- [x] **Milestone 0 — Engine Boot**
  - SDL3
  - Window
  - Engine Loop

- [ ] **Milestone 1 — Input**
  - Keyboard
  - Input Actions
  - Player Commands

- [ ] **Milestone 2 — Renderer**
  - Renderer initialization
  - First frame
  - Viewport

- [ ] **Milestone 3 — WAD**
  - WAD
  - Lumps
  - Resources

- [ ] **Milestone 4 — Doom World**
  - Map
  - World
  - Player

- [ ] **Milestone 5 — Playable Doom**
  - Map
  - Player
  - Renderer
  - Gameplay

- [ ] **Milestone 6 — Compatibility**
  - Classic Doom
  - MBF21
  - ID24

- [ ] **Milestone 7 — Split-screen**
  - Player 1
  - Player 2
  - Player 3
  - Player 4

- [ ] **Milestone 8 — Multiplayer**
  - Local multiplayer
  - Network multiplayer
  - Sessions

- [ ] **Milestone 9 — Modern Frontend**
  - Profiles
  - Achievements
  - Multiplayer
  - Settings

- [ ] **Milestone 10 — BahDoom Engine**
  - Doom-compatible engine
  - Modern systems
  - Extensibility

## Current Practical Order

- [x] Keyboard
- [ ] Input Actions
- [ ] Player Commands
- [ ] Minimal Renderer
- [ ] Renderer Architecture
- [ ] WAD Loader
- [ ] Resource System
- [ ] Doom Map Data
- [ ] Player
- [ ] Collision
- [ ] Doom Renderer
- [ ] Entities
- [ ] Gameplay
- [ ] MBF21
- [ ] ID24
- [ ] Split-screen
- [ ] Multiplayer
- [ ] Frontend
- [ ] Profiles
- [ ] Achievements

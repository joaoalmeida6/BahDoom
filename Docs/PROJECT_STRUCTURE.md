# Project Structure

The planned structure is approximately:

```
DoomEngine/
│
├── CMakeLists.txt
├── README.md
├── LICENSE
│
├── src/
│   ├── main.c
│   │
│   ├── core/
│   │   ├── engine.c
│   │   ├── engine.h
│   │   ├── memory.c
│   │   ├── memory.h
│   │   ├── time.c
│   │   ├── time.h
│   │   ├── log.c
│   │   └── log.h
│   │
│   ├── platform/
│   │   ├── platform.c
│   │   └── platform.h
│   │
│   ├── wad/
│   │   ├── wad.c
│   │   └── wad.h
│   │
│   ├── game/
│   │   ├── game.c
│   │   └── game.h
│   │
│   ├── render/
│   │   ├── renderer.c
│   │   └── renderer.h
│   │
│   ├── audio/
│   │
│   └── network/
│
├── include/
│
├── assets/
│
├── docs/
│   ├── architecture.md
│   ├── wad.md
│   ├── compatibility.md
│   ├── mbf21.md
│   ├── id24.md
│   └── networking.md
│
└── tests/
```

This structure may change as the architecture evolves.
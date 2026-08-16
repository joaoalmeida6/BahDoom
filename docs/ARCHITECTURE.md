# Architecture

The engine will be organized into independent modules, aiming to reduce coupling between the different systems.
A simplified view of the architecture:

```mermaid
flowchart TB
    GAME["GAMEPLAY<br/>Doom / MBF21 / Extensions"]

    WORLD["WORLD<br/>Maps / Actors / Physics / State"]

    RENDER["RENDERER<br/>2D / 3D / Software / Hardware"]
    AUDIO["AUDIO<br/>SFX / Music / Mixing"]
    NETWORK["NETWORK<br/>Netcode / Multiplayer"]

    PLATFORM["PLATFORM<br/>Window / Input / Controller / OS"]

    CORE["CORE<br/>Memory / Time / Files / Logging"]

    GAME --> WORLD

    WORLD --> RENDER
    WORLD --> AUDIO
    WORLD --> NETWORK

    RENDER --> PLATFORM
    AUDIO --> PLATFORM
    NETWORK --> PLATFORM

    CORE --> WORLD
    CORE --> RENDER
    CORE --> AUDIO
    CORE --> NETWORK
    CORE --> PLATFORM
```

One of the project's principles will be to keep the game simulation independent from the way players provide their inputs.
This will make it possible to use the same logic for:

```mermaid
flowchart TD
    Keyboard[Keyboard]
    Controller[Controller]

    Keyboard --> Input{Input System}
    Controller --> Input

    Input --> Singleplayer[Singleplayer]
    Input --> Splitscreen[Split-screen]
    Input --> Online[Online Multiplayer]
```
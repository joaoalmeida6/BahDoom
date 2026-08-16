# Vision

In the long term, the intention is to build an engine capable of providing:

```mermaid
              flowchart TB
    ENGINE["DOOM ENGINE"]

    subgraph MODES["GAME MODES"]
        SINGLE["SINGLEPLAYER"]
        LOCAL["LOCAL<br/>SPLITSCREEN"]
        ONLINE["ONLINE"]
    end

    subgraph COMPAT["WAD COMPATIBILITY"]
        BOOM["BOOM"]
        MBF21["MBF21"]
        ID24["ID24"]
    end

    ENGINE --> MODES
    ENGINE --> COMPAT
```

An engine that prioritizes compatibility, multiplayer, and predictability, without losing the simplicity and philosophy that have kept Doom relevant decades after its release.
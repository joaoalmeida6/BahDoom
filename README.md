# BahDoom Engine

Uma engine inspirada em **Doom**, desenvolvida do zero em **C**, com foco em aprendizado, arquitetura de engines, compatibilidade com o ecossistema Doom e multiplayer.

O projeto nasceu da ideia de entender como uma engine de jogos funciona construindo cada camada gradualmente, desde o game loop e gerenciamento de memória até o carregamento de WADs, renderização e networking.

> **Status:** 🚧 Em desenvolvimento inicial

---

## Objetivo

O objetivo deste projeto é desenvolver uma engine Doom moderna, modular e extensível, mantendo compatibilidade com padrões de especificação já estabelecidos pela comunidade.

O foco principal será:

* **Multiplayer local com tela dividida**
* **Multiplayer online funcional**
* **Compatibilidade com especificações como MBF21 e ID24**
* **Arquitetura modular**
* **Ferramentas para análise e validação de WADs**
* **Documentação clara e detalhada**
* **Implementação em C para aprofundar o conhecimento de baixo nível**

A ideia não é simplesmente criar outro source port, mas construir uma engine entendendo cada componente que a compõe.

---

## Principais objetivos

### Engine

* [ ] Game loop
* [ ] Sistema de tempo
* [ ] Gerenciamento de memória
* [ ] Sistema de arquivos
* [ ] Sistema de logs
* [ ] Configuração da engine
* [ ] Console interno

### Plataforma

* [ ] Criação de janela
* [ ] Teclado
* [ ] Mouse
* [ ] Gamepads
* [ ] Áudio
* [ ] Suporte a diferentes sistemas operacionais

### WAD

* [ ] Leitura de IWAD
* [ ] Leitura de PWAD
* [ ] Sistema de lumps
* [ ] Identificação de mapas
* [ ] Leitura de VERTEXES
* [ ] Leitura de LINEDEFS
* [ ] Leitura de SIDEDEFS
* [ ] Leitura de SECTORS
* [ ] Leitura de THINGS
* [ ] Leitura de NODES
* [ ] Leitura de SSECTORS
* [ ] Leitura de SEGS

### Gameplay

* [ ] Jogador
* [ ] Movimento
* [ ] Colisão
* [ ] Armas
* [ ] Munição
* [ ] Itens
* [ ] Monstros
* [ ] Projéteis
* [ ] Dano
* [ ] Portas
* [ ] Elevadores
* [ ] Plataformas
* [ ] Teletransportes
* [ ] Switches

### Renderização

* [ ] Renderer inicial
* [ ] Renderização de mapas
* [ ] BSP
* [ ] Paredes
* [ ] Flats
* [ ] Texturas
* [ ] Sprites
* [ ] Visibilidade
* [ ] Iluminação
* [ ] HUD

### Multiplayer

* [ ] Multiplayer local
* [ ] Split-screen para 2 jogadores
* [ ] Split-screen para 3 jogadores
* [ ] Split-screen para 4 jogadores
* [ ] Cooperação
* [ ] Deathmatch
* [ ] Multiplayer LAN
* [ ] Multiplayer online
* [ ] Client/Server
* [ ] Servidor dedicado
* [ ] Interpolação
* [ ] Predição
* [ ] Reconexão
* [ ] Spectator

### Compatibilidade

* [ ] Doom Vanilla
* [ ] Boom
* [ ] MBF
* [ ] MBF21
* [ ] ID24

A compatibilidade será tratada como **especificações documentadas**, e não simplesmente como uma lista de funcionalidades.

---

# Arquitetura

A engine será organizada em módulos independentes, buscando reduzir o acoplamento entre os diferentes sistemas.

Uma visão simplificada da arquitetura:

```text
                    ┌──────────────────┐
                    │     GAMEPLAY     │
                    │ Doom / MBF21/... │
                    └────────┬─────────┘
                             │
                    ┌────────▼─────────┐
                    │      WORLD       │
                    │ Map / Actors /   │
                    │ Physics / State  │
                    └────────┬─────────┘
                             │
          ┌──────────────────┼──────────────────┐
          │                  │                  │
 ┌────────▼────────┐ ┌───────▼────────┐ ┌──────▼───────┐
 │    RENDERER     │ │     AUDIO      │ │   NETWORK    │
 └────────┬────────┘ └───────┬────────┘ └──────┬───────┘
          │                  │                  │
          └──────────────────┼──────────────────┘
                             │
                    ┌────────▼─────────┐
                    │     PLATFORM     │
                    │ Window / Input / │
                    │ Controller / OS  │
                    └────────┬─────────┘
                             │
                    ┌────────▼─────────┐
                    │       CORE       │
                    │ Memory / Time /  │
                    │ Files / Logging  │
                    └──────────────────┘
```

Um dos princípios do projeto será manter a **simulação do jogo independente da forma como os jogadores fornecem seus inputs**.

Isso permitirá utilizar a mesma lógica para:

```text
Teclado
   │
Controle
   │
   ├──► Singleplayer
   │
   ├──► Split-screen
   │
   └──► Multiplayer online
```

---

# Multiplayer First-Class

Multiplayer não será tratado como uma funcionalidade adicionada posteriormente à engine.

A arquitetura será planejada desde o início para permitir:

```text
                 GAME SIMULATION
                        ▲
                        │
             ┌──────────┴──────────┐
             │                     │
        LOCAL INPUT           NETWORK INPUT
             │                     │
       ┌─────┴─────┐          ┌────┴─────┐
       │           │          │          │
   Keyboard    Controller   Client     Server
```

A simulação deverá receber comandos de jogadores sem precisar saber necessariamente de onde eles vieram.

Isso permitirá utilizar a mesma base para singleplayer, split-screen, LAN e multiplayer online.

---

# Split-screen

Um dos principais diferenciais planejados para a engine será o suporte nativo a multiplayer local.

O objetivo é permitir até quatro jogadores:

```text
┌───────────────────────┬───────────────────────┐
│                       │                       │
│       PLAYER 1        │       PLAYER 2        │
│                       │                       │
├───────────────────────┼───────────────────────┤
│                       │                       │
│       PLAYER 3        │       PLAYER 4        │
│                       │                       │
└───────────────────────┴───────────────────────┘
```

Cada jogador deverá possuir:

* câmera independente;
* HUD independente;
* input independente;
* estado de jogador independente;
* áudio apropriado à sua perspectiva.

---

# Compatibilidade com WADs

A engine pretende utilizar níveis de compatibilidade claramente definidos.

Exemplo conceitual:

```text
Vanilla
   │
Boom
   │
MBF
   │
MBF21
   │
ID24
```

A intenção é que um WAD tenha comportamento previsível de acordo com a especificação para a qual foi desenvolvido.

A engine também poderá identificar e reportar recursos utilizados por um WAD.

---

# Ferramentas

Um dos objetivos futuros é desenvolver ferramentas auxiliares para o ecossistema.

## WADCheck

Uma ferramenta planejada para analisar WADs:

```text
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

A ferramenta poderá futuramente verificar problemas comuns de compatibilidade e multiplayer.

---

# Tecnologias

Atualmente o projeto está sendo desenvolvido utilizando:

* **C**
* **CMake**
* **CLion**
* **Git**

Bibliotecas e tecnologias externas serão adicionadas conforme a necessidade da engine.

A camada de plataforma deverá utilizar uma biblioteca multiplataforma para lidar com janela, entrada, controles e outros recursos do sistema operacional.

---

# Estrutura do projeto

A estrutura planejada é aproximadamente:

```text
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

Essa estrutura ainda poderá mudar conforme a arquitetura evoluir.

---

# Roadmap

## Phase 0 — Foundation

* [x] Criar repositório
* [x] Configurar CMake
* [x] Configurar ambiente de desenvolvimento
* [x] Estrutura inicial da engine
* [ ] Sistema de logging
* [ ] Game loop

## Phase 1 — Platform

* [ ] Janela
* [ ] Input
* [ ] Gamepad
* [ ] Timer
* [ ] Sistema básico de arquivos

## Phase 2 — Renderer

* [ ] Framebuffer
* [ ] Renderer básico
* [ ] Câmera
* [ ] Renderização de geometria simples

## Phase 3 — WAD

* [ ] WAD loader
* [ ] Lump directory
* [ ] Parser de mapas
* [ ] Vértices
* [ ] Linedefs
* [ ] Sidedefs
* [ ] Sectors
* [ ] Things
* [ ] BSP

## Phase 4 — Doom

* [ ] Primeiro mapa jogável
* [ ] Movimento
* [ ] Colisão
* [ ] Armas
* [ ] Inimigos
* [ ] Itens
* [ ] Interações
* [ ] HUD

## Phase 5 — Compatibility

* [ ] Vanilla
* [ ] Boom
* [ ] MBF
* [ ] MBF21
* [ ] ID24

## Phase 6 — Multiplayer

* [ ] Segundo jogador
* [ ] Split-screen
* [ ] 4 jogadores locais
* [ ] Coop
* [ ] Deathmatch
* [ ] LAN
* [ ] Client/Server
* [ ] Internet
* [ ] Dedicated Server

## Phase 7 — Tools

* [ ] WADCheck
* [ ] Debugger
* [ ] Console
* [ ] Profiler
* [ ] Compatibility reports

---

# Documentação

A documentação será mantida dentro do próprio projeto.

Planejamento inicial:

```text
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
```

A documentação também servirá como registro das decisões técnicas tomadas durante o desenvolvimento.

---

# Filosofia de desenvolvimento

Este projeto é, antes de tudo, um projeto de aprendizado.

Por isso, algumas decisões podem ser menos "práticas" do que simplesmente utilizar uma engine ou biblioteca pronta.

O objetivo é entender:

* como um game loop funciona;
* como a memória é organizada;
* como arquivos binários são interpretados;
* como mapas são armazenados;
* como o BSP funciona;
* como um renderer transforma dados em pixels;
* como uma simulação de jogo funciona;
* como multiplayer sincroniza jogadores;
* como uma engine pode ser organizada em módulos.

Código simples, compreensível e bem documentado será priorizado sempre que possível.

---

# Contribuições

O projeto ainda está em estágio inicial e mudanças significativas na arquitetura são esperadas.

Contribuições poderão ser aceitas conforme a engine amadurecer.

Antes de grandes alterações, é recomendável abrir uma issue para discutir a proposta.

---

# Status

Este projeto está em desenvolvimento inicial e **não é atualmente um substituto funcional para outros source ports de Doom**.

APIs, arquitetura, formatos internos e organização de código podem mudar significativamente durante o desenvolvimento.

---

# Licença

A licença do projeto ainda será definida.

Este projeto é uma implementação independente inspirada na tecnologia e nos conceitos do Doom. Os arquivos de jogos originais de Doom não fazem parte deste repositório.

---

## Visão

A longo prazo, a intenção é chegar a uma engine capaz de oferecer:

```text
              DOOM ENGINE
                   │
       ┌───────────┼───────────┐
       │           │           │
   SINGLEPLAYER  LOCAL       ONLINE
       │       SPLITSCREEN    │
       │           │           │
       └───────────┼───────────┘
                   │
              WAD SUPPORT
                   │
        ┌──────────┼──────────┐
        │          │          │
      BOOM       MBF21      ID24
```

Uma engine que priorize **compatibilidade, multiplayer e previsibilidade**, sem perder a simplicidade e a filosofia que fizeram Doom continuar relevante décadas depois de seu lançamento.

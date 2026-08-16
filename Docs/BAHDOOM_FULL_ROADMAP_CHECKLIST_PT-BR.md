# BahDoom — Development Roadmap

> Concise implementation checklist and milestones.

## Core

- [x] criar `engine.h`;
- [x] criar `engine.c`;
- [x] definir estado da engine;
- [x] inicialização;
- [x] execução;
- [x] encerramento;
- [x] shutdown;
- [x] integrar sistema de tempo;
- [x] integrar plataforma;
- [x] integrar jogo.

## Time

- [x] implementar relógio;
- [x] calcular delta time;
- [x] definir tick rate;
- [x] estabelecer 35 Hz;
- [x] criar accumulator;
- [x] executar múltiplos ticks quando necessário;
- [x] evitar que o frame rate controle a simulação.

## Platform

- [x] SDL3;
- [x] janela;
- [x] eventos;
- [x] quit;
- [x] abstração `PlatformEvent`;
- [x] lifecycle da plataforma.
- [ ] mouse;
- [ ] gamepad;
- [ ] áudio;
- [ ] filesystem;
- [ ] clipboard se necessário;
- [ ] gerenciamento de resolução;
- [ ] fullscreen;
- [ ] janela configurável.

## Input

- [x] criar `input/input.h`;
- [x] criar `input/input.c`;
- [x] definir ações;
- [x] mapear teclado para ações;
- [x] separar tecla física de ação;
- [x] implementar consulta de ação;
- [x] implementar estado DOWN;
- [x] implementar estado PRESSED;
- [x] implementar estado RELEASED;
- [x] preparar arquitetura para rebinding.
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

- [x] criar estrutura de comando;
- [ ] separar input físico de comando;
- [ ] definir movimento;
- [ ] definir rotação;
- [ ] definir fire;
- [ ] definir use;
- [ ] definir ações especiais;
- [ ] preparar múltiplos jogadores.

## Minimal Renderer

- [ ] criar `renderer_init()`;
- [ ] criar `renderer_shutdown()`;
- [ ] criar `renderer_begin_frame()`;
- [ ] criar `renderer_end_frame()`;
- [ ] limpar a tela;
- [ ] apresentar frame;
- [ ] desenhar primeiro pixel;
- [ ] desenhar primeiro retângulo;
- [ ] testar viewport.

## Renderer Architecture

- [ ] definir API de renderer;
- [ ] definir ciclo begin/end;
- [ ] definir textura;
- [ ] definir framebuffer;
- [ ] definir viewport;
- [ ] definir câmera;
- [ ] definir draw calls necessárias;
- [ ] definir ownership dos recursos.

## WAD Loader

- [ ] abrir arquivo;
- [ ] validar header;
- [ ] identificar IWAD/PWAD;
- [ ] ler número de lumps;
- [ ] ler offset do directory;
- [ ] carregar directory;
- [ ] representar lump;
- [ ] buscar lump por nome;
- [ ] ler conteúdo;
- [ ] tratar erros;
- [ ] fechar arquivo.

## Resource System

- [ ] cache de recursos;
- [ ] lookup;
- [ ] namespaces;
- [ ] lifetime;
- [ ] carregamento sob demanda;
- [ ] descarregamento quando apropriado;
- [ ] identificação de tipos.

## DOOM Map Data

- [ ] VERTEXES;
- [ ] LINEDEFS;
- [ ] SIDEDEFS;
- [ ] SECTORS;
- [ ] THINGS;
- [ ] SEGS;
- [ ] SSECTORS;
- [ ] NODES.
- [ ] carregar mapa;
- [ ] validar referências;
- [ ] construir estruturas internas;
- [ ] preparar colisão;
- [ ] preparar renderização.

## DOOM World

- [ ] world;
- [ ] sector;
- [ ] linedef;
- [ ] thing;
- [ ] subsector;
- [ ] BSP;
- [ ] posição;
- [ ] orientação;
- [ ] velocidade;
- [ ] flags.

## Player

- [ ] posição;
- [ ] direção;
- [ ] altura;
- [ ] velocidade;
- [ ] raio;
- [ ] colisão;
- [ ] input;
- [ ] movimentação;
- [ ] rotação;
- [ ] estado;
- [ ] câmera.

## Physics and Collision

- [ ] movimentação;
- [ ] colisão com paredes;
- [ ] clipping;
- [ ] floor;
- [ ] ceiling;
- [ ] altura;
- [ ] step;
- [ ] gravity;
- [ ] projectile movement;
- [ ] hitscan;
- [ ] portas;
- [ ] lifts;
- [ ] plataformas.

## DOOM Renderer

- [ ] câmera;
- [ ] BSP traversal;
- [ ] subsectors;
- [ ] segmentos;
- [ ] paredes;
- [ ] visplanes;
- [ ] flats;
- [ ] texturas;
- [ ] sprites;
- [ ] clipping;
- [ ] iluminação;
- [ ] sky;
- [ ] efeitos.

## Entities

- [ ] thing;
- [ ] estado;
- [ ] posição;
- [ ] momentum;
- [ ] flags;
- [ ] health;
- [ ] radius;
- [ ] height;
- [ ] sprite;
- [ ] frame;
- [ ] thinker/update;
- [ ] interação.

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
- [ ] munição;
- [ ] pickup;
- [ ] hitscan;
- [ ] projectile;
- [ ] dano;
- [ ] morte.

## Monsters and AI

- [ ] estados;
- [ ] thinkers;
- [ ] perseguição;
- [ ] ataque;
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
- [ ] movimentação;
- [ ] colisão;
- [ ] armas;
- [ ] monstros;
- [ ] RNG;
- [ ] damage;
- [ ] pickups;
- [ ] states;
- [ ] specials;
- [ ] intermission;
- [ ] finais;
- [ ] save/load quando apropriado.

## MBF21

- [ ] estudar especificação;
- [ ] identificar diferenças;
- [ ] implementar parser;
- [ ] implementar flags;
- [ ] implementar extensões;
- [ ] implementar ações;
- [ ] testar WADs reais;
- [ ] criar testes de regressão.

## ID24

- [ ] estudar especificação;
- [ ] identificar novos dados;
- [ ] identificar novas ações;
- [ ] identificar novas propriedades;
- [ ] implementar parser;
- [ ] implementar runtime;
- [ ] testar WADs;
- [ ] testes de compatibilidade.

## Split-screen

- [ ] PlayerContext;
- [ ] múltiplos inputs;
- [ ] múltiplas câmeras;
- [ ] múltiplas viewports;
- [ ] HUD individual;
- [ ] configuração de layout;
- [ ] 2 jogadores;
- [ ] 3 jogadores;
- [ ] 4 jogadores;
- [ ] coop local;
- [ ] deathmatch local.

## Local Multiplayer

- [ ] PlayerCommand por jogador;
- [ ] spawn;
- [ ] identificação;
- [ ] estado individual;
- [ ] dano entre jogadores;
- [ ] coop;
- [ ] deathmatch;
- [ ] score;
- [ ] respawn;
- [ ] regras de partida.

## Network Multiplayer

- [ ] socket abstraction;
- [ ] conexão;
- [ ] identificação;
- [ ] handshake;
- [ ] mensagens;
- [ ] player commands;
- [ ] sincronização;
- [ ] latência;
- [ ] perda de pacotes;
- [ ] reconexão;
- [ ] desconexão.

## Modern Multiplayer

- [ ] lobby;
- [ ] criação de sessão;
- [ ] entrada em sessão;
- [ ] lista de jogadores;
- [ ] matchmaking;
- [ ] servidor dedicado;
- [ ] filtros;
- [ ] configurações de partida;
- [ ] reconexão;
- [ ] status de conexão.

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
- [ ] criação;
- [ ] seleção;
- [ ] persistência;
- [ ] configurações;
- [ ] estatísticas;
- [ ] achievements;
- [ ] progresso;
- [ ] split-screen individual.

## Achievements

- [ ] Achievement ID;
- [ ] nome;
- [ ] descrição;
- [ ] categoria;
- [ ] segredo;
- [ ] condição;
- [ ] progresso;
- [ ] pontuação;
- [ ] desbloqueio;
- [ ] persistência;
- [ ] perfil;
- [ ] split-screen.

## Save/Load

- [ ] formato de save;
- [ ] estado do mundo;
- [ ] estado do jogador;
- [ ] armas;
- [ ] inventário;
- [ ] entidades;
- [ ] estado de portas;
- [ ] estado de switches;
- [ ] versão do save;
- [ ] compatibilidade futura.

## Audio

- [ ] SDL audio ou backend escolhido;
- [ ] SFX;
- [ ] música;
- [ ] volume;
- [ ] canais;
- [ ] spatialization quando necessário;
- [ ] pausa;
- [ ] streaming;
- [ ] carregamento de recursos.

## Music

- [ ] MIDI;
- [ ] formatos suportados;
- [ ] reprodução;
- [ ] troca de faixa;
- [ ] volume;
- [ ] randomização opcional;
- [ ] compatibilidade com WAD.

## Future - Scripting

- [ ] ACS;
- [ ] ZScript.

## Extensibility

- [ ] APIs públicas;
- [ ] eventos;
- [ ] entidades customizadas;
- [ ] recursos customizados;
- [ ] scripting;
- [ ] game modes;
- [ ] frontend extensível;
- [ ] configuração;
- [ ] plugins/mod interfaces se fizer sentido.

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

- [ ] medir;
- [ ] identificar gargalos;
- [ ] profiler;
- [ ] CPU;
- [ ] memória;
- [ ] renderer;
- [ ] WAD loading;
- [ ] simulation;
- [ ] networking.

## Portability

- [ ] Windows;
- [ ] Linux;
- [ ] eventualmente macOS;
- [ ] outras plataformas compatíveis com SDL3, caso faça sentido.

## Polish

- [ ] configurações;
- [ ] controles;
- [ ] resolução;
- [ ] fullscreen;
- [ ] áudio;
- [ ] menus;
- [ ] mensagens;
- [ ] HUD;
- [ ] opções gráficas;
- [ ] opções multiplayer;
- [ ] perfis.

## Release

- [ ] build de release;
- [ ] documentação;
- [ ] README;
- [ ] licença;
- [ ] créditos;
- [ ] terceiros;
- [ ] instruções de compilação;
- [ ] instruções de instalação;
- [ ] changelog;
- [ ] versionamento;
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

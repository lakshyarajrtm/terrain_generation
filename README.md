# Terrain Generation Grid

A small C++ graphics experiment built with [olcPixelGameEngine](https://github.com/OneLoneCoder/olcPixelGameEngine).

The current program opens a 400 × 400 window and draws a 40 × 40 triangular grid. It is a visual foundation for terrain-generation work; procedural height, noise, biome, and mesh-generation logic are not implemented yet.

## Requirements

- A C++ compiler
- Platform dependencies required by olcPixelGameEngine

The repository already includes `olcPixelGameEngine.h`.

## Build

Compile `terrain_generation.cpp` using the setup required by olcPixelGameEngine for your operating system. For example, after installing the Linux development dependencies documented by the engine:

```sh
c++ -std=c++17 terrain_generation.cpp -o terrain_generation -lX11 -lGL -lpthread -lpng -lstdc++fs
./terrain_generation
```

Linker requirements vary by operating system and compiler.

## Files

- `terrain_generation.cpp` — application entry point and grid drawing
- `olcPixelGameEngine.h` — single-header graphics engine

## Controls

There are currently no interactive controls; close the window to exit.

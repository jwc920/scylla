# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project Overview

QMK Firmware Userspace for Bastard Keyboards, primarily for the **Scylla** (4x6+5 split ergonomic keyboard) with an RP2040 microcontroller. The active custom keymap is `jason-scylla`.

## Build Commands

```bash
# Compile firmware (preferred method - do NOT use GitHub Actions)
make bastardkb/scylla:jason-scylla

# Compile and flash via bootloader
make bastardkb/scylla:jason-scylla:flash

# Alternative: direct QMK CLI
qmk compile -c -kb bastardkb/scylla -km jason-scylla
```

Output is a `.uf2` firmware binary for RP2040.

## Architecture

### Keymap Structure (`keyboards/bastardkb/scylla/keymaps/jason-scylla/`)

- **`keymap.c`** — Main keymap using `LAYOUT_split_4x6_5`. Defines 4 layers:
  - Layer 0 (BASE): Custom layout with home row modifiers (Ctrl/Alt/Gui/Shift on home row keys)
  - Layer 1: Alternative layout variant
  - Layer 2 (NAV): Navigation arrows and macros
  - Layer 3 (SYM): Programming symbols
- **`config.h`** — Timing and behavior settings: `CHORDAL_HOLD`, `TAPPING_TERM 250`, `PERMISSIVE_HOLD`, `QUICK_TAP_TERM 0`
- **`rules.mk`** — Enables VIA and tap dance features

### Key Features

- **Home row modifiers**: Keys act as letters on tap, modifiers on hold
- **Tap dance**: Layer toggle on tap, symbol layer on hold
- **Chordal hold**: Prevents accidental modifier activation from same-hand rolls

### Build System

The `Makefile` delegates to QMK firmware's build system. QMK home directory is resolved from `qmk config user.qmk_home`. The `qmk.json` manifest lists all build targets (Scylla, Charybdis, Dilemma, TBKmini, Skeletyl).

### QMK Firmware Fork

CI uses the Bastard KB fork: `bastardkb/bastardkb-qmk` on `bkb-master` branch.

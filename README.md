# Aqua and Ashes

Aqua and Ashes is an in-development Game Boy title I'm working on in my free time. Check out my devlog starting at https://invisibleup.neocities.org/articles/18

## Concept
This game is heavily inspired by the football level from *Tiny Toons Adventures: Buster Busts Loose!* for the SNES. The general idea is that there are two goalposts. One is manned by some geckos, who would like it to be on fire because they want the heat. The other is managed by some arctic foxes, who want it not on fire because they hate the heat. The geckos have torches, the foxes have buckets.

Each team consists of an offence and a defense player. The goal of the offence player is to get to the other side of the field, while the defense player tries to stop the offence player. Each turn (that is, after 4 downs) the two teams alternate between offence and defense.

To complicate matters a touch, as the game progresses (every X turns?) the season changes from summer to winter and back. During summer and winter, debris is added to the field that is advantageous to one team and an obstacle to the other. For instance, during the winter piles of snow build up, which the snow foxes and run through just fine but the geckos must jump over.

## Goals:

### Assets
- [ ] Character sprites (incomplete)
- [ ] Title screen art
- [ ] HUD art
- [ ] Menu art
- [ ] Music

### Backend
- [X] Draw sprites to the screen
- [X] Draw a background to the screen
- [X] Animate the sprites
- [ ] Implement DPLCs
- [ ] Find or write a compression routine
- [ ] Find or write a sound driver
- [ ] Multiplayer support?

### Game Logic
- [X] Let the player move left and right
- [ ] Let the player jump (doing cleanup first)
- [ ] Add boundaries to the playfield
- [ ] Add some sort of AI system
- [ ] Add some win/lose conditions, turns, etc.
- [ ] Implement a HUD
- [ ] Implement a menu system

## Restrictions
- 32K ROM with no cart RAM
- Aimed at DMG. Might add SGB support. Not doing Color.
- A decent amount of art, music, and polish
- A game that is fun, to at least some degree

## Building
Get a Windows machine and run `build.bat`. (I'll get a proper Makefile set up later.) As of now the project only needs rgbds in the project directory, but I'm thinking of changing that due to it's lackluster macro support.

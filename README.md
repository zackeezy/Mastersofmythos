# Mastersofmythos

This is a passion project that aims to create a video game akin to the likes of Hearthstone or the Pokemon or Yugioh TCG sims that exist where you can play a card game.  The card game is, by design, going to be very simple and easy to learn.  The mechanics of the game can and probably will change as development goes on.

The program itself is going to start as a console application and a front end (GUI) will be added at a later date.  It will be written on Linux using c++ as the language and g++ as the compiler.  I use Visual Studio Code as my developer environment. If you have any more questions or suggestions, feel free to open an issue. 

The mechanics, as of now, will be as follows:

- There will be 2 types of cards: Creatures and Settings. 

- There will be 3 types of Creatures: God, Demigod, and Mortal/other

- Creatures have 2 stats: power and resistance

- An attacking creature with power higher than a defending Creature's resistance destroys the defending creature. 

- There will be 7 card places on the field: 2 frontline, 4 backup, and 1 setting.

- The setting card will only affect the side of the field it is on. 

- The tiers of Creatures go: Mortal (at the lowest) -> Demigod -> God (at the highest)

- A God cannot be put on the field without getting rid of a demigod already in a card zone.

- A Demigod cannot be put on the field without getting rid of a Mortal already in a card zone. 

- The frontline zones must be occupied by the highest tier Creatures on the field. (IE if a God is on the field, it cannot be in the backup zones unless both frontline zones are occupied by other God Creatures, and a Demigod cannot be in the backup zone unless both frontline zones are occupied by either both Gods, one God and one Demigod, or both Demigods.)

- The win condition is to attack your opponent while their field has no creatures. 
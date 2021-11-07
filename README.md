# PianoML

PianoML is a raspberry pi project to upgrade Fisher Price Musical Piano to play multiple languages.

## Piano Interface

[Product link](https://www.fisher-price.com/en-us/product/deluxe-kick-play-piano-gym-fgg45)

Piano has 2 switches (a 3-state and 4-state switch) and 5 piano keys.

The 3-state switch has modes [0] OFF, [1] LOW_VOLUME, and [2] HIGH_VOLUME.

The 4-state swtich has modes [0] LISTEN, [1] ANIMALS, [2] COUNTING/COLORS/SHAPES, and [3] PIANOKEYS.

There are 5 piano buttons [0] C/Red/Monkey/Circle/One, [1] D/Orange/Toucan/Heart/Two, [2] E/Yellow/Frog/Triangle/Three, [3] F/Green/Elephant/Square/Four, [4] G/Blue/Lion/Star/Five.

The plan to is re-purpose the HIGH_VOLUME mode to be MULTILINGUAL mode. 
When the 3-state switch is in MULTILINGUAL mode, the 4-state switch will remap to [0] LISTEN_ML, [1] JAPANESE, [2] CANTONESE, and [3] MANDARIN.

In each language mode, a piano button press will cause it to cycle through: colors, animals, shapes, and counting.
In LISTEN_ML mode, each piano button will play different foreign language nursery rhymes (song selection tbd)


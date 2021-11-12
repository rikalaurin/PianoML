add_executable(PianoML
        buzzer.c
        )

# pull in common dependencies
target_link_libraries(PianoML pico_stdlib)

# create map/bin/hex file etc.
pico_add_extra_outputs(PianoML)

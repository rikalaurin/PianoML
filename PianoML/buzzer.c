#include "pico/stdlib.h"

int main() {
    const uint LED_PIN = PICO_DEFAULT_LED_PIN;
    const uint BUZZER = 15;
    gpio_init(LED_PIN);
    gpio_init(BUZZER);
    gpio_set_dir(LED_PIN, GPIO_OUT);
    gpio_set_dir(BUZZER, GPIO_OUT);
    while (true) {
        gpio_put(LED_PIN, 1);
        gpio_put(BUZZER, 1);
        // sleep_ms(25);
        // gpio_put(LED_PIN, 0);
        // sleep_ms(25);
    }
}
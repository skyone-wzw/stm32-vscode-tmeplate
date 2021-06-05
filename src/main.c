#include "delay.h"
#include "sys.h"
#include "usart.h"

int main() {
    SetSysClock();
    delay_init();
    uart_init(115200);

    while (1) {
        printf("Hello STM32");
    }
}

#include <zephyr/kernel.h>
#include <zephyr/sys/printk.h>

int main() {
    while (1) {
        printk("Hello World!");
        k_msleep(1000);
    }
}
#include <zephyr/kernel.h>
#include <zephyr/sys/printk.h>

#include <modem/nrf_modem_lib.h>
#include <nrf_modem_gnss.h>

int main(void)
{
    int err;

    printk("GNSS project started\n");

    err = nrf_modem_lib_init();
    if (err) {
        printk("Modem library initialization failed: %d\n", err);
        return 0;
    }

    printk("Modem library initialized\n");

    return 0;
}
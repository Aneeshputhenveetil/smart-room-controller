idf_component_register(
    SRCS 
        "../services/scheduler.c"
        "../drivers/led/led.c"
        "app_main.c"
        PRIV_REQUIRES spi_flash
    INCLUDE_DIRS 
        "."
        "../services"
        "../drivers/led"

    REQUIRES esp_driver_gpio
)

# idf_component_register(
#     SRCS
#         "app_main.c"
#         "../drivers/led/led.c"

#     INCLUDE_DIRS
#         "."
#         "../drivers/led"

#     REQUIRES driver
# )
idf_component_register(
    SRCS 
        "../services/scheduler.c"
        "app_main.c"
        PRIV_REQUIRES spi_flash
        INCLUDE_DIRS 
        "."
        "../services"
)
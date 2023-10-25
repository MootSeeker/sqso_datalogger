SET(SOURCES components/ui_comp_number_temp.c
    components/ui_comp.c
    screens/ui_HomeScreen.c
    screens/ui_SettingsScreen.c
    screens/ui_LogScreen.c
    screens/ui_FwUpdate.c
    ui.c
    components/ui_comp_hook.c
    ui_helpers.c
    ui_events.c
    images/ui_img_download_png.c
    images/ui_img_1992300975.c)

add_library(ui ${SOURCES})

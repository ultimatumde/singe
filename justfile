init:
    meson setup build

reinit:
    meson setup --reconfigure build

build:
    meson compile -C build

archify:
    yay -S python
    # can we ignore the controversies and just say vaxry made some pretty good stuff
    yay -S hyprwayland-scanner-git wayland-git

glue:
    
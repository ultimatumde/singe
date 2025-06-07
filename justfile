import '../justfile'
import 'buildcommons/build.just'

scan:
    chmod +x ../.venv/bin/activate
    ../.venv/bin/activate
    ../.venv/bin/pip install -U pip pyyaml requests
    ../.venv/bin/python3 scripts/protocolgen.py

glue:
    chmod +x scripts/loopy.sh
    scripts/loopy.sh

protos: scan glue

develop:
    nix-shell -p systemd pkg-config wayland libxkbcommon cairo pango libinput libdrm libgbm libepoxy xorg.libX11 xorg.xcbutil xcb-util-cursor xwayland
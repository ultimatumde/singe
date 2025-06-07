project(
  'singe',
  'cpp',
  version : '0.1',
  meson_version : '>= 1.3.0',
  default_options : ['warning_level=3', 'cpp_std=c++14'],
)

# wayland libxkbcommon cairo pango libinput libdrm libgbm libepoxy xorg.libX11 xorg.xcbutil xcb-util-cursor xwayland
dependencies = [
  dependency('wayland-server'),
  dependency('wayland-client'),
  dependency('wayland-egl'),
  dependency('wayland-cursor'),
  dependency('xkbcommon'),
  dependency('libinput'),
  dependency('cairo'),
  dependency('pango'),
  dependency('libdrm'),
  dependency('gbm'),
  dependency('epoxy'),
  dependency('x11'),
  dependency('xcb-util'),
  dependency('xwayland'),
]

lib = shared_library(
  'singe',
  'src/main.cpp',
  include_directories : [
    include_directories('./src'),
    include_directories('./glue'),
  ],
  dependencies : dependencies,
  link_with: [
    shared_library('protocols', 'uproto/src/main.cpp', include_directories : include_directories('./uproto/src'))
  ]
)

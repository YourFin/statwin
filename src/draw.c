//#include <pango/pango.h>
//#include <stdio.h>
//#include <xcb/xcb.h>

#include <cairo/cairo-xcb.h>
#include <cairo/cairo.h>

int
main() {
  cairo_surface_t *surface;
  // Context stored in cairo_t
  cairo_t *cr;

  surface = cairo_image_surface_create(CAIRO_FORMAT_ARGB32, 120, 120);
  cr = cairo_create(surface);


}

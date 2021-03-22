#include <cairo/cairo.h>
#include <cmath>

// Top-Left is (0,0) and Right-Bottom is positive.

int main() {

    cairo_surface_t *surface = cairo_image_surface_create(CAIRO_FORMAT_ARGB32, 2000, 1000);
    cairo_t *cr = cairo_create(surface);
    cairo_set_source_rgb(cr, 1, 1, 1);
    cairo_paint(cr);
    cairo_set_source_rgb(cr, 0, 0, 0);

    for (int i = 0; i <= 2000; i++) {
        double x = i;
        double y = 500 - sin(x/(M_PI*100))*400;
        if (i == 0)
            cairo_move_to(cr, x, y);
        else
            cairo_line_to(cr, x, y);
    }

    cairo_stroke(cr);
    cairo_surface_write_to_png(surface, "example.png");
    cairo_destroy(cr);
    cairo_surface_destroy(surface);
    return 0;
}
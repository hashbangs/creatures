#include <gtk/gtk.h>

int main(int argc, char **argv)
{
  gtk_init (&argc, &argv);
  
  GtkWidget *window;
  GtkWidget *fixed;

  GtkWidget *button1;
  GtkWidget *button2;

  window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
  gtk_window_set_default_size(GTK_WINDOW(window), 300, 200);

  fixed = gtk_fixed_new();

  button1 = gtk_button_new_with_label("herring");
  button2 = gtk_button_new_with_label("808 kick samples");

  // Arguments: X and Y coordinates
  gtk_fixed_put(GTK_FIXED(fixed), button1, 100, 60);
  gtk_fixed_put(GTK_FIXED(fixed), button2, 100, 120);
  
  gtk_fixed_move(GTK_FIXED(fixed), button2, 100, 20);
  
  g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

  gtk_container_add(GTK_CONTAINER(window), fixed);
  gtk_widget_show_all(window);

  gtk_main ();

  return 0;
}

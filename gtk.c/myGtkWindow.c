#include <gtk/gtk.h>

int main(int argc, char **argv)
{
  const char *title;
  int width, height = 0;

  gtk_init (&argc, &argv);
  
  GtkWidget *window;

  window = gtk_window_new(GTK_WINDOW_TOPLEVEL);

  gtk_window_set_title(GTK_WINDOW(window), "NAME");
  gtk_window_set_default_size(GTK_WINDOW(window), 960, 500);
  gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
  gtk_window_set_resizable(GTK_WINDOW(window), FALSE);

  title = gtk_window_get_title(GTK_WINDOW(window));
  printf("window title: %s\n", title);

  gtk_window_get_size(GTK_WINDOW(window), &width, &height);
  printf("Width: %i\tHeight: %i\t", width, height);

  g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

  gtk_widget_show_all(window);

  gtk_main ();

  return 0;
}

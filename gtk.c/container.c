#include <gtk/gtk.h>

// the box widget is placed inside the container
// button 1 and 2 are placed inside the box

int main(int argc, char **argv)
{
  gtk_init (&argc, &argv);

  GtkWidget *window;
  GtkWidget *box;
  GtkWidget *button1;
  GtkWidget *button2;

  window = gtk_window_new(GTK_WINDOW_TOPLEVEL);

  box = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 0);

  gtk_window_set_default_size(GTK_WINDOW(window), 700, 400);
  gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
  gtk_window_set_resizable(GTK_WINDOW(window), FALSE);

  button1 = gtk_button_new_with_label("iwd");
  gtk_widget_set_size_request(GTK_WIDGET(button1), 500, 500);

  button2 = gtk_button_new_with_label("networkmanager");

  gtk_container_add(GTK_CONTAINER(window), box);

  // arguments: EXPAND = true/false FILL = true/false PADDING = intvalue
  gtk_box_pack_end(GTK_BOX(box), button1, TRUE, TRUE, 50);
  gtk_box_pack_start(GTK_BOX(box), button2, TRUE, TRUE, 50);

  g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

  gtk_widget_show_all(window);

  gtk_main ();

  return 0;
}

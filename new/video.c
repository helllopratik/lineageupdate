#include <gtk/gtk.h>

int main(int argc, char *argv[]) {
  GtkWidget *window;
  GtkWidget *button;

  gtk_init(&argc, &argv);

  window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title(GTK_WINDOW(window), "Hello World");
  gtk_window_set_default_size(GTK_WINDOW(window), 300, 200);

  button = gtk_button_new_with_label("Click Me");
  gtk_container_add(GTK_CONTAINER(window), button);

  g_signal_connect(G_OBJECT(button), "clicked", G_CALLBACK(gtk_main_quit), NULL);

  gtk_widget_show_all(window);

  gtk_main();

  return 0;
}
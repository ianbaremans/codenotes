#include <gtk/gtk.h>

static int counter = 0;

void greet(GtkWidget *widget, gpointer data){
	g_print ("Hi There! Welcome to GTK\n");
}

void destroy(GtkWidget *widget, gpointer data){
	gtk_main_quit();
}

int main(int argc, char *argv[]){
	GtkWidget *window;
	GtkWidget *button;
	gtk_init (&argc, &argv);

	window = gtk_window_new(GTK_WINDOW_TOPLEVEL);

	g_signal_connect (window, "destroy", G_CALLBACK(destroy), NULL);
	gtk_container_set_border_width(GTK_CONTAINER(window), 20);

	gtk_widget_show_all(window);

	gtk_main();

	return 0;
}


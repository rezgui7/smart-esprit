#include <gtk/gtk.h>
#include <string.h>
#include <stdlib.h>

void
on_dashboard_button_clicked            (GtkWidget       *button,
                                        gpointer         user_data);

void
on_affiche_button_clicked             (GtkWidget        *button,
                                        gpointer         user_data);

void
on_ajout_button_clicked                (GtkWidget        *button,
                                        gpointer         user_data);

void
on_supprime_button_clicked             (GtkWidget        *button,
                                        gpointer         user_data);

void
on_treeview1_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_retour_button_clicked               (GtkWidget        *button,
                                        gpointer         user_data);

void
on_modifier_button_clicked             (GtkWidget       *button,
                                        gpointer         user_data);


void
on_ok_button_clicked                   (GtkButton       *button,
                                        gpointer         user_data);

void
on_treeview2_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_retour2_clicked                     (GtkButton       *button,
                                        gpointer         user_data);

void
on_button2_clicked                     (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_retour3_clicked              (GtkButton       *button,
                                        gpointer         user_data);

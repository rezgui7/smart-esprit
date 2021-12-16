#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>
#include <string.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "gestion.h"
#include <stdio.h>
#include <stdlib.h>




void
on_dashboard_button_clicked            (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *input1 ;

GtkWidget *gestion_stock;
GtkWidget *fiche_stock;
GtkWidget *treeview1;

gestion_stock=lookup_widget(button,"gestion_stock");
gtk_widget_destroy(gestion_stock);
fiche_stock=create_recherche_stock();

gtk_widget_show(fiche_stock);

treeview1=lookup_widget(fiche_stock,"treeview2");

afficher_alert_stock(treeview1);
}


void
on_affiche_button_clicked             (GtkWidget       *button,
                                        gpointer        user_data)
{



GtkWidget *treeview1;
GtkWidget *gestion_stoc;
GtkWidget *fiche_stock,*fiche_stock1;

gestion_stoc=lookup_widget(button,"gestion_stock");
gtk_widget_destroy(gestion_stoc);
fiche_stock=create_fiche_stock();
fiche_stock1=lookup_widget(button,"fiche_stock");


gtk_widget_show(fiche_stock);
treeview1=lookup_widget(fiche_stock,"treeview1");
affichage (treeview1);




}


void
on_ajout_button_clicked                (GtkWidget        *button,
                                        gpointer         user_data)
{
stockage s;

GtkWidget *gestion_stock;
GtkWidget *input1;
GtkWidget *input2;
GtkWidget *input3;


input1= lookup_widget(button,"spinbutton_id");
input2= lookup_widget(button,"entry1_produit");
input3 = lookup_widget(button,"entry2_quantite");


gestion_stock=lookup_widget(button,"gestion_stock");




s.id=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (input1));
strcpy(s.produit,gtk_entry_get_text(GTK_ENTRY(input2)));
strcpy(s.quantite,gtk_entry_get_text(GTK_ENTRY(input3)));
ajout (s);
}


void
on_supprime_button_clicked             (GtkWidget      *button,
                                        gpointer        user_data)
{
stockage s;
GtkWidget *input1 ;
input1= lookup_widget(button,"supprime_button");
supprission(s);
GtkWidget *gestion_stock;
GtkWidget *fiche_stock;
GtkWidget *treeview1;

gestion_stock=lookup_widget(button,"gestion_stock");
gtk_widget_destroy(gestion_stock);
fiche_stock=lookup_widget(button,"fiche_stock");
fiche_stock=create_fiche_stock();

gtk_widget_show(fiche_stock);

treeview1=lookup_widget(fiche_stock, "treeview1");

affichage(treeview1);
}


void
on_treeview1_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
GtkTreeIter iter;
gchar* prod;
gchar* quant;
gint* identifiant;
stockage s;
GtkTreeModel *model = gtk_tree_view_get_model(treeview);
if (gtk_tree_model_get_iter(model,&iter,path))
{
gtk_tree_model_get (GTK_LIST_STORE(model),&iter,0,&identifiant,1,&prod,2,&quant,-1);
s.id=identifiant;
strcpy(s.produit,prod);
strcpy(s.quantite,quant);
supprission(s);
affichage (treeview);
}
}


void
on_retour_button_clicked               (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *gestion_stock, *fiche_stock;
fiche_stock=lookup_widget(button,"fiche_stock");
gtk_widget_destroy(fiche_stock);
gestion_stock=create_gestion_stock();
gtk_widget_show(gestion_stock);
}



void
on_modifier_button_clicked             (GtkWidget       *button,
                                        gpointer         user_data)
{
stockage s;
GtkWidget *input1 ;
input1= lookup_widget(button,"modifier_button");
GtkWidget *fiche_stock;
GtkWidget *modif_stock;


fiche_stock=lookup_widget(button,"fiche_stock");
gtk_widget_destroy(fiche_stock);
modif_stock=lookup_widget(button,"modif_stock");
modif_stock=create_modif_stock();

gtk_widget_show(modif_stock);



}


void
on_ok_button_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
stockage s;
GtkWidget *sortie;
GtkWidget *fiche_stock;
GtkWidget *input1;
GtkWidget *input2;
GtkWidget *input3;

sortie=lookup_widget(button,"label_affiche");
input1 = lookup_widget(button,"spinbutton_id_modif");
input2 = lookup_widget(button,"nouv_prod");
input3 = lookup_widget(button,"nouv_quantite");
fiche_stock=lookup_widget(button,"fiche_stock");

s.id=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (input1));
strcpy(s.produit,gtk_entry_get_text(GTK_ENTRY(input2)));
strcpy(s.quantite,gtk_entry_get_text(GTK_ENTRY(input3)));


GdkColor color;
gdk_color_parse("green",&color);
gtk_widget_modify_fg(sortie,GTK_STATE_NORMAL,&color);
gtk_label_set_text(GTK_LABEL(sortie),"Modification réuissie");

modifier(s);
}


void
on_treeview2_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
GtkTreeIter iter;
gchar* prod;
gchar* quant;
gint* identifiant;
stockage s;
GtkTreeModel *model = gtk_tree_view_get_model(treeview);
if (gtk_tree_model_get_iter(model,&iter,path)){
gtk_tree_model_get (GTK_LIST_STORE(model),&iter,0,&identifiant,1,&prod,2,&quant,-1);
s.id=identifiant;
strcpy(s.produit,prod);
strcpy(s.quantite,quant);
affichage (treeview);
}
}

void
on_retour2_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *gestion_stock, *recherche_stock;
recherche_stock=lookup_widget(button,"recherche_stock");
gtk_widget_destroy(recherche_stock);
gestion_stock=create_gestion_stock();
gtk_widget_show(gestion_stock);
}


void
on_button2_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{
int tr;
GtkWidget *gestion_stock;
GtkWidget *recherche_stock;
GtkWidget *identifiant;
stockage s;

identifiant=lookup_widget(button,"spinbutton_id");
tr=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (identifiant));

int y;

GtkWidget *input1 ;
input1= lookup_widget(button,"chercher_button");
GtkWidget *treeview2;
gestion_stock=lookup_widget(button,"gestion_stock");
gtk_widget_destroy(gestion_stock);
recherche_stock=lookup_widget(button,"recherche_stock");
recherche_stock=create_recherche_stock();

gtk_widget_show(recherche_stock);

treeview2=lookup_widget(recherche_stock,"treeview2");
afficher_s_chercher(tr,treeview2);


}


void
on_button_retour3_clicked              (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *gestion_stock, *modif_stock;
modif_stock=lookup_widget(button,"modif_stock");
gtk_widget_destroy(modif_stock);
gestion_stock=create_gestion_stock();
gtk_widget_show(gestion_stock);
}


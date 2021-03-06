/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_gestion_stock (void)
{
  GtkWidget *gestion_stock;
  GtkWidget *fixed1;
  GtkWidget *entry1_produit;
  GtkWidget *entry2_quantite;
  GtkWidget *combobox1;
  GtkWidget *quant;
  GtkWidget *label12;
  GtkObject *jour_adj;
  GtkWidget *jour;
  GtkWidget *label14;
  GtkWidget *label15;
  GtkObject *mois_adj;
  GtkWidget *mois;
  GtkWidget *label16;
  GtkObject *annee_adj;
  GtkWidget *annee;
  GtkWidget *label13;
  GtkWidget *dashboard_button;
  GtkWidget *alignment3;
  GtkWidget *hbox3;
  GtkWidget *image3;
  GtkWidget *label6;
  GtkWidget *supprime_button;
  GtkWidget *alignment4;
  GtkWidget *hbox4;
  GtkWidget *image4;
  GtkWidget *label7;
  GtkWidget *ajout_button;
  GtkWidget *alignment1;
  GtkWidget *hbox1;
  GtkWidget *image1;
  GtkWidget *label4;
  GtkWidget *affiche_button;
  GtkWidget *alignment2;
  GtkWidget *hbox2;
  GtkWidget *image2;
  GtkWidget *label5;
  GtkWidget *type;
  GtkWidget *prod;
  GtkWidget *label19;
  GtkObject *spinbutton_id_adj;
  GtkWidget *spinbutton_id;
  GtkWidget *label8;
  GtkWidget *chercher_button;
  GtkWidget *alignment8;
  GtkWidget *hbox8;
  GtkWidget *image8;
  GtkWidget *label22;

  gestion_stock = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (gestion_stock), _("Gestion de stock"));

  fixed1 = gtk_fixed_new ();
  gtk_widget_show (fixed1);
  gtk_container_add (GTK_CONTAINER (gestion_stock), fixed1);

  entry1_produit = gtk_entry_new ();
  gtk_widget_show (entry1_produit);
  gtk_fixed_put (GTK_FIXED (fixed1), entry1_produit, 184, 120);
  gtk_widget_set_size_request (entry1_produit, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry1_produit), 8226);

  entry2_quantite = gtk_entry_new ();
  gtk_widget_show (entry2_quantite);
  gtk_fixed_put (GTK_FIXED (fixed1), entry2_quantite, 184, 168);
  gtk_widget_set_size_request (entry2_quantite, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry2_quantite), 8226);

  combobox1 = gtk_combo_box_new_text ();
  gtk_widget_show (combobox1);
  gtk_fixed_put (GTK_FIXED (fixed1), combobox1, 152, 240);
  gtk_widget_set_size_request (combobox1, 33, 31);

  quant = gtk_label_new (_("Quantite du produit :"));
  gtk_widget_show (quant);
  gtk_fixed_put (GTK_FIXED (fixed1), quant, 16, 168);
  gtk_widget_set_size_request (quant, 144, 33);

  label12 = gtk_label_new (_("Types d'aliments :"));
  gtk_widget_show (label12);
  gtk_fixed_put (GTK_FIXED (fixed1), label12, 16, 240);
  gtk_widget_set_size_request (label12, 128, 33);

  jour_adj = gtk_adjustment_new (1, 1, 31, 1, 10, 10);
  jour = gtk_spin_button_new (GTK_ADJUSTMENT (jour_adj), 1, 0);
  gtk_widget_show (jour);
  gtk_fixed_put (GTK_FIXED (fixed1), jour, 192, 304);
  gtk_widget_set_size_request (jour, 60, 27);

  label14 = gtk_label_new (_("Jour "));
  gtk_widget_show (label14);
  gtk_fixed_put (GTK_FIXED (fixed1), label14, 136, 304);
  gtk_widget_set_size_request (label14, 48, 25);

  label15 = gtk_label_new (_("Mois"));
  gtk_widget_show (label15);
  gtk_fixed_put (GTK_FIXED (fixed1), label15, 280, 304);
  gtk_widget_set_size_request (label15, 49, 25);

  mois_adj = gtk_adjustment_new (1, 1, 12, 1, 10, 10);
  mois = gtk_spin_button_new (GTK_ADJUSTMENT (mois_adj), 1, 0);
  gtk_widget_show (mois);
  gtk_fixed_put (GTK_FIXED (fixed1), mois, 352, 304);
  gtk_widget_set_size_request (mois, 60, 27);

  label16 = gtk_label_new (_("Annee"));
  gtk_widget_show (label16);
  gtk_fixed_put (GTK_FIXED (fixed1), label16, 448, 304);
  gtk_widget_set_size_request (label16, 49, 25);

  annee_adj = gtk_adjustment_new (2021, 2021, 2050, 1, 10, 10);
  annee = gtk_spin_button_new (GTK_ADJUSTMENT (annee_adj), 1, 0);
  gtk_widget_show (annee);
  gtk_fixed_put (GTK_FIXED (fixed1), annee, 536, 304);
  gtk_widget_set_size_request (annee, 60, 27);

  label13 = gtk_label_new (_("Date d'ajout :"));
  gtk_widget_show (label13);
  gtk_fixed_put (GTK_FIXED (fixed1), label13, 8, 296);
  gtk_widget_set_size_request (label13, 128, 40);

  dashboard_button = gtk_button_new ();
  gtk_widget_show (dashboard_button);
  gtk_fixed_put (GTK_FIXED (fixed1), dashboard_button, 336, 360);
  gtk_widget_set_size_request (dashboard_button, 176, 37);

  alignment3 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment3);
  gtk_container_add (GTK_CONTAINER (dashboard_button), alignment3);

  hbox3 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox3);
  gtk_container_add (GTK_CONTAINER (alignment3), hbox3);

  image3 = gtk_image_new_from_stock ("gtk-cut", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image3);
  gtk_box_pack_start (GTK_BOX (hbox3), image3, FALSE, FALSE, 0);

  label6 = gtk_label_new_with_mnemonic (_("Produit en repture"));
  gtk_widget_show (label6);
  gtk_box_pack_start (GTK_BOX (hbox3), label6, FALSE, FALSE, 0);

  supprime_button = gtk_button_new ();
  gtk_widget_show (supprime_button);
  gtk_fixed_put (GTK_FIXED (fixed1), supprime_button, 336, 416);
  gtk_widget_set_size_request (supprime_button, 176, 35);

  alignment4 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment4);
  gtk_container_add (GTK_CONTAINER (supprime_button), alignment4);

  hbox4 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox4);
  gtk_container_add (GTK_CONTAINER (alignment4), hbox4);

  image4 = gtk_image_new_from_stock ("gtk-stop", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image4);
  gtk_box_pack_start (GTK_BOX (hbox4), image4, FALSE, FALSE, 0);

  label7 = gtk_label_new_with_mnemonic (_("Supprimer un produit"));
  gtk_widget_show (label7);
  gtk_box_pack_start (GTK_BOX (hbox4), label7, FALSE, FALSE, 0);

  ajout_button = gtk_button_new ();
  gtk_widget_show (ajout_button);
  gtk_fixed_put (GTK_FIXED (fixed1), ajout_button, 56, 360);
  gtk_widget_set_size_request (ajout_button, 176, 37);

  alignment1 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment1);
  gtk_container_add (GTK_CONTAINER (ajout_button), alignment1);

  hbox1 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox1);
  gtk_container_add (GTK_CONTAINER (alignment1), hbox1);

  image1 = gtk_image_new_from_stock ("gtk-add", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image1);
  gtk_box_pack_start (GTK_BOX (hbox1), image1, FALSE, FALSE, 0);

  label4 = gtk_label_new_with_mnemonic (_("nouveau produit"));
  gtk_widget_show (label4);
  gtk_box_pack_start (GTK_BOX (hbox1), label4, FALSE, FALSE, 0);

  affiche_button = gtk_button_new ();
  gtk_widget_show (affiche_button);
  gtk_fixed_put (GTK_FIXED (fixed1), affiche_button, 56, 416);
  gtk_widget_set_size_request (affiche_button, 176, 37);

  alignment2 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment2);
  gtk_container_add (GTK_CONTAINER (affiche_button), alignment2);

  hbox2 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox2);
  gtk_container_add (GTK_CONTAINER (alignment2), hbox2);

  image2 = gtk_image_new_from_stock ("gtk-goto-last", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image2);
  gtk_box_pack_start (GTK_BOX (hbox2), image2, FALSE, FALSE, 0);

  label5 = gtk_label_new_with_mnemonic (_("Fiche de stock"));
  gtk_widget_show (label5);
  gtk_box_pack_start (GTK_BOX (hbox2), label5, FALSE, FALSE, 0);

  type = gtk_combo_box_new_text ();
  gtk_widget_show (type);
  gtk_fixed_put (GTK_FIXED (fixed1), type, 152, 240);
  gtk_widget_set_size_request (type, 136, 31);
  gtk_combo_box_append_text (GTK_COMBO_BOX (type), _("Fruits"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (type), _("Legumes"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (type), _("Viande, Poisson.."));
  gtk_combo_box_append_text (GTK_COMBO_BOX (type), _("Boissons "));
  gtk_combo_box_append_text (GTK_COMBO_BOX (type), _("Autres.."));

  prod = gtk_label_new (_("Nom du produit :"));
  gtk_widget_show (prod);
  gtk_fixed_put (GTK_FIXED (fixed1), prod, 16, 120);
  gtk_widget_set_size_request (prod, 120, 33);

  label19 = gtk_label_new (_("Id du produit :"));
  gtk_widget_show (label19);
  gtk_fixed_put (GTK_FIXED (fixed1), label19, 16, 72);
  gtk_widget_set_size_request (label19, 128, 25);

  spinbutton_id_adj = gtk_adjustment_new (1, 1, 100, 1, 10, 10);
  spinbutton_id = gtk_spin_button_new (GTK_ADJUSTMENT (spinbutton_id_adj), 1, 0);
  gtk_widget_show (spinbutton_id);
  gtk_fixed_put (GTK_FIXED (fixed1), spinbutton_id, 184, 72);
  gtk_widget_set_size_request (spinbutton_id, 60, 27);

  label8 = gtk_label_new (_("GESTION DE STOCK"));
  gtk_widget_show (label8);
  gtk_fixed_put (GTK_FIXED (fixed1), label8, 224, 8);
  gtk_widget_set_size_request (label8, 208, 72);

  chercher_button = gtk_button_new ();
  gtk_widget_show (chercher_button);
  gtk_fixed_put (GTK_FIXED (fixed1), chercher_button, 208, 472);
  gtk_widget_set_size_request (chercher_button, 152, 40);

  alignment8 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment8);
  gtk_container_add (GTK_CONTAINER (chercher_button), alignment8);

  hbox8 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox8);
  gtk_container_add (GTK_CONTAINER (alignment8), hbox8);

  image8 = gtk_image_new_from_stock ("gtk-help", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image8);
  gtk_box_pack_start (GTK_BOX (hbox8), image8, FALSE, FALSE, 0);

  label22 = gtk_label_new_with_mnemonic (_("Recherche prod"));
  gtk_widget_show (label22);
  gtk_box_pack_start (GTK_BOX (hbox8), label22, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) dashboard_button, "clicked",
                    G_CALLBACK (on_dashboard_button_clicked),
                    NULL);
  g_signal_connect ((gpointer) supprime_button, "clicked",
                    G_CALLBACK (on_supprime_button_clicked),
                    NULL);
  g_signal_connect ((gpointer) ajout_button, "clicked",
                    G_CALLBACK (on_ajout_button_clicked),
                    NULL);
  g_signal_connect ((gpointer) affiche_button, "clicked",
                    G_CALLBACK (on_affiche_button_clicked),
                    NULL);
  g_signal_connect ((gpointer) chercher_button, "clicked",
                    G_CALLBACK (on_button2_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (gestion_stock, gestion_stock, "gestion_stock");
  GLADE_HOOKUP_OBJECT (gestion_stock, fixed1, "fixed1");
  GLADE_HOOKUP_OBJECT (gestion_stock, entry1_produit, "entry1_produit");
  GLADE_HOOKUP_OBJECT (gestion_stock, entry2_quantite, "entry2_quantite");
  GLADE_HOOKUP_OBJECT (gestion_stock, combobox1, "combobox1");
  GLADE_HOOKUP_OBJECT (gestion_stock, quant, "quant");
  GLADE_HOOKUP_OBJECT (gestion_stock, label12, "label12");
  GLADE_HOOKUP_OBJECT (gestion_stock, jour, "jour");
  GLADE_HOOKUP_OBJECT (gestion_stock, label14, "label14");
  GLADE_HOOKUP_OBJECT (gestion_stock, label15, "label15");
  GLADE_HOOKUP_OBJECT (gestion_stock, mois, "mois");
  GLADE_HOOKUP_OBJECT (gestion_stock, label16, "label16");
  GLADE_HOOKUP_OBJECT (gestion_stock, annee, "annee");
  GLADE_HOOKUP_OBJECT (gestion_stock, label13, "label13");
  GLADE_HOOKUP_OBJECT (gestion_stock, dashboard_button, "dashboard_button");
  GLADE_HOOKUP_OBJECT (gestion_stock, alignment3, "alignment3");
  GLADE_HOOKUP_OBJECT (gestion_stock, hbox3, "hbox3");
  GLADE_HOOKUP_OBJECT (gestion_stock, image3, "image3");
  GLADE_HOOKUP_OBJECT (gestion_stock, label6, "label6");
  GLADE_HOOKUP_OBJECT (gestion_stock, supprime_button, "supprime_button");
  GLADE_HOOKUP_OBJECT (gestion_stock, alignment4, "alignment4");
  GLADE_HOOKUP_OBJECT (gestion_stock, hbox4, "hbox4");
  GLADE_HOOKUP_OBJECT (gestion_stock, image4, "image4");
  GLADE_HOOKUP_OBJECT (gestion_stock, label7, "label7");
  GLADE_HOOKUP_OBJECT (gestion_stock, ajout_button, "ajout_button");
  GLADE_HOOKUP_OBJECT (gestion_stock, alignment1, "alignment1");
  GLADE_HOOKUP_OBJECT (gestion_stock, hbox1, "hbox1");
  GLADE_HOOKUP_OBJECT (gestion_stock, image1, "image1");
  GLADE_HOOKUP_OBJECT (gestion_stock, label4, "label4");
  GLADE_HOOKUP_OBJECT (gestion_stock, affiche_button, "affiche_button");
  GLADE_HOOKUP_OBJECT (gestion_stock, alignment2, "alignment2");
  GLADE_HOOKUP_OBJECT (gestion_stock, hbox2, "hbox2");
  GLADE_HOOKUP_OBJECT (gestion_stock, image2, "image2");
  GLADE_HOOKUP_OBJECT (gestion_stock, label5, "label5");
  GLADE_HOOKUP_OBJECT (gestion_stock, type, "type");
  GLADE_HOOKUP_OBJECT (gestion_stock, prod, "prod");
  GLADE_HOOKUP_OBJECT (gestion_stock, label19, "label19");
  GLADE_HOOKUP_OBJECT (gestion_stock, spinbutton_id, "spinbutton_id");
  GLADE_HOOKUP_OBJECT (gestion_stock, label8, "label8");
  GLADE_HOOKUP_OBJECT (gestion_stock, chercher_button, "chercher_button");
  GLADE_HOOKUP_OBJECT (gestion_stock, alignment8, "alignment8");
  GLADE_HOOKUP_OBJECT (gestion_stock, hbox8, "hbox8");
  GLADE_HOOKUP_OBJECT (gestion_stock, image8, "image8");
  GLADE_HOOKUP_OBJECT (gestion_stock, label22, "label22");

  return gestion_stock;
}

GtkWidget*
create_fiche_stock (void)
{
  GtkWidget *fiche_stock;
  GtkWidget *fixed2;
  GtkWidget *treeview1;
  GtkWidget *modifier_button;
  GtkWidget *alignment5;
  GtkWidget *hbox5;
  GtkWidget *image5;
  GtkWidget *label10;
  GtkWidget *retour_button;
  GtkWidget *alignment6;
  GtkWidget *hbox6;
  GtkWidget *image6;
  GtkWidget *label11;
  GtkWidget *label9;

  fiche_stock = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_widget_set_size_request (fiche_stock, 700, 700);
  gtk_window_set_title (GTK_WINDOW (fiche_stock), _("Fiche de stock"));

  fixed2 = gtk_fixed_new ();
  gtk_widget_show (fixed2);
  gtk_container_add (GTK_CONTAINER (fiche_stock), fixed2);

  treeview1 = gtk_tree_view_new ();
  gtk_widget_show (treeview1);
  gtk_fixed_put (GTK_FIXED (fixed2), treeview1, 64, 56);
  gtk_widget_set_size_request (treeview1, 300, 200);

  modifier_button = gtk_button_new ();
  gtk_widget_show (modifier_button);
  gtk_fixed_put (GTK_FIXED (fixed2), modifier_button, 72, 280);
  gtk_widget_set_size_request (modifier_button, 168, 45);

  alignment5 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment5);
  gtk_container_add (GTK_CONTAINER (modifier_button), alignment5);

  hbox5 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox5);
  gtk_container_add (GTK_CONTAINER (alignment5), hbox5);

  image5 = gtk_image_new_from_stock ("gtk-edit", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image5);
  gtk_box_pack_start (GTK_BOX (hbox5), image5, FALSE, FALSE, 0);

  label10 = gtk_label_new_with_mnemonic (_("modifier un produit"));
  gtk_widget_show (label10);
  gtk_box_pack_start (GTK_BOX (hbox5), label10, FALSE, FALSE, 0);

  retour_button = gtk_button_new ();
  gtk_widget_show (retour_button);
  gtk_fixed_put (GTK_FIXED (fixed2), retour_button, 288, 304);
  gtk_widget_set_size_request (retour_button, 82, 37);

  alignment6 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment6);
  gtk_container_add (GTK_CONTAINER (retour_button), alignment6);

  hbox6 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox6);
  gtk_container_add (GTK_CONTAINER (alignment6), hbox6);

  image6 = gtk_image_new_from_stock ("gtk-go-back", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image6);
  gtk_box_pack_start (GTK_BOX (hbox6), image6, FALSE, FALSE, 0);

  label11 = gtk_label_new_with_mnemonic (_("Retour"));
  gtk_widget_show (label11);
  gtk_box_pack_start (GTK_BOX (hbox6), label11, FALSE, FALSE, 0);

  label9 = gtk_label_new (_("FICHE DE STOCK"));
  gtk_widget_show (label9);
  gtk_fixed_put (GTK_FIXED (fixed2), label9, 88, 8);
  gtk_widget_set_size_request (label9, 248, 40);

  g_signal_connect ((gpointer) treeview1, "row_activated",
                    G_CALLBACK (on_treeview1_row_activated),
                    NULL);
  g_signal_connect ((gpointer) modifier_button, "clicked",
                    G_CALLBACK (on_modifier_button_clicked),
                    NULL);
  g_signal_connect ((gpointer) retour_button, "clicked",
                    G_CALLBACK (on_retour_button_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (fiche_stock, fiche_stock, "fiche_stock");
  GLADE_HOOKUP_OBJECT (fiche_stock, fixed2, "fixed2");
  GLADE_HOOKUP_OBJECT (fiche_stock, treeview1, "treeview1");
  GLADE_HOOKUP_OBJECT (fiche_stock, modifier_button, "modifier_button");
  GLADE_HOOKUP_OBJECT (fiche_stock, alignment5, "alignment5");
  GLADE_HOOKUP_OBJECT (fiche_stock, hbox5, "hbox5");
  GLADE_HOOKUP_OBJECT (fiche_stock, image5, "image5");
  GLADE_HOOKUP_OBJECT (fiche_stock, label10, "label10");
  GLADE_HOOKUP_OBJECT (fiche_stock, retour_button, "retour_button");
  GLADE_HOOKUP_OBJECT (fiche_stock, alignment6, "alignment6");
  GLADE_HOOKUP_OBJECT (fiche_stock, hbox6, "hbox6");
  GLADE_HOOKUP_OBJECT (fiche_stock, image6, "image6");
  GLADE_HOOKUP_OBJECT (fiche_stock, label11, "label11");
  GLADE_HOOKUP_OBJECT (fiche_stock, label9, "label9");

  return fiche_stock;
}

GtkWidget*
create_modif_stock (void)
{
  GtkWidget *modif_stock;
  GtkWidget *fixed3;
  GtkWidget *nouv_prod;
  GtkWidget *nouv_quantite;
  GtkWidget *label18;
  GtkWidget *ok_button;
  GtkWidget *label23;
  GtkWidget *label24;
  GtkObject *spinbutton_id_modif_adj;
  GtkWidget *spinbutton_id_modif;
  GtkWidget *label17;
  GtkWidget *label_affiche;
  GtkWidget *button_retour3;
  GtkWidget *alignment9;
  GtkWidget *hbox9;
  GtkWidget *image9;
  GtkWidget *label25;

  modif_stock = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (modif_stock), _("Modifier un produit"));

  fixed3 = gtk_fixed_new ();
  gtk_widget_show (fixed3);
  gtk_container_add (GTK_CONTAINER (modif_stock), fixed3);

  nouv_prod = gtk_entry_new ();
  gtk_widget_show (nouv_prod);
  gtk_fixed_put (GTK_FIXED (fixed3), nouv_prod, 232, 120);
  gtk_widget_set_size_request (nouv_prod, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (nouv_prod), 8226);

  nouv_quantite = gtk_entry_new ();
  gtk_widget_show (nouv_quantite);
  gtk_fixed_put (GTK_FIXED (fixed3), nouv_quantite, 232, 168);
  gtk_widget_set_size_request (nouv_quantite, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (nouv_quantite), 8226);

  label18 = gtk_label_new (_("Quantite du nouveau produit :"));
  gtk_widget_show (label18);
  gtk_fixed_put (GTK_FIXED (fixed3), label18, 16, 160);
  gtk_widget_set_size_request (label18, 200, 40);

  ok_button = gtk_button_new_with_mnemonic (_("ok "));
  gtk_widget_show (ok_button);
  gtk_fixed_put (GTK_FIXED (fixed3), ok_button, 176, 240);
  gtk_widget_set_size_request (ok_button, 66, 29);

  label23 = gtk_label_new (_("Modifier un produit"));
  gtk_widget_show (label23);
  gtk_fixed_put (GTK_FIXED (fixed3), label23, 96, 8);
  gtk_widget_set_size_request (label23, 256, 40);

  label24 = gtk_label_new (_("Id du produit a modifier :"));
  gtk_widget_show (label24);
  gtk_fixed_put (GTK_FIXED (fixed3), label24, 0, 64);
  gtk_widget_set_size_request (label24, 200, 32);

  spinbutton_id_modif_adj = gtk_adjustment_new (1, 1, 100, 1, 10, 10);
  spinbutton_id_modif = gtk_spin_button_new (GTK_ADJUSTMENT (spinbutton_id_modif_adj), 1, 0);
  gtk_widget_show (spinbutton_id_modif);
  gtk_fixed_put (GTK_FIXED (fixed3), spinbutton_id_modif, 232, 64);
  gtk_widget_set_size_request (spinbutton_id_modif, 60, 27);

  label17 = gtk_label_new (_("Nom du produit a modifier :"));
  gtk_widget_show (label17);
  gtk_fixed_put (GTK_FIXED (fixed3), label17, 8, 112);
  gtk_widget_set_size_request (label17, 200, 40);

  label_affiche = gtk_label_new ("");
  gtk_widget_show (label_affiche);
  gtk_fixed_put (GTK_FIXED (fixed3), label_affiche, 16, 280);
  gtk_widget_set_size_request (label_affiche, 424, 120);

  button_retour3 = gtk_button_new ();
  gtk_widget_show (button_retour3);
  gtk_fixed_put (GTK_FIXED (fixed3), button_retour3, 376, 416);
  gtk_widget_set_size_request (button_retour3, 88, 37);

  alignment9 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment9);
  gtk_container_add (GTK_CONTAINER (button_retour3), alignment9);

  hbox9 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox9);
  gtk_container_add (GTK_CONTAINER (alignment9), hbox9);

  image9 = gtk_image_new_from_stock ("gtk-go-back", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image9);
  gtk_box_pack_start (GTK_BOX (hbox9), image9, FALSE, FALSE, 0);

  label25 = gtk_label_new_with_mnemonic (_("Retour"));
  gtk_widget_show (label25);
  gtk_box_pack_start (GTK_BOX (hbox9), label25, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) ok_button, "clicked",
                    G_CALLBACK (on_ok_button_clicked),
                    NULL);
  g_signal_connect ((gpointer) button_retour3, "clicked",
                    G_CALLBACK (on_button_retour3_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (modif_stock, modif_stock, "modif_stock");
  GLADE_HOOKUP_OBJECT (modif_stock, fixed3, "fixed3");
  GLADE_HOOKUP_OBJECT (modif_stock, nouv_prod, "nouv_prod");
  GLADE_HOOKUP_OBJECT (modif_stock, nouv_quantite, "nouv_quantite");
  GLADE_HOOKUP_OBJECT (modif_stock, label18, "label18");
  GLADE_HOOKUP_OBJECT (modif_stock, ok_button, "ok_button");
  GLADE_HOOKUP_OBJECT (modif_stock, label23, "label23");
  GLADE_HOOKUP_OBJECT (modif_stock, label24, "label24");
  GLADE_HOOKUP_OBJECT (modif_stock, spinbutton_id_modif, "spinbutton_id_modif");
  GLADE_HOOKUP_OBJECT (modif_stock, label17, "label17");
  GLADE_HOOKUP_OBJECT (modif_stock, label_affiche, "label_affiche");
  GLADE_HOOKUP_OBJECT (modif_stock, button_retour3, "button_retour3");
  GLADE_HOOKUP_OBJECT (modif_stock, alignment9, "alignment9");
  GLADE_HOOKUP_OBJECT (modif_stock, hbox9, "hbox9");
  GLADE_HOOKUP_OBJECT (modif_stock, image9, "image9");
  GLADE_HOOKUP_OBJECT (modif_stock, label25, "label25");

  return modif_stock;
}

GtkWidget*
create_recherche_stock (void)
{
  GtkWidget *recherche_stock;
  GtkWidget *fixed4;
  GtkWidget *label20;
  GtkWidget *treeview2;
  GtkWidget *retour2;
  GtkWidget *alignment7;
  GtkWidget *hbox7;
  GtkWidget *image7;
  GtkWidget *label21;

  recherche_stock = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_widget_set_size_request (recherche_stock, 600, 600);
  gtk_window_set_title (GTK_WINDOW (recherche_stock), _("recherche de produit"));

  fixed4 = gtk_fixed_new ();
  gtk_widget_show (fixed4);
  gtk_container_add (GTK_CONTAINER (recherche_stock), fixed4);

  label20 = gtk_label_new (_("Resultat du recherche"));
  gtk_widget_show (label20);
  gtk_fixed_put (GTK_FIXED (fixed4), label20, 96, 16);
  gtk_widget_set_size_request (label20, 184, 24);

  treeview2 = gtk_tree_view_new ();
  gtk_widget_show (treeview2);
  gtk_fixed_put (GTK_FIXED (fixed4), treeview2, 48, 64);
  gtk_widget_set_size_request (treeview2, 300, 200);

  retour2 = gtk_button_new ();
  gtk_widget_show (retour2);
  gtk_fixed_put (GTK_FIXED (fixed4), retour2, 328, 288);
  gtk_widget_set_size_request (retour2, 106, 37);

  alignment7 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment7);
  gtk_container_add (GTK_CONTAINER (retour2), alignment7);

  hbox7 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox7);
  gtk_container_add (GTK_CONTAINER (alignment7), hbox7);

  image7 = gtk_image_new_from_stock ("gtk-go-back", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image7);
  gtk_box_pack_start (GTK_BOX (hbox7), image7, FALSE, FALSE, 0);

  label21 = gtk_label_new_with_mnemonic (_("Retour "));
  gtk_widget_show (label21);
  gtk_box_pack_start (GTK_BOX (hbox7), label21, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) treeview2, "row_activated",
                    G_CALLBACK (on_treeview2_row_activated),
                    NULL);
  g_signal_connect ((gpointer) retour2, "clicked",
                    G_CALLBACK (on_retour2_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (recherche_stock, recherche_stock, "recherche_stock");
  GLADE_HOOKUP_OBJECT (recherche_stock, fixed4, "fixed4");
  GLADE_HOOKUP_OBJECT (recherche_stock, label20, "label20");
  GLADE_HOOKUP_OBJECT (recherche_stock, treeview2, "treeview2");
  GLADE_HOOKUP_OBJECT (recherche_stock, retour2, "retour2");
  GLADE_HOOKUP_OBJECT (recherche_stock, alignment7, "alignment7");
  GLADE_HOOKUP_OBJECT (recherche_stock, hbox7, "hbox7");
  GLADE_HOOKUP_OBJECT (recherche_stock, image7, "image7");
  GLADE_HOOKUP_OBJECT (recherche_stock, label21, "label21");

  return recherche_stock;
}


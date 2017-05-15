/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   controller.h
 * Author: nils
 *
 * Created on May 9, 2017, 4:32 PM
 */

#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <gtk/gtk.h>
#include <stdbool.h>
#include "grid.h"
#include <string.h>
#include "gameManagement.h"
#include "generator.h"

gpointer last;
GtkWidget *lastWidget;
Field grid[9][9];
GtkWidget *dialog;


int getI(int nr);
int getJ(int nr);
bool locked(int nr);
bool checkFilled();
bool checkValid();

void callback( GtkWidget *widget, gpointer nr);
void on_key_press (GtkWidget *widget, GdkEventKey *event, gpointer user_data);
void on_press (GtkWidget *widget, GdkEventKey *event, gpointer user_data);

void setKeyNumber(guint keyval);

#endif /* CONTROLLER_H */


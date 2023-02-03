#ifndef USERS_H
#define USERS_H

#include <glib.h>

#include "base/catalog.h"
#include "base/stats.h"
#include "utils/utils.h"

#define MAX_USER_TOKENS 7

typedef struct user *USER;

USER create_user(void);

void build_user(char **user_params, CATALOG catalog, STATS stats);

void set_user_username(USER user, gpointer username);

void set_user_name(USER user, char *name_string);

void set_user_gender(USER user, char *gender_string);

void set_user_birth_date(USER user, char *birth_date_string);

void set_user_account_creation(USER user, char *account_creation_date);

void set_user_account_status(USER user, char *account_status_string);

void set_user_number_of_rides(USER user, int number_of_rides);

void set_user_total_rating(USER user, double total_rating);

void set_user_total_spent(USER user, double total_spent);

void set_user_total_distance(USER user, int total_distance);

void set_user_latest_ride(USER user, int latest_ride_date);

int get_user_username(USER user);

char *get_user_name(USER user);

enum gender get_user_gender(USER user);

int get_user_birth_date(USER user);

int get_user_account_creation(USER user);

enum account_status get_user_account_status(USER user);

int get_user_number_of_rides(USER user);

double get_user_total_rating(USER user);

double get_user_total_spent(USER user);

int get_user_total_distance(USER user);

int get_user_latest_ride(USER user);

void free_user(USER user);

int verify_user_input(char **parameters);

#endif
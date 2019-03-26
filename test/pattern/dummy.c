#include "config.h"
#include <stdbool.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

struct Address;
struct Body;
struct Email;
struct Envelope;
struct Mailbox;
struct Message;
struct Pattern;
struct Progress;
struct State;

bool        g_addr_is_user       = false;
int         g_body_parts         = 1;
bool        g_is_mail_list       = false;
bool        g_is_subscribed_list = false;
const char *g_myvar              = "hello";

int crypt_valid_passphrase(int flags)
{
  return 0;
}

int imap_search(struct Mailbox *m, const struct Pattern *pat)
{
  return -1;
}

bool mutt_addr_is_user(struct Address *addr)
{
  return g_addr_is_user;
}

struct Address *mutt_alias_reverse_lookup(struct Address *a)
{
  return NULL;
}

int mutt_body_handler(struct Body *b, struct State *s)
{
  return -1;
}

void mutt_clear_error(void)
{
}

int mutt_copy_header(FILE *in, struct Email *e, FILE *out, int flags, const char *prefix)
{
  return -1;
}

int mutt_count_body_parts(struct Mailbox *m, struct Email *e)
{
  return g_body_parts;
}

pid_t mutt_create_filter(const char *s, FILE **fp_in, FILE **fp_out, FILE **fp_err)
{
  return -1;
}

int mutt_get_field_full(const char *field, char *buf, size_t buflen,
                        int complete, bool multiple, char ***files, int *numfiles)
{
  return -1;
}

bool mutt_is_mail_list(struct Address *addr)
{
  return g_is_mail_list;
}

bool mutt_is_subscribed_list(struct Address *addr)
{
  return g_is_subscribed_list;
}

void mutt_parse_mime_message(struct Mailbox *m, struct Email *e)
{
}

void mutt_progress_init(struct Progress *progress, const char *msg,
                        unsigned short flags, unsigned short inc, size_t size)
{
}
void mutt_progress_update(struct Progress *progress, long pos, int percent)
{
}

void mutt_set_flag_update(struct Mailbox *m, struct Email *e, int flag, bool bf, bool upd_mbox)
{
}

int mutt_wait_filter(pid_t pid)
{
  return -1;
}

int mx_msg_close(struct Mailbox *m, struct Message **msg)
{
  return 0;
}

struct Message *mx_msg_open(struct Mailbox *m, int msgno)
{
  return NULL;
}

int mx_msg_padding_size(struct Mailbox *m)
{
  return 0;
}

const char *myvar_get(const char *var)
{
  return g_myvar;
}

int url_parse_mailto(struct Envelope *e, char **body, const char *src)
{
  return -1;
}
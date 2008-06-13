/* $Id$
 *
 */

#ifndef _SCREEN_H
#define _SCREEN_H

#include "apt-dater.h"

#define SCREEN_BINARY  "/usr/bin/screen"
#define SCREEN_SDFORMT "%s/S-%s"
#define SCREEN_SOCKDIR "/var/run/screen"
#define SCREEN_SOCKPRE "apt-dater_"

gboolean
screen_get_sessions(HostNode *n);

gchar *screen_new_cmd(const gchar *host, const gchar *user, const gint port);
gboolean screen_connect(const SessNode *s);
gchar *screen_get_dump(const SessNode *s);

static inline gboolean
screen_is_attached(const SessNode *s) {
  if (s->st.st_mode & S_IXUSR)
    return TRUE;

  return FALSE;
}

#endif /* _SCREEN_H */

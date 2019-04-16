#include "syslog-node1.h"
#include <config.h>

#include "syslog-ng-3.6.2/lib/apphook.h"

#include "syslog-ng-3.6.2/lib/tags.h"

#include "syslog-ng-3.6.2/lib/logmsg.h"

#include "syslog-ng-3.6.2/lib/messages.h

#include "syslog-ng-3.6.2/lib/filter-expr.h"

#include "syslog-ng-3.6.2/modules/dbparser/patterndb.h"

#include "syslog-ng-3.6.2/lib/plugin.h"

#include "syslog-ng-3.6.2/lib/cfg.h"

#include "syslog-ng-3.6.2/modules/dbparser/patterndb-int.h"

#undef new
#undef template
#undef class

#include <stdio.h>
#include <sys/time.h>
#include <time.h>
#include <string.h>
#include <glib/gstdio.h>

PatternDB *patterndb;


void match(const gchar *pattern, size_t pattern_len, const gchar *program, size_t program_len)
{
     printf("DD: %d ", program_len);

}


#include <syslog-node1.h>
#include <config.h>
#include <syslog-ng/apphook.h>
//#include "syslog-ng-3.6.2/lib/apphook.h"
#include <syslog-ng/tags.h>
#include <syslog-ng/logmsg.h>
#include <syslog-ng/messages.h>
#include <syslog-ng/filter/filter-expr.h>
#include <modules/dbparser/patterndb.h>
#include <syslog-ng/plugin.h>
#include <syslog-ng/cfg.h>
#include <modules/dbparser/patterndb-int.h>

#undef new
#undef template
#undef class

#include <stdio.h>
#include <sys/time.h>
#include <time.h>
#include <string.h>
#include <glib/gstdio.h>


void match(const gchar *pattern, size_t pattern_len, const gchar *program, size_t program_len)
{
	printf(" Nitish: %d", pattern_len);
}



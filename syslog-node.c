#include "syslog-node1.h"
#include <apphook.h>
//#include "syslog-ng-3.6.2/lib/apphook.h"
#include <logmsg/tags.h>
#include <logmsg/logmsg.h>
#include <messages.h>
#include <filter/filter-expr.h>
#include <modules/dbparser/patterndb.h>
#include <plugin.h>
#include <cfg.h>

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



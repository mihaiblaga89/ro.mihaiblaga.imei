/* C++ code produced by gperf version 3.0.3 */
/* Command-line: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/gperf -L C++ -E -t /private/var/folders/0f/46_msbhx1_x85l5pz3vs8ykw0000gn/T/agprime/imei-generated/KrollGeneratedBindings.gperf  */
/* Computed positions: -k'' */

#line 3 "/private/var/folders/0f/46_msbhx1_x85l5pz3vs8ykw0000gn/T/agprime/imei-generated/KrollGeneratedBindings.gperf"


#include <string.h>
#include <v8.h>
#include <KrollBindings.h>

#include "ro.mihaiblaga.imei.ImeiModule.h"
#include "ro.mihaiblaga.imei.ExampleProxy.h"


#line 14 "/private/var/folders/0f/46_msbhx1_x85l5pz3vs8ykw0000gn/T/agprime/imei-generated/KrollGeneratedBindings.gperf"
struct titanium::bindings::BindEntry;
/* maximum key range = 3, duplicates = 0 */

class ImeiBindings
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static struct titanium::bindings::BindEntry *lookupGeneratedInit (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
ImeiBindings::hash (register const char *str, register unsigned int len)
{
  return len;
}

struct titanium::bindings::BindEntry *
ImeiBindings::lookupGeneratedInit (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 2,
      MIN_WORD_LENGTH = 29,
      MAX_WORD_LENGTH = 31,
      MIN_HASH_VALUE = 29,
      MAX_HASH_VALUE = 31
    };

  static struct titanium::bindings::BindEntry wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""},
#line 16 "/private/var/folders/0f/46_msbhx1_x85l5pz3vs8ykw0000gn/T/agprime/imei-generated/KrollGeneratedBindings.gperf"
      {"ro.mihaiblaga.imei.ImeiModule", ::ro::mihaiblaga::imei::ImeiModule::bindProxy, ::ro::mihaiblaga::imei::ImeiModule::dispose},
      {""},
#line 17 "/private/var/folders/0f/46_msbhx1_x85l5pz3vs8ykw0000gn/T/agprime/imei-generated/KrollGeneratedBindings.gperf"
      {"ro.mihaiblaga.imei.ExampleProxy", ::ro::mihaiblaga::imei::imei::ExampleProxy::bindProxy, ::ro::mihaiblaga::imei::imei::ExampleProxy::dispose}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 18 "/private/var/folders/0f/46_msbhx1_x85l5pz3vs8ykw0000gn/T/agprime/imei-generated/KrollGeneratedBindings.gperf"


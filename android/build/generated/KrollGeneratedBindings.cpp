/* C++ code produced by gperf version 3.0.3 */
/* Command-line: '/Applications/Xcode 2.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/gperf' -L C++ -E -t /private/var/folders/cg/j7njlx5s1c13p3k8dqbkwnwm0000gq/T/harshalhardiya/androidkeychain-generated/KrollGeneratedBindings.gperf  */
/* Computed positions: -k'' */

#line 3 "/private/var/folders/cg/j7njlx5s1c13p3k8dqbkwnwm0000gq/T/harshalhardiya/androidkeychain-generated/KrollGeneratedBindings.gperf"


#include <string.h>
#include <v8.h>
#include <KrollBindings.h>

#include "com.mscripts.androidkeychain.ExampleProxy.h"
#include "com.mscripts.androidkeychain.AndroidkeychainModule.h"


#line 14 "/private/var/folders/cg/j7njlx5s1c13p3k8dqbkwnwm0000gq/T/harshalhardiya/androidkeychain-generated/KrollGeneratedBindings.gperf"
struct titanium::bindings::BindEntry;
/* maximum key range = 10, duplicates = 0 */

class AndroidkeychainBindings
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static struct titanium::bindings::BindEntry *lookupGeneratedInit (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
AndroidkeychainBindings::hash (register const char *str, register unsigned int len)
{
  return len;
}

struct titanium::bindings::BindEntry *
AndroidkeychainBindings::lookupGeneratedInit (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 2,
      MIN_WORD_LENGTH = 41,
      MAX_WORD_LENGTH = 50,
      MIN_HASH_VALUE = 41,
      MAX_HASH_VALUE = 50
    };

  static struct titanium::bindings::BindEntry wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""},
#line 16 "/private/var/folders/cg/j7njlx5s1c13p3k8dqbkwnwm0000gq/T/harshalhardiya/androidkeychain-generated/KrollGeneratedBindings.gperf"
      {"com.mscripts.androidkeychain.ExampleProxy", ::com::mscripts::androidkeychain::androidkeychain::ExampleProxy::bindProxy, ::com::mscripts::androidkeychain::androidkeychain::ExampleProxy::dispose},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 17 "/private/var/folders/cg/j7njlx5s1c13p3k8dqbkwnwm0000gq/T/harshalhardiya/androidkeychain-generated/KrollGeneratedBindings.gperf"
      {"com.mscripts.androidkeychain.AndroidkeychainModule", ::com::mscripts::androidkeychain::AndroidkeychainModule::bindProxy, ::com::mscripts::androidkeychain::AndroidkeychainModule::dispose}
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
#line 18 "/private/var/folders/cg/j7njlx5s1c13p3k8dqbkwnwm0000gq/T/harshalhardiya/androidkeychain-generated/KrollGeneratedBindings.gperf"


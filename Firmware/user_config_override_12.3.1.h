#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

#ifdef CODE_IMAGE_STR
  #undef CODE_IMAGE_STR
#endif
#define CODE_IMAGE_STR "TasmoCompiler-esp82664M"

#ifdef USE_ENERGY_SENSOR
  #undef USE_ENERGY_SENSOR
#endif
#define USE_ENERGY_SENSOR


#ifdef USE_MQTT_TLS
  #undef USE_MQTT_TLS
#endif


#ifdef MY_LANGUAGE
  #undef MY_LANGUAGE
#endif
#define MY_LANGUAGE	fr_FR

#ifdef MODULE
#undef MODULE
#endif
#define MODULE                 USER_MODULE   // [Module] Select default model (the list is kModuleNiceList() in file tasmota_template.h) USER_MODULE is the TEMPLATE

#ifdef FALLBACK_MODULE
#undef FALLBACK_MODULE
#endif
#define FALLBACK_MODULE        USER_MODULE   // to Select the default model as FALLBACK when the user does a RESET 1 

#ifdef USER_TEMPLATE
#undef USER_TEMPLATE
#endif
#define USER_TEMPLATE          "{\"NAME\":\"T-Info\",\"GPIO\":[0,0,0,5152,0,0,0,0,0,1536,0,1472,0,0],\"FLAG\":0,\"BASE\":18}" // [Template] Set JSON template

#ifdef USE_TELEINFO
  #undef USE_TELEINFO
#endif
#define USE_TELEINFO
#endif

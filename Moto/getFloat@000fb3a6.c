
/* android::CameraParameters::getFloat(char const*) const */

undefined4 android::CameraParameters::getFloat(char *param_1)

{
  char *__nptr;
  undefined4 extraout_r0;
  
  __nptr = (char *)get(param_1);
  if (__nptr != (char *)0x0) {
    strtof(__nptr,(char **)0x0);
    return extraout_r0;
  }
  return 0xbf800000;
}


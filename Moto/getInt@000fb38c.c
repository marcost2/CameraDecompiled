
/* android::CameraParameters::getInt(char const*) const */

long android::CameraParameters::getInt(char *param_1)

{
  char *__nptr;
  long lVar1;
  
  __nptr = (char *)get(param_1);
  if (__nptr != (char *)0x0) {
    lVar1 = strtol(__nptr,(char **)0x0,0);
    return lVar1;
  }
  return -1;
}


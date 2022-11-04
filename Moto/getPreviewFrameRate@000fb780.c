
/* android::CameraParameters::getPreviewFrameRate() const */

long __thiscall android::CameraParameters::getPreviewFrameRate(CameraParameters *this)

{
  char *__nptr;
  long lVar1;
  
  __nptr = (char *)get((char *)this);
  if (__nptr != (char *)0x0) {
    lVar1 = strtol(__nptr,(char **)0x0,0);
    return lVar1;
  }
  return -1;
}


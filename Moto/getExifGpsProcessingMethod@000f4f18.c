
/* qcamera::QCameraParameters::getExifGpsProcessingMethod(char*, unsigned int&) */

undefined4 __thiscall
qcamera::QCameraParameters::getExifGpsProcessingMethod
          (QCameraParameters *this,char *param_1,uint *param_2)

{
  char *__s;
  size_t sVar1;
  uint uVar2;
  
  __s = (char *)android::CameraParameters::get((char *)this);
  if (__s != (char *)0x0) {
    *(undefined8 *)param_1 = *(undefined8 *)(DAT_000f4f68 + 0xf4f36);
    *param_2 = 8;
    strlcpy(param_1 + 8,__s,0x21);
    sVar1 = strlen(__s);
    uVar2 = *param_2;
    *param_2 = uVar2 + sVar1 + 1;
    param_1[uVar2 + sVar1] = '\0';
    return 0;
  }
  return 0xffffffea;
}



/* qcamera::QCameraParameters::getExifIsoSpeed() */

undefined4 __thiscall qcamera::QCameraParameters::getExifIsoSpeed(QCameraParameters *this)

{
  char *__s2;
  int iVar1;
  
  __s2 = (char *)android::CameraParameters::get((char *)this);
  if (__s2 != (char *)0x0) {
    iVar1 = strcmp(*(char **)(DAT_000f4ef0 + 0xf4e0a),__s2);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = strcmp(*(char **)(DAT_000f4ef4 + 0xf4e18),__s2);
      if (iVar1 == 0) {
        iVar1 = 1;
      }
      else {
        iVar1 = strcmp(*(char **)(DAT_000f4efc + 0xf4e26),__s2);
        if (iVar1 == 0) {
          iVar1 = 2;
        }
        else {
          iVar1 = strcmp(*(char **)(DAT_000f4f00 + 0xf4e34),__s2);
          if (iVar1 == 0) {
            iVar1 = 3;
          }
          else {
            iVar1 = strcmp(*(char **)(DAT_000f4f04 + 0xf4e42),__s2);
            if (iVar1 == 0) {
              iVar1 = 4;
            }
            else {
              iVar1 = strcmp(*(char **)(DAT_000f4f08 + 0xf4e50),__s2);
              if (iVar1 == 0) {
                iVar1 = 5;
              }
              else {
                iVar1 = strcmp(*(char **)(DAT_000f4f0c + 0xf4e5e),__s2);
                if (iVar1 == 0) {
                  iVar1 = 6;
                }
                else {
                  iVar1 = strcmp(*(char **)(DAT_000f4f10 + 0xf4e6c),__s2);
                  if (iVar1 == 0) {
                    iVar1 = 7;
                  }
                  else {
                    iVar1 = strcmp(*(char **)(DAT_000f4f14 + 0xf4e7a),__s2);
                    if (iVar1 != 0) {
                      return 0;
                    }
                    iVar1 = 8;
                  }
                }
              }
            }
          }
        }
      }
    }
    switch(*(undefined4 *)(*(int *)(DAT_000f4ef8 + 0xf4ea8) + iVar1 * 8 + 4)) {
    case 1:
      return 1;
    case 2:
      return 0x32;
    case 3:
      return 100;
    case 4:
      return 200;
    case 5:
      return 400;
    case 6:
      return 800;
    case 7:
      return 0x640;
    case 8:
      return 0xc80;
    }
  }
  return 0;
}


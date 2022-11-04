
/* android::CameraParameters::getPreviewSize(int*, int*) const */

void __thiscall
android::CameraParameters::getPreviewSize(CameraParameters *this,int *param_1,int *param_2)

{
  char *__nptr;
  long lVar1;
  long lVar2;
  int *piVar3;
  char *local_20;
  int local_1c;
  
  piVar3 = *(int **)(DAT_000fb4dc + 0xfb478);
  local_1c = *piVar3;
  *param_2 = -1;
  *param_1 = -1;
  __nptr = (char *)get((char *)this);
  if (__nptr != (char *)0x0) {
    lVar1 = strtol(__nptr,&local_20,10);
    if (*local_20 == 'x') {
      lVar2 = strtol(local_20 + 1,&local_20,10);
      *param_1 = lVar1;
      *param_2 = lVar2;
    }
    else {
      __android_log_print(6,DAT_000fb4e4 + 0xfb4c4,DAT_000fb4e8 + 0xfb4c6,0x78,__nptr);
    }
  }
  if (*piVar3 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


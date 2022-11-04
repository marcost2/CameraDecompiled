
/* android::CameraParameters::getPreviewFpsRange(int*, int*) const */

void __thiscall
android::CameraParameters::getPreviewFpsRange(CameraParameters *this,int *param_1,int *param_2)

{
  char *__nptr;
  long lVar1;
  long lVar2;
  int *piVar3;
  char *pcStack32;
  int iStack28;
  
  piVar3 = *(int **)(DAT_000fb818 + 0xfb7b4);
  iStack28 = *piVar3;
  *param_2 = -1;
  *param_1 = -1;
  __nptr = (char *)get((char *)this);
  if (__nptr != (char *)0x0) {
    lVar1 = strtol(__nptr,&pcStack32,10);
    if (*pcStack32 == ',') {
      lVar2 = strtol(pcStack32 + 1,&pcStack32,10);
      *param_1 = lVar1;
      *param_2 = lVar2;
    }
    else {
      __android_log_print(6,DAT_000fb820 + 0xfb800,DAT_000fb824 + 0xfb802,0x2c,__nptr);
    }
  }
  if (*piVar3 == iStack28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


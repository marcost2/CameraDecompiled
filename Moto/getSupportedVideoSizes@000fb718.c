
/* android::CameraParameters::getSupportedVideoSizes(android::Vector<android::Size>&) const */

void __thiscall
android::CameraParameters::getSupportedVideoSizes(CameraParameters *this,Vector *param_1)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  char *__nptr;
  char *__nptr_00;
  int *piVar4;
  char *pcStack40;
  long lStack36;
  int iStack32;
  
  __nptr = (char *)get((char *)this);
  piVar4 = *(int **)(DAT_000fb634 + 0xfb59e);
  iStack32 = *piVar4;
  if (__nptr != (char *)0x0) {
    pcVar2 = (char *)strtol(__nptr,&pcStack40,10);
    __nptr_00 = __nptr;
    if (*pcStack40 == 'x') {
      do {
        lVar3 = strtol(pcStack40 + 1,&pcStack40,10);
        pcVar1 = pcStack40;
        if (*pcStack40 != '\0' && *pcStack40 != ',') goto LAB_000fb610;
        pcStack40 = pcVar2;
        lStack36 = lVar3;
        android::VectorImpl::push(param_1);
        __nptr_00 = pcVar1 + 1;
        if (*pcVar1 == '\0') goto LAB_000fb620;
        pcVar2 = (char *)strtol(__nptr_00,&pcStack40,10);
      } while (*pcStack40 == 'x');
    }
    __android_log_print(6,DAT_000fb638 + 0xfb60c,DAT_000fb63c + 0xfb60e,0x78,__nptr_00);
LAB_000fb610:
    __android_log_print(6,DAT_000fb640 + 0xfb61c,DAT_000fb644 + 0xfb61e,__nptr);
  }
LAB_000fb620:
  if (*piVar4 == iStack32) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


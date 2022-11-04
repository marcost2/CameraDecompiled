
/* android::CameraParameters::getSupportedPictureSizes(android::Vector<android::Size>&) const */

void android::CameraParameters::getSupportedPictureSizes(Vector *param_1)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  char *__nptr;
  void *in_r1;
  char *__nptr_00;
  int *piVar4;
  char *local_28;
  long lStack36;
  int local_20;
  
  __nptr = (char *)get((char *)param_1);
  piVar4 = *(int **)(DAT_000fb634 + 0xfb59e);
  local_20 = *piVar4;
  if (__nptr != (char *)0x0) {
    pcVar2 = (char *)strtol(__nptr,&local_28,10);
    __nptr_00 = __nptr;
    if (*local_28 == 'x') {
      do {
        lVar3 = strtol(local_28 + 1,&local_28,10);
        pcVar1 = local_28;
        if (*local_28 != '\0' && *local_28 != ',') goto LAB_000fb610;
        local_28 = pcVar2;
        lStack36 = lVar3;
        android::VectorImpl::push(in_r1);
        __nptr_00 = pcVar1 + 1;
        if (*pcVar1 == '\0') goto LAB_000fb620;
        pcVar2 = (char *)strtol(__nptr_00,&local_28,10);
      } while (*local_28 == 'x');
    }
    __android_log_print(6,DAT_000fb638 + 0xfb60c,DAT_000fb63c + 0xfb60e,0x78,__nptr_00);
LAB_000fb610:
    __android_log_print(6,DAT_000fb640 + 0xfb61c,DAT_000fb644 + 0xfb61e,__nptr);
  }
LAB_000fb620:
  if (*piVar4 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


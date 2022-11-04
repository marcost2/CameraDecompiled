
/* qcamera::QCameraParameters::parseSizesList(char const*, android::Vector<android::Size>&) */

void __thiscall
qcamera::QCameraParameters::parseSizesList(QCameraParameters *this,char *param_1,Vector *param_2)

{
  int *piVar1;
  char *pcVar2;
  long unaff_r4;
  char *pcVar3;
  char *__nptr;
  char *unaff_r10;
  int iVar4;
  char *local_30;
  long lStack44;
  int local_28;
  
  piVar1 = *(int **)(DAT_000f0af0 + 0xf0a3e);
  local_28 = *piVar1;
  if (param_1 != (char *)0x0) {
    iVar4 = *(int *)(DAT_000f0af4 + 0xf0a54);
    __nptr = param_1;
    do {
      pcVar2 = (char *)strtol(__nptr,&local_30,10);
      if (*local_30 == 'x') {
        unaff_r4 = strtol(local_30 + 1,&local_30,10);
        pcVar3 = local_30;
        unaff_r10 = pcVar2;
      }
      else {
        pcVar3 = __nptr;
        if (*(int *)(iVar4 + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000f0afc + 0xf0a9c,0x1c39,DAT_000f0af8 + 0xf0a8e,0x78,__nptr);
        }
      }
      if (*pcVar3 != '\0' && *pcVar3 != ',') {
        if (*(int *)(iVar4 + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000f0b04 + 0xf0ada,0x1c62,DAT_000f0b00 + 0xf0ad0,param_1);
        }
        break;
      }
      local_30 = unaff_r10;
      lStack44 = unaff_r4;
      android::VectorImpl::push(param_2);
      __nptr = pcVar3 + 1;
    } while (*pcVar3 != '\0');
  }
  if (*piVar1 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


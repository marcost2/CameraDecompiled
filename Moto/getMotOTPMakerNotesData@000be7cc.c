
/* qcamera::QCamera2HardwareInterface::getMotOTPMakerNotesData(qcamera::MotMakernote&) */

void __thiscall
qcamera::QCamera2HardwareInterface::getMotOTPMakerNotesData
          (QCamera2HardwareInterface *this,MotMakernote *param_1)

{
  char *__s;
  int iVar1;
  size_t sVar2;
  tm *__tp;
  int *piVar3;
  char acStack120 [92];
  int local_1c;
  
  piVar3 = *(int **)(DAT_000be9a4 + 0xbe7de);
  local_1c = *piVar3;
  __s = (char *)QCameraParametersIntf::getModuleInfo((QCameraParametersIntf *)(this + 0x4ac));
  FUN_000be9c0(acStack120,0x5c,DAT_000be9a8 + 0xbe7fa,*(undefined4 *)(__s + 0x24));
  iVar1 = __strlen_chk(acStack120,0x5c);
  iVar1 = MotMakernote::addTag(param_1,0x6700,2,iVar1 + 1,acStack120);
  if (iVar1 == 0) {
    FUN_000be9c0(acStack120,0x5c,DAT_000be9ac + 0xbe824,*(undefined4 *)(__s + 0x14));
    iVar1 = __strlen_chk(acStack120,0x5c);
    iVar1 = MotMakernote::addTag(param_1,0x6701,2,iVar1 + 1,acStack120);
    if (iVar1 == 0) {
      FUN_000be9c0(acStack120,0x5c,DAT_000be9b0 + 0xbe84c,(uint)*(ushort *)(__s + 10));
      iVar1 = __strlen_chk(acStack120,0x5c);
      iVar1 = MotMakernote::addTag(param_1,0x6702,2,iVar1 + 1,acStack120);
      if (iVar1 == 0) {
        sVar2 = strlen(__s);
        iVar1 = MotMakernote::addTag(param_1,0x6703,2,sVar2 + 1,__s);
        if (iVar1 == 0) {
          sVar2 = strlen(__s + 3);
          iVar1 = MotMakernote::addTag(param_1,0x6704,2,sVar2 + 1,__s + 3);
          if (iVar1 == 0) {
            if (*(int *)(__s + 0x20) != 0) {
              __tp = localtime((time_t *)(__s + 0x20));
              strftime(acStack120,0x5c,(char *)(DAT_000be9b4 + 0xbe8c8),__tp);
              iVar1 = __strlen_chk(acStack120,0x5c);
              iVar1 = MotMakernote::addTag(param_1,0x6705,2,iVar1 + 1,acStack120);
              if (iVar1 != 0) goto LAB_000be89e;
            }
            FUN_000be9c0(acStack120,0x5c,DAT_000be9b8 + 0xbe8f2,*(undefined4 *)(__s + 0x18));
            iVar1 = __strlen_chk(acStack120,0x5c);
            iVar1 = MotMakernote::addTag(param_1,0x6707,2,iVar1 + 1,acStack120);
            if (iVar1 == 0) {
              FUN_000be9c0(acStack120,0x5c,DAT_000be9bc + 0xbe91c,(uint)*(ushort *)(__s + 6));
              iVar1 = __strlen_chk(acStack120,0x5c);
              iVar1 = MotMakernote::addTag(param_1,0x6706,2,iVar1 + 1,acStack120);
              if ((((iVar1 == 0) &&
                   (iVar1 = MotMakernote::addTag(param_1,0x6708,3,1,__s + 0xe), iVar1 == 0)) &&
                  (iVar1 = MotMakernote::addTag(param_1,0x6709,3,1,__s + 0xc), iVar1 == 0)) &&
                 (iVar1 = MotMakernote::addTag(param_1,0x670a,3,1,__s + 0x10), iVar1 == 0)) {
                iVar1 = MotMakernote::addTag(param_1,0x670c,4,1,__s + 0x1c);
                if (iVar1 != 0) {
                  iVar1 = -1;
                }
                goto LAB_000be8a2;
              }
            }
          }
        }
      }
    }
  }
LAB_000be89e:
  iVar1 = -1;
LAB_000be8a2:
  if (*piVar3 != local_1c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1);
  }
  return;
}


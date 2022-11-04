
/* qcamera::QCamera2HardwareInterface::updateParameters(char const*, bool&) */

undefined4 __thiscall
qcamera::QCamera2HardwareInterface::updateParameters
          (QCamera2HardwareInterface *this,char *param_1,bool *param_2)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  QCameraParametersIntf *this_00;
  int *piVar5;
  int local_40 [5];
  String8 aSStack44 [4];
  String8 aSStack40 [4];
  String8 aSStack36 [4];
  int local_20;
  
  piVar5 = *(int **)(DAT_000bd8d4 + 0xbd77c);
  local_20 = *piVar5;
  pcVar1 = (char *)android::String8::String8(aSStack40,param_1);
  iVar2 = android::String8::find(pcVar1,DAT_000bd8d8 + 0xbd792);
  if (-1 < iVar2) {
    android::String8::String8(aSStack36);
    android::SortedVectorImpl::SortedVectorImpl((SortedVectorImpl *)local_40,8,0);
    local_40[0] = *(int *)(DAT_000bd8dc + 0xbd7b4) + 8;
    android::String8::String8(aSStack44,aSStack36);
    android::String8::_String8(aSStack36);
    android::CameraParameters::unflatten((CameraParameters *)local_40,aSStack40);
    pcVar1 = (char *)android::CameraParameters::get((char *)local_40);
    pcVar3 = (char *)android::CameraParameters::get((char *)local_40);
    if (pcVar1 != (char *)0x0) {
      iVar2 = QCameraParametersIntf::forceInitBatchUpdate((QCameraParametersIntf *)(this + 0x4ac));
      if (iVar2 == 0) {
        iVar2 = doFactoryCmd(this,pcVar1,pcVar3);
        if (iVar2 != 0) {
          QCameraParametersIntf::cancelParameterChanges((QCameraParametersIntf *)(this + 0x4ac));
          goto LAB_000bd8a8;
        }
        uVar4 = 0;
      }
      else {
        __android_log_print(6,DAT_000bd8e8 + 0xbd802,DAT_000bd8ec + 0xbd804,DAT_000bd8f0 + 0xbd806);
LAB_000bd8a8:
        uVar4 = 0xffffffff;
      }
      android::CameraParameters::_CameraParameters((CameraParameters *)local_40);
      goto LAB_000bd8b2;
    }
    android::CameraParameters::_CameraParameters((CameraParameters *)local_40);
  }
  this_00 = (QCameraParametersIntf *)(this + 0x4ac);
  uVar4 = QCameraParametersIntf::updateParameters(this_00,aSStack40,param_2);
  this[0x1e0c] = (QCamera2HardwareInterface)*param_2;
  if (*(QCameraChannel **)(this + 0x9b4) != (QCameraChannel *)0x0) {
    QCameraChannel::UpdateStreamBasedParameters(*(QCameraChannel **)(this + 0x9b4),this_00);
  }
  if (*(QCameraChannel **)(this + 0x9b8) != (QCameraChannel *)0x0) {
    QCameraChannel::UpdateStreamBasedParameters(*(QCameraChannel **)(this + 0x9b8),this_00);
  }
  if (*(QCameraChannel **)(this + 0x9bc) != (QCameraChannel *)0x0) {
    QCameraChannel::UpdateStreamBasedParameters(*(QCameraChannel **)(this + 0x9bc),this_00);
  }
  if (*(QCameraChannel **)(this + 0x9c0) != (QCameraChannel *)0x0) {
    QCameraChannel::UpdateStreamBasedParameters(*(QCameraChannel **)(this + 0x9c0),this_00);
  }
  if (*(QCameraChannel **)(this + 0x9c4) != (QCameraChannel *)0x0) {
    QCameraChannel::UpdateStreamBasedParameters(*(QCameraChannel **)(this + 0x9c4),this_00);
  }
  if (*(QCameraChannel **)(this + 0x9c8) != (QCameraChannel *)0x0) {
    QCameraChannel::UpdateStreamBasedParameters(*(QCameraChannel **)(this + 0x9c8),this_00);
  }
  if (*(QCameraChannel **)(this + 0x9cc) != (QCameraChannel *)0x0) {
    QCameraChannel::UpdateStreamBasedParameters(*(QCameraChannel **)(this + 0x9cc),this_00);
  }
  if (*(QCameraChannel **)(this + 0x9d0) != (QCameraChannel *)0x0) {
    QCameraChannel::UpdateStreamBasedParameters(*(QCameraChannel **)(this + 0x9d0),this_00);
  }
  if (*(QCameraChannel **)(this + 0x9d4) != (QCameraChannel *)0x0) {
    QCameraChannel::UpdateStreamBasedParameters(*(QCameraChannel **)(this + 0x9d4),this_00);
  }
LAB_000bd8b2:
  android::String8::_String8(aSStack40);
  if (*piVar5 == local_20) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


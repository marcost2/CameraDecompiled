
/* qcamera::QCamera3YUVChannel::reprocessCbRoutine(native_handle const**, unsigned int) */

void __thiscall
qcamera::QCamera3YUVChannel::reprocessCbRoutine
          (QCamera3YUVChannel *this,native_handle **param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined8 uVar9;
  int local_4c;
  int iStack72;
  uint local_44;
  undefined4 local_38;
  native_handle **ppnStack52;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack40;
  int local_24;
  
  piVar7 = *(int **)(DAT_000a2924 + 0xa27ba);
  local_24 = *piVar7;
  iVar6 = *(int *)(DAT_000a2928 + 0xa27c8);
  if (*(int *)(iVar6 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000a2930 + 0xa27ea,0xd66,DAT_000a292c + 0xa27dc,param_2,this[0x3171]
                       );
  }
  android::VectorImpl::VectorImpl((VectorImpl *)&local_4c,4,7);
  iVar8 = *(int *)(DAT_000a2934 + 0xa27fe) + 8;
  local_4c = iVar8;
  uVar1 = QCamera3StreamMem::getHeapBufferIndex((QCamera3StreamMem *)(this + 0x6b0),param_2);
  if (0x7fffffff < uVar1) {
    uVar9 = QCamera3ProcessingChannel::releaseOfflineMemory
                      ((QCamera3ProcessingChannel *)this,param_2);
    iVar3 = (int)((ulonglong)uVar9 >> 0x20);
    iVar2 = (int)uVar9;
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar6 + 0x20);
    }
    if (iVar2 != 0 && iVar3 != 0) {
      mm_camera_debug_log(1,1,DAT_000a293c + 0xa283e,0xd6e,DAT_000a2938 + 0xa2832,iVar2);
    }
    if (*(code **)(this + 0x60) != (code *)0x0) {
      (**(code **)(this + 0x60))(0,0,param_2,1,*(undefined4 *)(this + 4));
    }
  }
  if ((this[0x3171] == (QCamera3YUVChannel)0x0) ||
     (iVar3 = handleOfflinePpCallback(this,param_2,(Vector *)&local_4c), iVar3 == 0)) {
    local_38 = *(undefined4 *)(this + 0x14e0);
    local_2c = 0xffffffff;
    uStack40 = 0xffffffff;
    local_30 = 0;
    ppnStack52 = param_1;
    if (*(code **)(this + 0x60) != (code *)0x0) {
      (**(code **)(this + 0x60))(0,&local_38,param_2,0,*(undefined4 *)(this + 4));
    }
    if (*(int *)(iVar6 + 0x34) != 0) {
      mm_camera_debug_log(1,6,DAT_000a294c + 0xa28c6,0xd81,DAT_000a2948 + 0xa28ba,local_44);
    }
    if (local_44 != 0) {
      uVar1 = 0;
      do {
        QCamera3ProcessingChannel::streamCbRoutine
                  ((QCamera3ProcessingChannel *)this,
                   *(mm_camera_super_buf_t **)(iStack72 + uVar1 * 4),
                   *(QCamera3Stream **)(this + 0x24));
        uVar1 = uVar1 + 1;
      } while (uVar1 < local_44);
    }
    if (*(int *)(iVar6 + 0x2c) == 0) goto LAB_000a28fe;
    uVar4 = 4;
    uVar5 = 0xd86;
    iVar6 = DAT_000a2950 + 0xa28f4;
    iVar3 = DAT_000a2954 + 0xa28fc;
  }
  else {
    if (*(int *)(iVar6 + 0x34) == 0) goto LAB_000a28fe;
    uVar5 = 0xd79;
    iVar6 = DAT_000a2940 + 0xa2876;
    uVar4 = 6;
    iVar3 = DAT_000a2944 + 0xa2882;
  }
  mm_camera_debug_log(1,uVar4,iVar3,uVar5,iVar6);
LAB_000a28fe:
  local_4c = iVar8;
  android::VectorImpl::finish_vector();
  android::VectorImpl::_VectorImpl((VectorImpl *)&local_4c);
  if (*piVar7 != local_24) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


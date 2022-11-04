
/* qcamera::QCameraStream::mapNewBuffer(unsigned int) */

uint __thiscall qcamera::QCameraStream::mapNewBuffer(QCameraStream *this,uint param_1)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  cam_buf_map_type_list acStack2084 [2052];
  int local_20;
  
  piVar6 = *(int **)(DAT_000d1284 + 0xd1140);
  local_20 = *piVar6;
  iVar5 = *(int *)(DAT_000d1288 + 0xd1150);
  if (*(int *)(iVar5 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000d1290 + 0xd116a,0x5d7,DAT_000d128c + 0xd1160,param_1);
  }
  if (*(QCameraMemory **)(this + 0x10c) == (QCameraMemory *)0x0) {
    if (*(int *)(iVar5 + 0x20) == 0) {
LAB_000d1212:
      uVar1 = 0xffffffda;
      goto LAB_000d1268;
    }
    uVar4 = 0x5dc;
    iVar5 = DAT_000d1294 + 0xd11a8;
    iVar3 = DAT_000d1298 + 0xd11b0;
  }
  else {
    uVar1 = QCameraMemory::getSize(*(QCameraMemory **)(this + 0x10c),param_1);
    if (uVar1 != 0xffffffb5) {
      iVar3 = QCameraMemory::getFd(*(QCameraMemory **)(this + 0x10c),param_1);
      pvVar2 = (void *)(**(code **)(**(int **)(this + 0x10c) + 0x24))
                                 (*(int **)(this + 0x10c),param_1);
      uVar1 = QCameraBufferMaps::makeSingletonBufMapList
                        (3,0,param_1,-1,0,iVar3,uVar1,acStack2084,pvVar2);
      if (uVar1 == 0) {
        uVar1 = (**(code **)(this + 0x2ec))(acStack2084,*(undefined4 *)(this + 0x2f4));
        if (0x7fffffff < uVar1) goto LAB_000d122c;
LAB_000d11f6:
        QCameraMemory::getBufDef
                  (*(QCameraMemory **)(this + 0x10c),(cam_frame_len_offset_t *)(this + 0x120),
                   (mm_camera_buf_def *)(param_1 * 0x218 + *(int *)(this + 0x118)),param_1);
      }
      else {
        if (-1 < (int)uVar1) goto LAB_000d11f6;
LAB_000d122c:
        if (*(int *)(iVar5 + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000d12a8 + 0xd1246,0x5f0,DAT_000d12a4 + 0xd123c,uVar1);
        }
        uVar1 = 0xffffffda;
      }
      if (*(int *)(iVar5 + 0x28) != 0) {
        mm_camera_debug_log(1,3,DAT_000d12b0 + 0xd1266,0x5f6,DAT_000d12ac + 0xd125c,uVar1);
      }
      goto LAB_000d1268;
    }
    if (*(int *)(iVar5 + 0x20) == 0) goto LAB_000d1212;
    uVar4 = 0x5e2;
    iVar5 = DAT_000d129c + 0xd1190;
    iVar3 = DAT_000d12a0 + 0xd1198;
  }
  mm_camera_debug_log(1,1,iVar3,uVar4,iVar5);
  uVar1 = 0xffffffda;
LAB_000d1268:
  if (*piVar6 == local_20) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* qcamera::QCameraStream::mapBufs(qcamera::QCameraMemory*, cam_mapping_buf_type,
   mm_camera_map_unmap_ops_tbl_t*) */

uint qcamera::QCameraStream::mapBufs
               (QCameraMemory *param_1,cam_mapping_buf_type param_2,
               mm_camera_map_unmap_ops_tbl_t *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  cam_buf_map_type_list acStack4144 [2052];
  QCameraBufferMaps aQStack2092 [2056];
  
  piVar1 = *(int **)(DAT_000d0094 + 0xcff3c);
  iVar2 = *piVar1;
  QCameraBufferMaps::QCameraBufferMaps(aQStack2092);
  iVar3 = QCameraMemory::getCnt((QCameraMemory *)param_2);
  if (iVar3 != 0) {
    uVar8 = 0;
    do {
      uVar4 = QCameraMemory::getSize((QCameraMemory *)param_2,uVar8);
      if (uVar4 == 0xffffffb5) {
        if (*(int *)(*(int *)(DAT_000d0098 + 0xcfffa) + 0x20) != 0) {
          uVar7 = 0x260;
          iVar3 = DAT_000d009c + 0xd000a;
          iVar6 = DAT_000d00a0 + 0xd0012;
LAB_000d002e:
          mm_camera_debug_log(1,1,iVar6,uVar7,iVar3);
        }
        goto LAB_000d006e;
      }
      uVar9 = *(uint *)(param_1 + 0x68);
      iVar3 = QCameraMemory::getFd((QCameraMemory *)param_2,uVar8);
      pvVar5 = (void *)(**(code **)(*(int *)param_2 + 0x24))(param_2,uVar8);
      iVar3 = QCameraBufferMaps::enqueue
                        (aQStack2092,(cam_mapping_buf_type)param_3,uVar9,uVar8,-1,0,iVar3,uVar4,
                         pvVar5);
      if (iVar3 < 0) {
        if (*(int *)(*(int *)(DAT_000d00a4 + 0xd0018) + 0x20) != 0) {
          uVar7 = 0x268;
          iVar3 = DAT_000d00a8 + 0xd0028;
          iVar6 = DAT_000d00ac + 0xd0030;
          goto LAB_000d002e;
        }
        goto LAB_000d006e;
      }
      uVar8 = uVar8 + 1;
      uVar4 = QCameraMemory::getCnt((QCameraMemory *)param_2);
    } while (uVar8 < uVar4);
  }
  iVar3 = QCameraBufferMaps::getCamBufMapList(aQStack2092,acStack4144);
  if (iVar3 < 0) {
    if (*(int *)(*(int *)(DAT_000d00b0 + 0xcffd6) + 0x20) != 0) {
      uVar7 = 0x270;
      iVar3 = DAT_000d00b4 + 0xcffec;
      iVar6 = DAT_000d00b8 + 0xcfff4;
LAB_000d006a:
      mm_camera_debug_log(1,1,iVar6,uVar7,iVar3);
    }
  }
  else {
    if (*(code **)(param_1 + 0x2ec) == (code *)0x0) {
      uVar8 = (**(code **)(*(int *)(param_1 + 0x6c) + 0x54))
                        (*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100),acStack4144)
      ;
    }
    else {
      uVar8 = (**(code **)(param_1 + 0x2ec))(acStack4144,*(undefined4 *)(param_1 + 0x2f4));
    }
    if (uVar8 < 0x80000000) goto LAB_000d0072;
    if (*(int *)(*(int *)(DAT_000d00bc + 0xd0054) + 0x20) != 0) {
      uVar7 = 0x27b;
      iVar3 = DAT_000d00c0 + 0xd0064;
      iVar6 = DAT_000d00c4 + 0xd006c;
      goto LAB_000d006a;
    }
  }
LAB_000d006e:
  uVar8 = 0xffffffb5;
LAB_000d0072:
  QCameraBufferMaps::_QCameraBufferMaps(aQStack2092);
  if (*piVar1 != iVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}


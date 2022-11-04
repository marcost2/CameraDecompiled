
/* qcamera::QCameraStream::unMapBuf(qcamera::QCameraMemory*, cam_mapping_buf_type,
   mm_camera_map_unmap_ops_tbl_t*) */

int qcamera::QCameraStream::unMapBuf
              (QCameraMemory *param_1,cam_mapping_buf_type param_2,
              mm_camera_map_unmap_ops_tbl_t *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  mm_camera_map_unmap_ops_tbl_t *pmVar5;
  uint uVar6;
  uint uVar7;
  code *pcVar8;
  
  uVar1 = QCameraMemory::getCnt((QCameraMemory *)param_2);
  if (uVar1 == 0) {
    iVar2 = 0;
  }
  else {
    uVar7 = 0;
    while (iVar2 = QCameraMemory::getSize((QCameraMemory *)param_2,uVar7), iVar2 != -0x4b) {
      pcVar8 = *(code **)(param_1 + 0x2f0);
      if (pcVar8 == (code *)0x0) {
        uVar3 = *(uint *)(param_1 + 0x60);
        uVar4 = *(undefined4 *)(param_1 + 100);
        pmVar5 = *(mm_camera_map_unmap_ops_tbl_t **)(param_1 + 0x68);
        pcVar8 = *(code **)(*(int *)(param_1 + 0x6c) + 0x58);
        uVar6 = (uint)param_3 & 0xff;
      }
      else {
        uVar4 = 0xffffffff;
        uVar3 = uVar7;
        pmVar5 = param_3;
        uVar6 = *(uint *)(param_1 + 0x2f4);
      }
      iVar2 = (*pcVar8)(uVar3,uVar4,pmVar5,uVar6);
      if (iVar2 < 0) {
        if (*(int *)(*(int *)(DAT_000cfe50 + 0xcfe2c) + 0x20) == 0) {
          return iVar2;
        }
        mm_camera_debug_log(1,1,DAT_000cfe58 + 0xcfe44,0x23b,DAT_000cfe54 + 0xcfe3c);
        return iVar2;
      }
      uVar7 = uVar7 + 1;
      if (uVar1 <= uVar7) {
        return iVar2;
      }
    }
    if (*(int *)(*(int *)(DAT_000cfe5c + 0xcfe06) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000cfe64 + 0xcfe1e,0x23f,DAT_000cfe60 + 0xcfe16);
    }
    iVar2 = -0x4b;
  }
  return iVar2;
}



/* qcamera::QCameraStream::init(qcamera::QCameraHeapMemory*, qcamera::QCameraHeapMemory*, unsigned
   char, void (*)(mm_camera_super_buf_t*, qcamera::QCameraStream*, void*), void*, bool) */

int __thiscall qcamera::QCameraStream::init(QCameraStream *this,EVP_PKEY_CTX *ctx)

{
  int iVar1;
  cam_stream_info_t *pcVar2;
  int iVar3;
  cam_mapping_buf_type in_r2;
  QCameraStream in_r3;
  int iVar4;
  int *piVar5;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  QCameraStream in_stack_00000008;
  
  piVar5 = *(int **)(DAT_000d0430 + 0xd015a);
  iVar1 = *piVar5;
  *(EVP_PKEY_CTX **)(this + 0x104) = ctx;
  pcVar2 = (cam_stream_info_t *)(**(code **)(*(int *)ctx + 0x24))(ctx,0);
  this[0x2e2] = in_stack_00000008;
  this[0x8c] = in_r3;
  *(cam_stream_info_t **)(this + 0x70) = pcVar2;
  if (this[0x10060] != (QCameraStream)0x0) {
    iVar3 = calcOffset(this,pcVar2);
    if (iVar3 < 0) {
      if (*(int *)(*(int *)(DAT_000d0434 + 0xd02ac) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000d043c + 0xd02c8,0x2cc,DAT_000d0438 + 0xd02c0);
      }
      goto LAB_000d0418;
    }
    *(undefined4 *)(this + 0x1006c) = *(undefined4 *)(DAT_000d0440 + 0xd01a2);
    *(QCameraStream **)(this + 0x10070) = this;
    iVar3 = (**(code **)(**(int **)(this + 0x114) + 0x18))(*(int **)(this + 0x114),this + 0x1006c);
    *(int *)(this + 0x10074) = iVar3;
    if (iVar3 == 0) {
      if (*(int *)(*(int *)(DAT_000d0444 + 0xd02f8) + 0x20) == 0) {
        iVar3 = -0xc;
      }
      else {
        mm_camera_debug_log(1,1,DAT_000d044c + 0xd0312,0x2d4,DAT_000d0448 + 0xd030a);
        iVar3 = -0xc;
      }
      goto LAB_000d0418;
    }
  }
  iVar3 = (**(code **)(*(int *)(this + 0x6c) + 0x40))
                    (*(undefined4 *)(this + 0x60),*(undefined4 *)(this + 100));
  *(int *)(this + 0x68) = iVar3;
  if (iVar3 == 0) {
    if (*(int *)(*(int *)(DAT_000d0450 + 0xd02d2) + 0x20) == 0) {
      iVar3 = -0x80000000;
    }
    else {
      mm_camera_debug_log(1,1,DAT_000d0458 + 0xd02ea,0x2dc,DAT_000d0454 + 0xd02e2);
      iVar3 = -0x80000000;
    }
    goto LAB_000d0418;
  }
  iVar3 = mapBufs((QCameraMemory *)this,*(cam_mapping_buf_type *)(this + 0x104),
                  (mm_camera_map_unmap_ops_tbl_t *)0x4);
  if (iVar3 < 0) {
    if (*(int *)(*(int *)(DAT_000d045c + 0xd0322) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000d0464 + 0xd033c,0x2e3,DAT_000d0460 + 0xd0334);
    }
  }
  else {
    *(cam_mapping_buf_type *)(this + 0x108) = in_r2;
    if ((in_r2 == 0) ||
       (iVar3 = mapBufs((QCameraMemory *)this,in_r2,(mm_camera_map_unmap_ops_tbl_t *)0x7),
       -1 < iVar3)) {
      iVar3 = (**(code **)(*(int *)(this + 0x6c) + 0x4c))
                        (*(undefined4 *)(this + 0x60),*(undefined4 *)(this + 100),
                         *(undefined4 *)(this + 0x68));
      if (-1 < iVar3) {
        if (this[0x10060] != (QCameraStream)0x0) {
          *(undefined4 *)(this + 0x10078) = *(undefined4 *)(DAT_000d048c + 0xd0270);
          *(QCameraStream **)(this + 0x1007c) = this;
          iVar3 = (**(code **)(**(int **)(this + 0x114) + 0x18))
                            (*(int **)(this + 0x114),this + 0x10078);
          *(int *)(this + 0x10080) = iVar3;
          if (iVar3 == 0) {
            if (*(int *)(*(int *)(DAT_000d0490 + 0xd03ec) + 0x20) != 0) {
              mm_camera_debug_log(1,1,DAT_000d0498 + 0xd0404,0x2fc,DAT_000d0494 + 0xd03fc);
            }
            iVar3 = -0xc;
            goto LAB_000d040a;
          }
        }
        iVar3 = 0;
        *(undefined4 *)(this + 0x9c) = in_stack_00000004;
        *(undefined4 *)(this + 0x94) = in_stack_00000000;
        goto LAB_000d0418;
      }
      iVar4 = *(int *)(DAT_000d0478 + 0xd034c);
      if (*(int *)(iVar4 + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000d0480 + 0xd0366,0xb0c,DAT_000d047c + 0xd035a,iVar3);
      }
      (**(code **)(*(int *)(this + 0x6c) + 0x58))
                (*(undefined4 *)(this + 0x60),*(undefined4 *)(this + 100),
                 *(undefined4 *)(this + 0x68),4,0,0xffffffff);
      if (*(int *)(iVar4 + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000d0488 + 0xd0396,0x2f3,DAT_000d0484 + 0xd038e);
      }
      iVar3 = -0x80000000;
    }
    else {
      if (*(int *)(*(int *)(DAT_000d0468 + 0xd03a6) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000d0470 + 0xd03be,0x2eb,DAT_000d046c + 0xd03b6);
      }
      if (*(int **)(this + 0x108) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0x108) + 0xc))();
        if (*(int **)(this + 0x108) != (int *)0x0) {
          (**(code **)(**(int **)(this + 0x108) + 0x2c))();
        }
        *(undefined4 *)(this + 0x108) = 0;
      }
    }
  }
LAB_000d040a:
  (**(code **)(*(int *)(this + 0x6c) + 0x44))
            (*(undefined4 *)(this + 0x60),*(undefined4 *)(this + 100),*(undefined4 *)(this + 0x68));
  *(undefined4 *)(this + 0x68) = 0;
LAB_000d0418:
  if (*piVar5 == iVar1) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


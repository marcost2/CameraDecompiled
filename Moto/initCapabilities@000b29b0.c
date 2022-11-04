
/* qcamera::QCamera2HardwareInterface::initCapabilities(unsigned int, mm_camera_vtbl_t*) */

uint qcamera::QCamera2HardwareInterface::initCapabilities(uint param_1,mm_camera_vtbl_t *param_2)

{
  int *this;
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  void *__src;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  uint *puVar8;
  cam_buf_map_type_list acStack2092 [2052];
  int local_28;
  
  piVar7 = *(int **)(DAT_000b2bec + 0xb29c4);
  local_28 = *piVar7;
  puVar8 = *(uint **)(DAT_000b2bf0 + 0xb29d4);
  if (1 < *puVar8) {
    if ((**(byte **)(DAT_000b2bf4 + 0xb29e4) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000b2bf8 + 0xb29f4) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000b2bfc + 0xb2bd8);
    }
  }
  this = (int *)operator_new(0x718);
  piVar1 = (int *)QCameraHeapMemory::QCameraHeapMemory((QCameraHeapMemory *)this,true);
  uVar2 = (**(code **)(*piVar1 + 8))(this,1,0x5840,0);
  if (uVar2 != 0) {
    if (*(int *)(*(int *)(DAT_000b2c00 + 0xb2a2c) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000b2c08 + 0xb2a48,0xb74,DAT_000b2c04 + 0xb2a40);
    }
    goto LAB_000b2b92;
  }
  pvVar3 = (void *)(**(code **)(*this + 0x24))(this,0);
  __aeabi_memclr8(pvVar3,0x5840);
  iVar4 = QCameraMemory::getFd((QCameraMemory *)this,0);
  pvVar3 = (void *)(**(code **)(*this + 0x24))(this,0);
  uVar2 = QCameraBufferMaps::makeSingletonBufMapList(0,0,0,-1,0,iVar4,0x5840,acStack2092,pvVar3);
  if (uVar2 == 0) {
    uVar2 = (**(code **)(*(int *)(param_2 + 4) + 0x10))(*(undefined4 *)param_2,acStack2092);
    if (0x7fffffff < uVar2) goto LAB_000b2b18;
LAB_000b2a94:
    uVar2 = (***(code ***)(param_2 + 4))(*(undefined4 *)param_2);
    if ((int)uVar2 < 0) {
      if (*(int *)(*(int *)(DAT_000b2c18 + 0xb2b40) + 0x20) != 0) {
        uVar6 = 0xb8f;
        iVar4 = DAT_000b2c1c + 0xb2b50;
        iVar5 = DAT_000b2c20 + 0xb2b58;
LAB_000b2b74:
        mm_camera_debug_log(1,1,iVar5,uVar6,iVar4);
      }
    }
    else {
      pvVar3 = malloc(0x5840);
      iVar4 = *(int *)(DAT_000b2c24 + 0xb2ab6);
      *(void **)(iVar4 + param_1 * 4) = pvVar3;
      if (pvVar3 == (void *)0x0) {
        if (*(int *)(*(int *)(DAT_000b2c28 + 0xb2b5e) + 0x20) != 0) {
          uVar6 = 0xb96;
          iVar4 = DAT_000b2c2c + 0xb2b6e;
          iVar5 = DAT_000b2c30 + 0xb2b76;
          goto LAB_000b2b74;
        }
      }
      else {
        uVar2 = 0;
        __src = (void *)(**(code **)(*this + 0x24))(this,0);
        __aeabi_memcpy8(pvVar3,__src,0x5840);
        iVar5 = *(int *)(iVar4 + param_1 * 4);
        *(undefined4 *)(iVar5 + 0x3ef4) = 0;
        *(undefined4 *)(iVar5 + 0x3ef0) = 0;
        iVar5 = *(int *)(iVar4 + param_1 * 4);
        *(undefined4 *)(iVar5 + 0x3f28) = 0;
        *(undefined4 *)(iVar5 + 0x3f24) = 0;
        iVar4 = *(int *)(iVar4 + param_1 * 4);
        *(undefined4 *)(iVar4 + 0x3f5c) = 0;
        *(undefined4 *)(iVar4 + 0x3f58) = 0;
      }
    }
    (**(code **)(*(int *)(param_2 + 4) + 0x14))(*(undefined4 *)param_2,0);
  }
  else {
    if (-1 < (int)uVar2) goto LAB_000b2a94;
LAB_000b2b18:
    if (*(int *)(*(int *)(DAT_000b2c0c + 0xb2b1e) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000b2c14 + 0xb2b36,0xb88,DAT_000b2c10 + 0xb2b2e);
    }
  }
  (**(code **)(*this + 0xc))(this);
  (**(code **)(*this + 0x2c))(this);
LAB_000b2b92:
  if (1 < *puVar8) {
    if ((**(byte **)(DAT_000b2c34 + 0xb2ba0) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000b2c38 + 0xb2bae) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  if (*piVar7 == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


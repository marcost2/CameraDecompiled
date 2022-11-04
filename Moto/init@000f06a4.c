
/* qcamera::QCameraParameters::init(cam_capability_t*, mm_camera_vtbl_t*,
   qcamera::QCameraAdjustFPS*) */

int __thiscall qcamera::QCameraParameters::init(QCameraParameters *this,EVP_PKEY_CTX *ctx)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  MotCtrlHal1 *this_00;
  int *piVar4;
  uint uVar5;
  QCameraHeapMemory *this_01;
  undefined4 uVar6;
  int iVar7;
  undefined4 in_r2;
  undefined4 in_r3;
  code *pcVar8;
  undefined4 uVar9;
  int *piVar10;
  cam_buf_map_type_list acStack2088 [2052];
  int local_24;
  
  piVar10 = *(int **)(DAT_000f095c + 0xf06b4);
  local_24 = *piVar10;
  *(undefined4 *)(this + 0x294) = in_r3;
  *(EVP_PKEY_CTX **)(this + 0x1d4) = ctx;
  *(undefined4 *)(this + 0x1d8) = in_r2;
  if (*(QCameraMemory **)(this + 0x1dc) == (QCameraMemory *)0x0) {
    if (*(int *)(*(int *)(DAT_000f0960 + 0xf0750) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000f0968 + 0xf0768,0x1b6c,DAT_000f0964 + 0xf0760);
    }
    iVar1 = -0x80000000;
  }
  else {
    iVar1 = QCameraMemory::getFd(*(QCameraMemory **)(this + 0x1dc),0);
    pvVar2 = (void *)(**(code **)(**(int **)(this + 0x1dc) + 0x24))(*(int **)(this + 0x1dc),0);
    iVar1 = QCameraBufferMaps::makeSingletonBufMapList
                      (1,0,0,-1,0,iVar1,(uint)&PTR_bufDone_00117af8,acStack2088,pvVar2);
    if (iVar1 == 0) {
      uVar5 = (**(code **)((*(undefined4 **)(this + 0x1d8))[1] + 0x10))
                        (**(undefined4 **)(this + 0x1d8),acStack2088);
      if (0x7fffffff < uVar5) goto LAB_000f0784;
LAB_000f070e:
      uVar3 = (**(code **)(**(int **)(this + 0x1dc) + 0x24))(*(int **)(this + 0x1dc),0);
      *(undefined4 *)(this + 0x1e0) = uVar3;
      this_00 = (MotCtrlHal1 *)operator_new(0x18);
      piVar4 = (int *)MotCtrlHal1::MotCtrlHal1(this_00);
      *(int **)(this + 0xd1c) = piVar4;
      iVar1 = (**(code **)(*piVar4 + 8))(piVar4,*(undefined4 *)(this + 0x1d8));
      if (iVar1 == 0) {
        iVar1 = 0;
        if (*(int *)(this + 0x1ec) != 1) {
LAB_000f0894:
          iVar7 = *(int *)(this + 0x1d4);
          *(undefined4 *)(iVar7 + 0x2704) = 4;
          *(undefined4 *)(iVar7 + 0x2700) = 2;
          *(undefined *)(iVar7 + 0x2f7e) = 1;
          *(undefined4 *)(iVar7 + 0x2c2c) = 0;
          *(undefined4 *)(iVar7 + 0x26fc) = 2;
          iVar7 = *(int *)(this + 0x1d4);
          if (*(uint *)(iVar7 + 4) == 2) {
            *(undefined *)(iVar7 + 0x2f83) = 1;
            *(undefined4 *)(iVar7 + 0x5b4) = 0;
            *(undefined4 *)(iVar7 + 500) = 1;
            *(undefined4 *)(iVar7 + 0x1f8) = 0;
          }
          else if (*(uint *)(iVar7 + 4) < 2) {
            *(undefined *)(iVar7 + 0x2f83) = 1;
            *(undefined4 *)(iVar7 + 0x5b4) = 0;
            *(undefined4 *)(iVar7 + 500) = 1;
            *(undefined4 *)(iVar7 + 0x1f8) = 0;
          }
          else {
            __android_log_print(6,DAT_000f0990 + 0xf0906,DAT_000f0994 + 0xf0908,
                                DAT_000f0998 + 0xf090a);
          }
          initDefaultParameters(this);
          QCameraCommon::init((QCameraCommon *)(this + 0x1d0),ctx);
          this[0x236] = (QCameraParameters)0x1;
          goto LAB_000f0836;
        }
        this_01 = (QCameraHeapMemory *)operator_new(0x718);
        piVar4 = (int *)QCameraHeapMemory::QCameraHeapMemory(this_01,true);
        *(int **)(this + 0x1e4) = piVar4;
        iVar1 = (**(code **)(*piVar4 + 8))(piVar4,1,0x18,0);
        if (iVar1 == 0) {
          uVar9 = **(undefined4 **)(this + 0x1d8);
          pcVar8 = *(code **)((*(undefined4 **)(this + 0x1d8))[1] + 0xc);
          uVar3 = QCameraMemory::getFd(*(QCameraMemory **)(this + 0x1e4),0);
          uVar6 = (**(code **)(**(int **)(this + 0x1e4) + 0x24))(*(int **)(this + 0x1e4),0);
          iVar1 = (*pcVar8)(uVar9,2,uVar3,0x18,uVar6);
          if (-1 < iVar1) {
            uVar3 = (**(code **)(**(int **)(this + 0x1e4) + 0x24))(*(int **)(this + 0x1e4),0);
            *(undefined4 *)(this + 0x1e8) = uVar3;
            goto LAB_000f0894;
          }
          if (*(int *)(*(int *)(DAT_000f0984 + 0xf092a) + 0x20) != 0) {
            mm_camera_debug_log(1,1,DAT_000f098c + 0xf0942,0x1ba4,DAT_000f0988 + 0xf093a);
          }
          (**(code **)(**(int **)(this + 0x1e4) + 0xc))();
          iVar1 = -0x7ffffffe;
        }
        else {
          if (*(int *)(*(int *)(DAT_000f0978 + 0xf07e0) + 0x20) != 0) {
            mm_camera_debug_log(1,1,DAT_000f0980 + 0xf07f8,0x1b99,DAT_000f097c + 0xf07f0);
          }
          iVar1 = -0xc;
        }
        if (*(int **)(this + 0x1e4) != (int *)0x0) {
          (**(code **)(**(int **)(this + 0x1e4) + 0x2c))();
        }
        *(undefined4 *)(this + 0x1e4) = 0;
      }
      else {
        (**(code **)((*(undefined4 **)(this + 0x1d8))[1] + 0x14))(**(undefined4 **)(this + 0x1d8),1)
        ;
      }
    }
    else {
      if (-1 < iVar1) goto LAB_000f070e;
LAB_000f0784:
      iVar1 = -0x7ffffffe;
      if (*(int *)(*(int *)(DAT_000f096c + 0xf0790) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000f0974 + 0xf07a8,0x1b7f,DAT_000f0970 + 0xf07a0);
      }
    }
    (**(code **)(**(int **)(this + 0x1dc) + 0xc))();
    if (*(int **)(this + 0x1dc) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x1dc) + 0x2c))();
    }
    *(undefined4 *)(this + 0x1dc) = 0;
  }
  *(undefined4 *)(this + 0x294) = 0;
  *(undefined4 *)(this + 0x1d4) = 0;
  *(undefined4 *)(this + 0x1d8) = 0;
LAB_000f0836:
  if (*piVar10 == local_24) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


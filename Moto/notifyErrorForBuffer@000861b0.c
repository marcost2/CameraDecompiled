
/* WARNING: Could not reconcile some variable overlaps */
/* qcamera::QCamera3HardwareInterface::notifyErrorForBuffer(native_handle const**) */

undefined4 __thiscall
qcamera::QCamera3HardwareInterface::notifyErrorForBuffer
          (QCamera3HardwareInterface *this,native_handle **param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uVar8;
  uint *puVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined auVar12 [16];
  ulonglong local_90;
  undefined8 local_88;
  ulonglong local_80;
  undefined8 uStack120;
  undefined4 local_70;
  uint local_6c;
  undefined8 local_68;
  ulonglong local_60;
  undefined8 local_58;
  undefined8 uStack80;
  undefined4 local_48;
  undefined4 local_44;
  int local_3c;
  
  piVar7 = *(int **)(DAT_000863ec + 0x861c6);
  local_3c = *piVar7;
  iVar11 = *(int *)(DAT_000863f0 + 0x861d0);
  if (*(int *)(iVar11 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000863f8 + 0x861ee,0x34e5,DAT_000863f4 + 0x861e4,param_1);
  }
  puVar1 = *(uint **)(this + 0x270);
  puVar9 = (uint *)puVar1[7];
  if (puVar9 != puVar1) {
    iVar3 = DAT_00086400 + 0x86208;
    iVar5 = DAT_000863fc + 0x8620a;
    do {
      puVar10 = (undefined4 *)puVar9[5];
      while (puVar10 = (undefined4 *)puVar10[4], puVar10 != (undefined4 *)puVar9[5]) {
        if ((native_handle **)puVar10[1] == param_1) {
          if (*(int *)(iVar11 + 0x28) != 0) {
            mm_camera_debug_log(1,3,DAT_00086408 + 0x86272,0x34ee,DAT_00086404 + 0x86262,*puVar9,
                                param_1,*(undefined4 *)(this + 0x60));
          }
          uVar8 = *puVar10;
          local_90._0_4_ = *puVar9;
          auVar12 = ZEXT816(0);
          local_80 = 0;
          uStack120 = 0;
          local_90 = 0;
          local_88 = 0;
          local_70 = 0;
          puVar2 = (undefined8 *)operator_new(0x14);
          *(undefined4 *)(puVar2 + 2) = 0;
          *puVar2 = SUB168(auVar12,0);
          uStack80 = SUB168(auVar12 >> 0x40,0);
          puVar2[1] = uStack80;
          local_48 = 0;
          local_44 = 0;
          local_58._4_4_ = SUB164(auVar12 >> 0x20,0);
          local_58 = CONCAT44(local_58._4_4_,4);
          local_68 = CONCAT44(local_58._4_4_,1);
          uVar4 = *puVar9;
          local_60 = CONCAT44(uVar8,uVar4);
          *(undefined4 *)((int)puVar2 + 0xc) = 0xffffffff;
          *(undefined4 *)(puVar2 + 2) = 0xffffffff;
          *(undefined4 *)(puVar2 + 1) = 1;
          *(undefined4 *)puVar2 = uVar8;
          *(native_handle ***)((int)puVar2 + 4) = param_1;
          iVar3 = FrameNumberRegistry::getFrameworkFrameNumber
                            ((FrameNumberRegistry *)(this + 0x1e4),uVar4,&local_6c);
          if (iVar3 == 0) {
            if (local_6c == 0xffffffff) {
              if (*(int *)(iVar11 + 0x20) != 0) {
                uVar8 = 0x110d;
                iVar3 = DAT_00086414 + 0x863c2;
                iVar5 = DAT_00086418 + 0x863ca;
                goto LAB_000862fa;
              }
            }
            else {
              local_60 = local_60 & 0xffffffff00000000 | (ulonglong)local_6c;
              (**(code **)(*(int *)(this + 0x88) + 4))(*(int *)(this + 0x88),&local_68);
            }
          }
          else if (*(int *)(iVar11 + 0x20) != 0) {
            uVar8 = 0x1109;
            iVar3 = DAT_0008640c + 0x862f4;
            iVar5 = DAT_00086410 + 0x862fc;
LAB_000862fa:
            mm_camera_debug_log(1,1,iVar5,uVar8,iVar3);
          }
          local_80 = local_80 & 0xffffffff;
          local_90 = (ulonglong)(uint)local_90;
          local_88 = CONCAT44(puVar2,1);
          if (*(int *)(iVar11 + 0x28) != 0) {
            mm_camera_debug_log(1,3,DAT_00086420 + 0x86344,0x3514,DAT_0008641c + 0x86334,
                                (uint)local_90,param_1,*(undefined4 *)(this + 0x60));
          }
          PendingBuffersMap::removeBuf((PendingBuffersMap *)(this + 0x268),param_1);
          iVar3 = FrameNumberRegistry::getFrameworkFrameNumber
                            ((FrameNumberRegistry *)(this + 0x1e4),(uint)local_90,&local_6c);
          if (iVar3 == 0) {
            if (local_6c == 0xffffffff) {
              if (*(int *)(iVar11 + 0x2c) != 0) {
                uVar8 = 4;
                uVar6 = 0x10ef;
                iVar11 = DAT_0008642c + 0x863de;
                iVar3 = DAT_00086430 + 0x863e6;
                goto LAB_00086378;
              }
            }
            else {
              local_90 = local_90 & 0xffffffff00000000 | (ulonglong)local_6c;
              (***(code ***)(this + 0x88))(*(code ***)(this + 0x88),&local_90);
            }
          }
          else if (*(int *)(iVar11 + 0x20) != 0) {
            uVar8 = 1;
            uVar6 = 0x10eb;
            iVar11 = DAT_00086424 + 0x86372;
            iVar3 = DAT_00086428 + 0x8637a;
LAB_00086378:
            mm_camera_debug_log(1,uVar8,iVar3,uVar6,iVar11);
          }
          operator_delete(puVar2);
          goto LAB_00086398;
        }
      }
      if (*(int *)(iVar11 + 0x28) != 0) {
        mm_camera_debug_log(1,3,iVar3,0x351b,iVar5,*puVar9,param_1);
        puVar1 = *(uint **)(this + 0x270);
      }
      puVar9 = (uint *)puVar9[7];
    } while (puVar9 != puVar1);
  }
LAB_00086398:
  if (*piVar7 != local_3c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}


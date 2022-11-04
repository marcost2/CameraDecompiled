
/* WARNING: Could not reconcile some variable overlaps */
/* qcamera::QCamera3HardwareInterface::notifyErrorForPendingRequests() */

undefined4 __thiscall
qcamera::QCamera3HardwareInterface::notifyErrorForPendingRequests(QCamera3HardwareInterface *this)

{
  uint **ppuVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  FrameNumberRegistry *this_00;
  uint uVar6;
  void *pvVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  uint *puVar10;
  int iVar11;
  void *pvVar12;
  void *pvVar13;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined4 *puVar19;
  void *pvVar20;
  void *pvVar21;
  uint *puVar22;
  undefined auVar23 [16];
  ulonglong local_90;
  longlong local_88;
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
  
  piVar2 = *(int **)(DAT_000900b8 + 0x8fd88);
  local_3c = *piVar2;
  local_80 = 0;
  uStack120 = 0;
  local_90 = 0;
  local_88 = 0;
  local_70 = 0;
  puVar10 = *(uint **)(this + 0x204);
  puVar3 = (uint *)puVar10[0x15];
  puVar22 = puVar3;
  if (puVar3 == puVar10) {
    uVar4 = 0xffffffff;
  }
  else {
    do {
      ppuVar1 = (uint **)(puVar22 + 0x15);
      puVar22 = *ppuVar1;
    } while (puVar10 != *ppuVar1);
    uVar4 = *puVar3;
  }
  iVar5 = *(int *)(DAT_000900bc + 0x8fdc4);
  if (*(int *)(iVar5 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000900c4 + 0x8fde2,0x345e,DAT_000900c0 + 0x8fdd6,uVar4);
  }
  puVar22 = (uint *)(*(uint **)(this + 0x270))[7];
  if (*(uint **)(this + 0x270) != puVar22) {
    auVar23 = ZEXT816(0);
    this_00 = (FrameNumberRegistry *)(this + 0x1e4);
    do {
      uVar6 = *puVar22;
      if (uVar6 < uVar4) {
        if (*(int *)(iVar5 + 0x28) != 0) {
          iVar11 = 0;
          for (uVar17 = *(uint *)(puVar22[5] + 0x10); uVar17 != puVar22[5];
              uVar17 = *(uint *)(uVar17 + 0x10)) {
            iVar11 = iVar11 + 1;
          }
          mm_camera_debug_log(1,3,DAT_000900e4 + 0x8fea8,0x3467,DAT_000900e0 + 0x8fe9a,uVar6,iVar11)
          ;
        }
        uVar6 = 0;
        for (uVar17 = *(uint *)(puVar22[5] + 0x10); uVar17 != puVar22[5];
            uVar17 = *(uint *)(uVar17 + 0x10)) {
          uVar6 = uVar6 + 1;
        }
        uVar17 = (uint)((ulonglong)uVar6 * 0x14);
        iVar11 = (int)((ulonglong)uVar6 * 0x14 >> 0x20);
        if (iVar11 != 0) {
          iVar11 = 1;
        }
        if (iVar11 != 0) {
          uVar17 = 0xffffffff;
        }
        pvVar7 = operator_new__(uVar17);
        iVar11 = 0;
        for (uVar6 = *(uint *)(puVar22[5] + 0x10); uVar6 != puVar22[5];
            uVar6 = *(uint *)(uVar6 + 0x10)) {
          iVar11 = iVar11 + 1;
        }
        __aeabi_memclr8(pvVar7,iVar11 * 0x14);
        local_90 = (ulonglong)*puVar22;
        puVar8 = (undefined4 *)puVar22[5];
        puVar19 = (undefined4 *)puVar8[4];
        if (puVar19 == puVar8) {
          local_88 = ZEXT48(pvVar7) << 0x20;
        }
        else {
          iVar11 = 0;
          puVar14 = puVar19;
          do {
            puVar14 = (undefined4 *)puVar14[4];
            iVar11 = iVar11 + 1;
          } while (puVar8 != puVar14);
          local_88 = CONCAT44(pvVar7,iVar11);
          if (puVar19 != puVar8) {
            puVar8 = (undefined4 *)((int)pvVar7 + 8);
            do {
              uStack80 = SUB168(auVar23 >> 0x40,0);
              local_44 = 0;
              local_48 = 0;
              local_68._4_4_ = SUB164(auVar23 >> 0x20,0);
              local_68 = CONCAT44(local_68._4_4_,1);
              local_58 = CONCAT44(local_68._4_4_,4);
              uVar6 = *puVar22;
              local_60 = CONCAT44(*puVar19,uVar6);
              puVar8[1] = 0xffffffff;
              puVar8[2] = 0xffffffff;
              uVar9 = puVar19[1];
              *puVar8 = 1;
              puVar8[-1] = uVar9;
              puVar8[-2] = *puVar19;
              iVar11 = FrameNumberRegistry::getFrameworkFrameNumber(this_00,uVar6,&local_6c);
              if (iVar11 == 0) {
                if (local_6c == 0xffffffff) {
                  if (*(int *)(iVar5 + 0x20) != 0) {
                    uVar9 = 0x110d;
                    iVar11 = DAT_000900e8 + 0x8ff38;
                    iVar15 = DAT_000900ec + 0x8ff40;
                    goto LAB_0008ff9e;
                  }
                }
                else {
                  local_60 = local_60 & 0xffffffff00000000 | (ulonglong)local_6c;
                  (**(code **)(*(int *)(this + 0x88) + 4))(*(int *)(this + 0x88),&local_68);
                }
              }
              else if (*(int *)(iVar5 + 0x20) != 0) {
                uVar9 = 0x1109;
                iVar11 = DAT_000900f0 + 0x8ff98;
                iVar15 = DAT_000900f4 + 0x8ffa0;
LAB_0008ff9e:
                mm_camera_debug_log(1,1,iVar15,uVar9,iVar11);
              }
              iVar11 = puVar19[3];
              puVar14 = (undefined4 *)puVar19[4];
              *(undefined4 **)(iVar11 + 0x10) = puVar14;
              puVar14[3] = iVar11;
              operator_delete(puVar19);
              puVar8 = puVar8 + 5;
              puVar19 = puVar14;
            } while (puVar14 != (undefined4 *)puVar22[5]);
          }
        }
        if (*(int *)(iVar5 + 0x2c) != 0) {
          iVar11 = 0;
          for (iVar15 = *(int *)(*(int *)(this + 0x270) + 0x1c); iVar15 != *(int *)(this + 0x270);
              iVar15 = *(int *)(iVar15 + 0x1c)) {
            iVar11 = iVar11 + 1;
          }
          mm_camera_debug_log(1,4,DAT_0009010c + 0x9007e,0x348c,DAT_00090108 + 0x90070,*puVar22,
                              iVar11);
        }
        uVar6 = puVar22[6];
        puVar3 = (uint *)puVar22[7];
        *(uint **)(uVar6 + 0x1c) = puVar3;
        puVar3[6] = uVar6;
        if (puVar22 != (uint *)0x0) {
          puVar22[4] = *(int *)(DAT_00090110 + 0x90098) + 8;
          pvVar12 = (void *)puVar22[5];
          pvVar21 = *(void **)((int)pvVar12 + 0x10);
          pvVar20 = pvVar12;
          if (*(void **)((int)pvVar12 + 0x10) != pvVar12) {
            do {
              pvVar20 = *(void **)((int)pvVar21 + 0x10);
              if (pvVar21 != (void *)0x0) {
                operator_delete(pvVar21);
                pvVar12 = (void *)puVar22[5];
              }
              pvVar21 = pvVar20;
            } while (pvVar20 != pvVar12);
          }
          *(void **)((int)pvVar20 + 0xc) = pvVar20;
          *(uint *)(puVar22[5] + 0x10) = puVar22[5];
          if ((void *)puVar22[5] != (void *)0x0) {
            operator_delete__((void *)puVar22[5]);
          }
          operator_delete(puVar22);
        }
        iVar11 = FrameNumberRegistry::getFrameworkFrameNumber
                           (this_00,(uint)local_90,(uint *)&local_68);
        if (iVar11 == 0) {
          if ((int)local_68 == -1) {
            if (*(int *)(iVar5 + 0x2c) != 0) {
              uVar9 = 4;
              uVar18 = 0x10ef;
              iVar11 = DAT_000900d0 + 0x8fe44;
              iVar15 = DAT_000900d4 + 0x8fe4c;
              goto LAB_0009027a;
            }
          }
          else {
            local_90 = local_90 & 0xffffffff00000000 | local_68 & 0xffffffff;
            (***(code ***)(this + 0x88))(*(code ***)(this + 0x88),&local_90);
          }
        }
        else if (*(int *)(iVar5 + 0x20) != 0) {
          uVar9 = 1;
          uVar18 = 0x10eb;
          iVar11 = DAT_00090454 + 0x90274;
          iVar15 = DAT_00090458 + 0x9027c;
LAB_0009027a:
          mm_camera_debug_log(1,uVar9,iVar15,uVar18,iVar11);
        }
        operator_delete__(pvVar7);
        puVar22 = puVar3;
      }
      else {
        iVar11 = *(int *)(*(int *)(this + 0x204) + 0x54);
        if (*(int *)(iVar5 + 0x28) != 0) {
          mm_camera_debug_log(1,3,DAT_000900fc + 0x8fff4,0x3497,DAT_000900f8 + 0x8ffe8,uVar6);
        }
        local_48 = 0;
        uStack80 = SUB168(auVar23 >> 0x40,0);
        local_44 = 0;
        local_68._4_4_ = SUB164(auVar23 >> 0x20,0);
        local_68 = CONCAT44(local_68._4_4_,1);
        local_58 = CONCAT44(local_68._4_4_,2);
        local_60 = (ulonglong)*puVar22;
        iVar15 = FrameNumberRegistry::getFrameworkFrameNumber(this_00,*puVar22,&local_6c);
        if (iVar15 == 0) {
          if (local_6c == 0xffffffff) {
            if (*(int *)(iVar5 + 0x20) != 0) {
              uVar9 = 0x110d;
              iVar15 = DAT_000900c8 + 0x8fe26;
              iVar16 = DAT_000900cc + 0x8fe2e;
              goto LAB_0009003e;
            }
          }
          else {
            local_60 = local_60 & 0xffffffff00000000 | (ulonglong)local_6c;
            (**(code **)(*(int *)(this + 0x88) + 4))(*(int *)(this + 0x88),&local_68);
          }
        }
        else if (*(int *)(iVar5 + 0x20) != 0) {
          uVar9 = 0x1109;
          iVar15 = DAT_00090100 + 0x90038;
          iVar16 = DAT_00090104 + 0x90040;
LAB_0009003e:
          mm_camera_debug_log(1,1,iVar16,uVar9,iVar15);
        }
        uVar6 = 0;
        for (uVar17 = *(uint *)(puVar22[5] + 0x10); uVar17 != puVar22[5];
            uVar17 = *(uint *)(uVar17 + 0x10)) {
          uVar6 = uVar6 + 1;
        }
        uVar17 = (uint)((ulonglong)uVar6 * 0x14);
        iVar15 = (int)((ulonglong)uVar6 * 0x14 >> 0x20);
        if (iVar15 != 0) {
          iVar15 = 1;
        }
        if (iVar15 != 0) {
          uVar17 = 0xffffffff;
        }
        pvVar7 = operator_new__(uVar17);
        iVar15 = 0;
        for (uVar6 = *(uint *)(puVar22[5] + 0x10); uVar6 != puVar22[5];
            uVar6 = *(uint *)(uVar6 + 0x10)) {
          iVar15 = iVar15 + 1;
        }
        __aeabi_memclr8(pvVar7,iVar15 * 0x14);
        local_90 = (ulonglong)*puVar22;
        local_80 = local_80 & 0xffffffff00000000 | (ulonglong)*(uint *)(iVar11 + 0x30);
        puVar8 = (undefined4 *)puVar22[5];
        puVar19 = (undefined4 *)puVar8[4];
        if (puVar19 == puVar8) {
          local_88 = ZEXT48(pvVar7) << 0x20;
        }
        else {
          iVar15 = 0;
          puVar14 = puVar19;
          do {
            puVar14 = (undefined4 *)puVar14[4];
            iVar15 = iVar15 + 1;
          } while (puVar8 != puVar14);
          local_88 = CONCAT44(pvVar7,iVar15);
          if (puVar19 != puVar8) {
            puVar8 = (undefined4 *)((int)pvVar7 + 8);
            do {
              puVar8[1] = 0xffffffff;
              puVar8[2] = 0xffffffff;
              uVar9 = puVar19[1];
              *puVar8 = 1;
              puVar8[-1] = uVar9;
              puVar8[-2] = *puVar19;
              iVar15 = puVar19[3];
              puVar14 = (undefined4 *)puVar19[4];
              *(undefined4 **)(iVar15 + 0x10) = puVar14;
              puVar14[3] = iVar15;
              if (puVar19 != (undefined4 *)0x0) {
                operator_delete(puVar19);
              }
              puVar8 = puVar8 + 5;
              puVar19 = puVar14;
            } while (puVar14 != (undefined4 *)puVar22[5]);
          }
        }
        if (*(int *)(iVar5 + 0x2c) != 0) {
          iVar15 = 0;
          for (iVar16 = *(int *)(*(int *)(this + 0x270) + 0x1c); iVar16 != *(int *)(this + 0x270);
              iVar16 = *(int *)(iVar16 + 0x1c)) {
            iVar15 = iVar15 + 1;
          }
          mm_camera_debug_log(1,4,DAT_00090460 + 0x90208,0x34be,DAT_0009045c + 0x901fa,*puVar22,
                              iVar15);
        }
        uVar6 = puVar22[6];
        puVar3 = (uint *)puVar22[7];
        *(uint **)(uVar6 + 0x1c) = puVar3;
        puVar3[6] = uVar6;
        if (puVar22 != (uint *)0x0) {
          puVar22[4] = *(int *)(DAT_00090464 + 0x90220) + 8;
          pvVar12 = (void *)puVar22[5];
          pvVar21 = *(void **)((int)pvVar12 + 0x10);
          pvVar20 = pvVar12;
          if (*(void **)((int)pvVar12 + 0x10) != pvVar12) {
            do {
              pvVar20 = *(void **)((int)pvVar21 + 0x10);
              if (pvVar21 != (void *)0x0) {
                operator_delete(pvVar21);
                pvVar12 = (void *)puVar22[5];
              }
              pvVar21 = pvVar20;
            } while (pvVar20 != pvVar12);
          }
          *(void **)((int)pvVar20 + 0xc) = pvVar20;
          *(uint *)(puVar22[5] + 0x10) = puVar22[5];
          if ((void *)puVar22[5] != (void *)0x0) {
            operator_delete__((void *)puVar22[5]);
          }
          operator_delete(puVar22);
        }
        iVar15 = FrameNumberRegistry::getFrameworkFrameNumber(this_00,(uint)local_90,&local_6c);
        if (iVar15 == 0) {
          if (local_6c == 0xffffffff) {
            if (*(int *)(iVar5 + 0x2c) != 0) {
              uVar9 = 4;
              uVar18 = 0x10ef;
              iVar15 = DAT_000900d8 + 0x8fe62;
              iVar16 = DAT_000900dc + 0x8fe6a;
              goto LAB_000902e0;
            }
          }
          else {
            local_90 = local_90 & 0xffffffff00000000 | (ulonglong)local_6c;
            (***(code ***)(this + 0x88))(*(code ***)(this + 0x88),&local_90);
          }
        }
        else if (*(int *)(iVar5 + 0x20) != 0) {
          uVar9 = 1;
          uVar18 = 0x10eb;
          iVar15 = DAT_00090468 + 0x902da;
          iVar16 = DAT_0009046c + 0x902e2;
LAB_000902e0:
          mm_camera_debug_log(1,uVar9,iVar16,uVar18,iVar15);
        }
        operator_delete__(pvVar7);
        if (*(void **)(iVar11 + 0x30) != (void *)0x0) {
          free(*(void **)(iVar11 + 0x30));
          *(undefined4 *)(iVar11 + 0x30) = 0;
        }
        if (*(int *)(iVar11 + 0x34) != 0) {
          free_camera_metadata();
        }
        iVar15 = *(int *)(iVar11 + 0x50);
        iVar16 = *(int *)(iVar11 + 0x54);
        *(int *)(iVar15 + 0x54) = iVar16;
        *(int *)(iVar16 + 0x50) = iVar15;
        pvVar7 = (void *)FUN_00098ffc(iVar11);
        operator_delete(pvVar7);
        puVar22 = puVar3;
      }
    } while (*(uint **)(this + 0x270) != puVar22);
  }
  pvVar20 = *(void **)(this + 0x20c);
  pvVar7 = *(void **)((int)pvVar20 + 0xc);
  pvVar21 = pvVar20;
  if (*(void **)((int)pvVar20 + 0xc) != pvVar20) {
    do {
      pvVar21 = *(void **)((int)pvVar7 + 0xc);
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
        pvVar20 = *(void **)(this + 0x20c);
      }
      pvVar7 = pvVar21;
    } while (pvVar21 != pvVar20);
  }
  *(void **)((int)pvVar21 + 8) = pvVar21;
  *(int *)(*(int *)(this + 0x20c) + 0xc) = *(int *)(this + 0x20c);
  pvVar21 = *(void **)(this + 0x270);
  pvVar7 = *(void **)((int)pvVar21 + 0x1c);
  if (pvVar7 != pvVar21) {
    do {
      pvVar13 = *(void **)((int)pvVar7 + 0x14);
      pvVar20 = *(void **)((int)pvVar13 + 0x10);
      pvVar12 = pvVar13;
      if (*(void **)((int)pvVar13 + 0x10) != pvVar13) {
        do {
          pvVar12 = *(void **)((int)pvVar20 + 0x10);
          if (pvVar20 != (void *)0x0) {
            operator_delete(pvVar20);
            pvVar13 = *(void **)((int)pvVar7 + 0x14);
          }
          pvVar20 = pvVar12;
        } while (pvVar12 != pvVar13);
      }
      *(void **)((int)pvVar12 + 0xc) = pvVar12;
      *(int *)(*(int *)((int)pvVar7 + 0x14) + 0x10) = *(int *)((int)pvVar7 + 0x14);
      pvVar7 = *(void **)((int)pvVar7 + 0x1c);
    } while (pvVar7 != pvVar21);
    pvVar7 = *(void **)(this + 0x270);
    pvVar21 = *(void **)((int)pvVar7 + 0x1c);
    if (pvVar21 != pvVar7) {
      iVar11 = *(int *)(DAT_00090470 + 0x903a2);
      pvVar20 = pvVar21;
      do {
        pvVar21 = *(void **)((int)pvVar20 + 0x1c);
        if (pvVar20 != (void *)0x0) {
          *(int *)((int)pvVar20 + 0x10) = iVar11 + 8;
          pvVar13 = *(void **)((int)pvVar20 + 0x14);
          pvVar7 = *(void **)((int)pvVar13 + 0x10);
          pvVar12 = pvVar13;
          if (*(void **)((int)pvVar13 + 0x10) != pvVar13) {
            do {
              pvVar12 = *(void **)((int)pvVar7 + 0x10);
              if (pvVar7 != (void *)0x0) {
                operator_delete(pvVar7);
                pvVar13 = *(void **)((int)pvVar20 + 0x14);
              }
              pvVar7 = pvVar12;
            } while (pvVar12 != pvVar13);
          }
          *(void **)((int)pvVar12 + 0xc) = pvVar12;
          *(int *)(*(int *)((int)pvVar20 + 0x14) + 0x10) = *(int *)((int)pvVar20 + 0x14);
          if (*(void **)((int)pvVar20 + 0x14) != (void *)0x0) {
            operator_delete__(*(void **)((int)pvVar20 + 0x14));
          }
          operator_delete(pvVar20);
          pvVar7 = *(void **)(this + 0x270);
        }
        pvVar20 = pvVar21;
      } while (pvVar21 != pvVar7);
    }
  }
  *(void **)((int)pvVar21 + 0x18) = pvVar21;
  *(int *)(*(int *)(this + 0x270) + 0x1c) = *(int *)(this + 0x270);
  pvVar20 = *(void **)(this + 0x1fc);
  pvVar7 = *(void **)((int)pvVar20 + 0x44);
  pvVar21 = pvVar20;
  if (*(void **)((int)pvVar20 + 0x44) != pvVar20) {
    do {
      pvVar21 = *(void **)((int)pvVar7 + 0x44);
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
        pvVar20 = *(void **)(this + 0x1fc);
      }
      pvVar7 = pvVar21;
    } while (pvVar21 != pvVar20);
  }
  *(void **)((int)pvVar21 + 0x40) = pvVar21;
  *(int *)(*(int *)(this + 0x1fc) + 0x44) = *(int *)(this + 0x1fc);
  if (*(int *)(iVar5 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_00090478 + 0x90434,0x34cf,DAT_00090474 + 0x9042c);
  }
  if (*piVar2 == local_3c) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


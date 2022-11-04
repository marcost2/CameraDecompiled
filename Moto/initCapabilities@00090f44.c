
/* qcamera::QCamera3HardwareInterface::initCapabilities(unsigned int) */

int qcamera::QCamera3HardwareInterface::initCapabilities(uint param_1)

{
  int iVar1;
  int iVar2;
  int *this;
  QCamera3HeapMemory *this_00;
  void *pvVar3;
  undefined4 uVar4;
  void *__src;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 uVar12;
  int iVar13;
  code *pcVar14;
  uint uVar15;
  undefined4 *local_44c;
  undefined4 local_448 [80];
  undefined4 local_308 [80];
  int local_1c8 [80];
  undefined8 local_88;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 uStack112;
  undefined8 local_68;
  undefined8 uStack96;
  undefined8 local_58;
  undefined8 uStack80;
  undefined8 local_48;
  undefined4 uStack64;
  undefined4 local_3c;
  undefined4 uStack56;
  undefined8 uStack52;
  int local_28;
  
  piVar11 = *(int **)(DAT_00091294 + 0x90f56);
  local_28 = *piVar11;
  local_44c = (undefined4 *)0x0;
  iVar1 = camera_open(param_1 & 0xff,&local_44c);
  if (iVar1 == 0) {
    if (local_44c != (undefined4 *)0x0) {
      this = (int *)operator_new(0x610);
      this_00 = (QCamera3HeapMemory *)
                QCamera3HeapMemory::QCamera3HeapMemory((QCamera3HeapMemory *)this,1);
      iVar1 = QCamera3HeapMemory::allocate(this_00,0x5840);
      if (iVar1 == 0) {
        pvVar3 = (void *)(**(code **)(*this + 8))(this,0);
        __aeabi_memclr8(pvVar3,0x5840);
        uVar12 = *local_44c;
        pcVar14 = *(code **)(local_44c[1] + 0xc);
        uVar10 = QCamera3Memory::getFd((QCamera3Memory *)this,0);
        uVar4 = (**(code **)(*this + 8))(this,0);
        iVar1 = (*pcVar14)(uVar12,0,uVar10,0x5840,uVar4);
        if (iVar1 < 0) {
          if (*(int *)(*(int *)(DAT_00091418 + 0x91226) + 0x20) != 0) {
            mm_camera_debug_log(1,1,DAT_00091420 + 0x91242,0x201a,DAT_0009141c + 0x9123a);
          }
        }
        else {
          iVar1 = (**(code **)local_44c[1])(*local_44c);
          if (iVar1 < 0) {
            if (*(int *)(*(int *)(DAT_00091424 + 0x9124c) + 0x20) != 0) {
              mm_camera_debug_log(1,1,DAT_0009142c + 0x91268,0x2021,DAT_00091428 + 0x91260);
            }
          }
          else {
            pvVar3 = malloc(0x5840);
            iVar2 = *(int *)(DAT_00091430 + 0x91070);
            *(void **)(iVar2 + param_1 * 4) = pvVar3;
            if (pvVar3 == (void *)0x0) {
              if (*(int *)(*(int *)(DAT_00091434 + 0x91272) + 0x20) != 0) {
                mm_camera_debug_log(1,1,DAT_0009143c + 0x9128e,0x2026,DAT_00091438 + 0x91286);
              }
            }
            else {
              __src = (void *)(**(code **)(*this + 8))(this,0);
              __aeabi_memcpy8(pvVar3,__src,0x5840);
              iVar1 = *(int *)(iVar2 + param_1 * 4);
              if (*(int *)(iVar1 + 0x26f8) != 0) {
                *(undefined4 *)(iVar1 + 0x25ac) = 1;
              }
              local_88 = 0;
              uStack128 = 0;
              uStack56 = 0;
              uStack52 = 0;
              local_48 = 0;
              uStack64 = 0;
              local_3c = 0;
              local_58 = 0;
              uStack80 = 0;
              local_68 = 0;
              uStack96 = 0;
              local_78 = 0;
              uStack112 = 0;
              property_get(DAT_00091440 + 0x910e2,&local_88,DAT_00091444 + 0x910e4);
              iVar1 = __strlen_chk(&local_88,0x5c);
              if ((iVar1 != 0) && (uVar5 = atoi((char *)&local_88), (uVar5 & 0xff) == param_1)) {
                *(undefined4 *)(*(int *)(iVar2 + param_1 * 4) + 0x25ac) = 1;
              }
              if (*(int *)(*(int *)(iVar2 + param_1 * 4) + 0x25ac) != 0) {
                iVar1 = *(int *)(DAT_00091448 + 0x9111e);
                if (*(int *)(iVar1 + 0x34) != 0) {
                  mm_camera_debug_log(1,6,DAT_00091450 + 0x9113c,0x203c,DAT_0009144c + 0x91132,
                                      param_1);
                }
                property_get(DAT_00091454 + 0x9114a,&local_88,DAT_00091458 + 0x9114c);
                iVar9 = __strlen_chk(&local_88,0x5c);
                if ((iVar9 != 0) &&
                   (iVar9 = memcmp(&local_88,(void *)(DAT_0009145c + 0x91166),8), iVar9 == 0)) {
                  __aeabi_memclr8(local_1c8,0x140);
                  __aeabi_memclr8(local_308,0x140);
                  __aeabi_memclr8(local_448,0x140);
                  iVar9 = *(int *)(iVar2 + param_1 * 4);
                  uVar5 = *(uint *)(iVar9 + 0x5c8);
                  if (uVar5 == 0) {
                    iVar8 = 0;
                  }
                  else {
                    uVar15 = 0;
                    iVar6 = iVar9;
                    iVar7 = 0;
                    do {
                      iVar8 = iVar7;
                      if ((*(int *)(iVar6 + 0x5cc) <= *(int *)(iVar9 + 0x2aec)) &&
                         (iVar13 = *(int *)(iVar9 + 0x5d0 + uVar15 * 8),
                         iVar13 <= *(int *)(iVar9 + 0x2af0))) {
                        local_1c8[iVar7 * 2] = *(int *)(iVar6 + 0x5cc);
                        local_1c8[iVar7 * 2 + 1] = iVar13;
                        uVar10 = *(undefined4 *)(iVar6 + 0x714);
                        local_308[iVar7 * 2] = *(undefined4 *)(iVar6 + 0x710);
                        local_308[iVar7 * 2 + 1] = uVar10;
                        uVar10 = *(undefined4 *)(iVar6 + 0x3a64);
                        local_448[iVar7 * 2] = *(undefined4 *)(iVar6 + 0x3a60);
                        iVar8 = iVar7 + 1;
                        local_448[iVar7 * 2 + 1] = uVar10;
                        uVar5 = *(uint *)(iVar9 + 0x5c8);
                      }
                      iVar6 = iVar6 + 8;
                      uVar15 = uVar15 + 1;
                      iVar7 = iVar8;
                    } while (uVar15 < uVar5);
                  }
                  *(int *)(iVar9 + 0x5c8) = iVar8;
                  __aeabi_memcpy8((void *)(*(int *)(iVar2 + param_1 * 4) + 0x5cc),local_1c8,0x140);
                  __aeabi_memcpy8((void *)(*(int *)(iVar2 + param_1 * 4) + 0x710),local_308,0x140);
                  __aeabi_memcpy8((void *)(*(int *)(iVar2 + param_1 * 4) + 0x3a60),local_448,0x140);
                  if (*(int *)(iVar1 + 0x2c) != 0) {
                    iVar9 = *(int *)(iVar2 + param_1 * 4);
                    mm_camera_debug_log(1,4,DAT_00091464 + 0x91338,0x205c,DAT_00091460 + 0x91322,
                                        *(undefined4 *)(iVar9 + 0x2aec),
                                        *(undefined4 *)(iVar9 + 0x2af0),
                                        *(undefined4 *)(iVar9 + 0x5cc),
                                        *(undefined4 *)(iVar9 + 0x5d0));
                  }
                }
                iVar9 = *(int *)(iVar2 + param_1 * 4);
                uVar10 = *(undefined4 *)(iVar9 + 0x2af0);
                *(undefined4 *)(iVar9 + 0x3414) = uVar10;
                uVar4 = *(undefined4 *)(iVar9 + 0x2aec);
                *(undefined4 *)(iVar9 + 0x3410) = uVar4;
                *(undefined4 *)(*(int *)(iVar2 + param_1 * 4) + 0x3418) = 0;
                *(undefined4 *)(*(int *)(iVar2 + param_1 * 4) + 0x341c) = 0;
                *(undefined4 *)(*(int *)(iVar2 + param_1 * 4) + 0x3420) = uVar4;
                *(undefined4 *)(*(int *)(iVar2 + param_1 * 4) + 0x3424) = uVar10;
                if (*(int *)(iVar1 + 0x2c) != 0) {
                  mm_camera_debug_log(1,4,DAT_0009146c + 0x9139e,0x2067,DAT_00091468 + 0x91390,uVar4
                                      ,uVar10);
                }
              }
              iVar9 = *(int *)(iVar2 + param_1 * 4);
              iVar1 = 0;
              *(undefined4 *)(iVar9 + 0x3ef4) = 0;
              *(undefined4 *)(iVar9 + 0x3ef0) = 0;
              iVar9 = *(int *)(iVar2 + param_1 * 4);
              *(undefined4 *)(iVar9 + 0x3f28) = 0;
              *(undefined4 *)(iVar9 + 0x3f24) = 0;
              iVar2 = *(int *)(iVar2 + param_1 * 4);
              *(undefined4 *)(iVar2 + 0x3f5c) = 0;
              *(undefined4 *)(iVar2 + 0x3f58) = 0;
            }
          }
          (**(code **)(local_44c[1] + 0x14))(*local_44c,0);
        }
        QCamera3HeapMemory::deallocate((QCamera3HeapMemory *)this);
      }
      else if (*(int *)(*(int *)(DAT_000912a4 + 0x90fba) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000912ac + 0x90fd6,0x200e,DAT_000912a8 + 0x90fce);
      }
      (**(code **)(*this + 0x20))(this);
      (**(code **)(local_44c[1] + 8))(*local_44c);
      local_44c = (undefined4 *)0x0;
      goto LAB_000913fc;
    }
    iVar1 = 0;
    if (*(int *)(*(int *)(DAT_000912b0 + 0x90fe2) + 0x20) == 0) goto LAB_000913fc;
    uVar10 = 0x2002;
    iVar2 = DAT_000912b4 + 0x90ff6;
    iVar1 = 0;
    iVar9 = DAT_000912b8 + 0x91000;
  }
  else {
    if (*(int *)(*(int *)(DAT_00091298 + 0x90f72) + 0x20) == 0) goto LAB_000913fc;
    uVar10 = 0x1ffe;
    iVar2 = DAT_0009129c + 0x90f86;
    iVar9 = DAT_000912a0 + 0x90f90;
  }
  mm_camera_debug_log(1,1,iVar9,uVar10,iVar2,iVar1);
LAB_000913fc:
  if (*piVar11 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}


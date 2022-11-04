
/* qcamera::QCameraGrallocMemory::allocate(unsigned char, unsigned int, unsigned int) */

undefined4 qcamera::QCameraGrallocMemory::allocate(uchar param_1,uint param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  uint extraout_r1;
  uint extraout_r1_00;
  int iVar6;
  uint extraout_r1_01;
  uint extraout_r1_02;
  uint extraout_r1_03;
  uint uVar7;
  uint extraout_r1_04;
  uint extraout_r1_05;
  uint extraout_r1_06;
  uint extraout_r1_07;
  uint extraout_r1_08;
  uint extraout_r1_09;
  uint extraout_r1_10;
  uint extraout_r1_11;
  int iVar8;
  undefined4 uVar9;
  uint *puVar10;
  int iVar11;
  int *piVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined8 uVar15;
  uint local_54;
  undefined4 local_50;
  undefined auStack76 [4];
  int local_48;
  undefined4 local_44;
  int local_28;
  
  piVar1 = (int *)(uint)param_1;
  piVar12 = *(int **)(DAT_000c7a90 + 0xc77d4);
  local_28 = *piVar12;
  puVar10 = *(uint **)(DAT_000c7a94 + 0xc77e2);
  local_54 = param_2;
  if ((1 < *puVar10) &&
     (FUN_000c51f4(&local_48,param_2,param_3,DAT_000c7a9c + 0xc77f8), local_54 = extraout_r1,
     1 < *puVar10)) {
    if ((**(byte **)(DAT_000c7aa0 + 0xc7806) & 1) == 0) {
      atrace_setup();
      local_54 = extraout_r1_08;
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000c7aa4 + 0xc7816) + 1) << 0x1d) < 0) {
      atrace_begin_body(&local_48);
      local_54 = extraout_r1_09;
    }
  }
  local_48 = 0;
  local_44 = 0;
  iVar14 = *(int *)(DAT_000c7aa8 + 0xc782a);
  if (*(int *)(iVar14 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000c7ab0 + 0xc7846,0x84e,DAT_000c7aac + 0xc783e);
    local_54 = extraout_r1_00;
  }
  iVar2 = piVar1[0x256];
  if (iVar2 == 0) {
    if (*(int *)(iVar14 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000c7ac0 + 0xc789c,0x851,DAT_000c7abc + 0xc7894);
      local_54 = extraout_r1_01;
    }
    if (1 < *puVar10) {
      if ((**(byte **)(DAT_000c7ac4 + 0xc78aa) & 1) == 0) {
        atrace_setup();
        local_54 = extraout_r1_10;
      }
      if ((int)((uint)*(byte *)(*(int *)(DAT_000c7ac8 + 0xc78ba) + 1) << 0x1d) < 0) {
        atrace_end_body();
        local_54 = extraout_r1_11;
      }
    }
    uVar9 = 0xffffffda;
  }
  else {
    iVar2 = (**(code **)(iVar2 + 0x20))(iVar2,piVar1 + 0x2a0);
    if (iVar2 == 0) {
      iVar2 = (**(code **)(piVar1[0x256] + 0xc))(piVar1[0x256],param_2);
      if (iVar2 == 0) {
        iVar2 = (**(code **)(piVar1[0x256] + 0x10))
                          (piVar1[0x256],piVar1[599],piVar1[600],piVar1[0x259]);
        if (iVar2 == 0) {
          uVar7 = piVar1[0x25c];
          uVar15 = (**(code **)(piVar1[0x256] + 0x18))(piVar1[0x256],uVar7 | 0x20000);
          local_54 = (uint)((ulonglong)uVar15 >> 0x20);
          if ((int)uVar15 == 0) {
            if (*(int *)(iVar14 + 0x28) != 0) {
              mm_camera_debug_log(1,3,DAT_000c7af8 + 0xc7a10,0x87b,DAT_000c7af4 + 0xc79f8,
                                  uVar7 | 0x20000,piVar1[0x256],piVar1[599],piVar1[600],
                                  piVar1[0x25a],piVar1[0x25b],piVar1[0x259]);
              local_54 = extraout_r1_05;
            }
            *(char *)((int)piVar1 + 5) = (char)param_2;
            if (((*(byte *)(piVar1 + 0x2a2) - 1 & 0xff) < param_2) ||
               (*(char *)(piVar1 + 0x2a2) = (char)param_2, param_2 != 0)) {
              iVar11 = 0;
              iVar6 = DAT_000c7afc + 0xc7a42;
              iVar8 = DAT_000c7b00 + 0xc7a48;
              local_54 = 0;
              iVar2 = 0;
LAB_000c7a4c:
              puVar13 = (undefined4 *)((int)piVar1 + iVar2 + 0x618);
              iVar4 = (**(code **)piVar1[0x256])((code **)piVar1[0x256],puVar13,auStack76);
              if (iVar4 == 0) {
                if (*(int *)(iVar14 + 0x2c) != 0) {
                  mm_camera_debug_log(1,4,DAT_000c7ec0 + 0xc7b28,0x887,DAT_000c7ebc + 0xc7b1c,
                                      *puVar13);
                }
                *(undefined4 *)((int)piVar1 + iVar2 + 0x718) = 1;
              }
              else {
                *(undefined4 *)((int)piVar1 + iVar2 + 0x718) = 0;
                if (*(int *)(iVar14 + 0x20) != 0) {
                  mm_camera_debug_log(1,1,DAT_000c7b04 + 0xc7a8c,0x88b,iVar6,local_54,iVar4);
                }
              }
              if (*(int *)(iVar14 + 0x2c) != 0) {
                mm_camera_debug_log(1,4,DAT_000c7ec8 + 0xc7b50,0x88e,DAT_000c7ec4 + 0xc7b44,*puVar13
                                   );
              }
              if (iVar4 == 0) {
                uVar9 = **(undefined4 **)((int)piVar1 + iVar2 + 0x618);
                *(undefined4 *)((int)piVar1 + iVar2 + 0x858) = uVar9;
                setMetaData(uVar9,0x100,piVar1 + 0x25d);
                iVar4 = __open_2(iVar8,0);
                piVar1[iVar11 + 3] = iVar4;
                if (iVar4 < 0) {
                  if (*(int *)(iVar14 + 0x20) != 0) {
                    mm_camera_debug_log(1,1,DAT_000c7f14 + 0xc7d40,0x8b1,DAT_000c7f10 + 0xc7d38);
                  }
                  if (iVar2 != 0) {
                    iVar11 = 0;
                    iVar2 = DAT_000c7f18 + 0xc7d54;
                    iVar6 = DAT_000c7f1c + 0xc7d5a;
                    iVar8 = DAT_000c7f20 + 0xc7d60;
                    uVar7 = 0;
                    do {
                      local_50 = *(undefined4 *)((int)piVar1 + iVar11 + 0x10);
                      uVar5 = ioctl(*(int *)((int)piVar1 + iVar11 + 0xc),0xc0044901,&local_50);
                      if ((0x7fffffff < uVar5) && (*(int *)(iVar14 + 0x20) != 0)) {
                        mm_camera_debug_log(1,1,iVar6,0x8b7,iVar2);
                      }
                      close(*(int *)((int)piVar1 + iVar11 + 0xc));
                      if ((piVar1[uVar7 + 0x1c6] != 0) &&
                         ((**(code **)(piVar1[0x256] + 8))(piVar1[0x256],piVar1[uVar7 + 0x186]),
                         *(int *)(iVar14 + 0x28) != 0)) {
                        mm_camera_debug_log(1,3,iVar6,0x8bc,iVar8,
                                            *(undefined4 *)piVar1[uVar7 + 0x186]);
                      }
                      iVar11 = iVar11 + 0x18;
                      uVar5 = uVar7 + 1;
                      piVar1[uVar7 + 0x1c6] = 0;
                      piVar1[uVar7 + 0x186] = 0;
                      uVar7 = uVar5;
                    } while (local_54 != uVar5);
                  }
                }
                else {
                  local_44 = *(undefined4 *)(*(int *)((int)piVar1 + iVar2 + 0x858) + 0xc);
                  iVar4 = ioctl(iVar4,0xc0084905,&local_48);
                  if (-1 < iVar4) goto code_r0x000c7ba6;
                  if (*(int *)(iVar14 + 0x20) != 0) {
                    mm_camera_debug_log(1,1,DAT_000c7f28 + 0xc7e00,0x8c8,DAT_000c7f24 + 0xc7df8);
                  }
                  if (iVar2 != 0) {
                    iVar4 = 0;
                    iVar2 = DAT_000c7f2c + 0xc7e14;
                    iVar6 = DAT_000c7f30 + 0xc7e1a;
                    iVar8 = DAT_000c7f34 + 0xc7e20;
                    uVar7 = 0;
                    do {
                      local_50 = *(undefined4 *)((int)piVar1 + iVar4 + 0x10);
                      uVar5 = ioctl(*(int *)((int)piVar1 + iVar4 + 0xc),0xc0044901,&local_50);
                      if ((0x7fffffff < uVar5) && (*(int *)(iVar14 + 0x20) != 0)) {
                        mm_camera_debug_log(1,1,iVar6,0x8ce,iVar2);
                      }
                      close(*(int *)((int)piVar1 + iVar4 + 0xc));
                      if ((piVar1[uVar7 + 0x1c6] != 0) &&
                         ((**(code **)(piVar1[0x256] + 8))(piVar1[0x256],piVar1[uVar7 + 0x186]),
                         *(int *)(iVar14 + 0x28) != 0)) {
                        mm_camera_debug_log(1,3,iVar6,0x8d4,iVar8,
                                            *(undefined4 *)piVar1[uVar7 + 0x186]);
                      }
                      uVar5 = uVar7 + 1;
                      iVar4 = iVar4 + 0x18;
                      piVar1[uVar7 + 0x1c6] = 0;
                      piVar1[uVar7 + 0x186] = 0;
                      uVar7 = uVar5;
                    } while (local_54 != uVar5);
                  }
                  close(piVar1[iVar11 + 3]);
                }
              }
              else {
                if (*(int *)(iVar14 + 0x20) != 0) {
                  pcVar3 = strerror(-iVar4);
                  mm_camera_debug_log(1,1,DAT_000c7f00 + 0xc7c80,0x892,DAT_000c7efc + 0xc7c72,pcVar3
                                      ,-iVar4);
                }
                if (iVar2 != 0) {
                  iVar11 = 0;
                  iVar2 = DAT_000c7f04 + 0xc7c94;
                  iVar6 = DAT_000c7f08 + 0xc7c9a;
                  iVar8 = DAT_000c7f0c + 0xc7ca0;
                  uVar7 = 0;
                  do {
                    local_50 = *(undefined4 *)((int)piVar1 + iVar11 + 0x10);
                    uVar5 = ioctl(*(int *)((int)piVar1 + iVar11 + 0xc),0xc0044901,&local_50);
                    if ((0x7fffffff < uVar5) && (*(int *)(iVar14 + 0x20) != 0)) {
                      mm_camera_debug_log(1,1,iVar6,0x89b,iVar2);
                    }
                    close(*(int *)((int)piVar1 + iVar11 + 0xc));
                    if ((piVar1[uVar7 + 0x1c6] != 0) &&
                       ((**(code **)(piVar1[0x256] + 8))(piVar1[0x256],piVar1[uVar7 + 0x186]),
                       *(int *)(iVar14 + 0x28) != 0)) {
                      mm_camera_debug_log(1,3,iVar6,0x8a2,iVar8,*(undefined4 *)piVar1[uVar7 + 0x186]
                                         );
                    }
                    iVar11 = iVar11 + 0x18;
                    uVar5 = uVar7 + 1;
                    piVar1[uVar7 + 0x1c6] = 0;
                    piVar1[uVar7 + 0x186] = 0;
                    uVar7 = uVar5;
                  } while (local_54 != uVar5);
                }
              }
              (**(code **)(*piVar1 + 0x30))(piVar1);
              local_54 = extraout_r1_07;
              goto LAB_000c793a;
            }
LAB_000c7c28:
            uVar9 = 0;
            if (0 < piVar1[0x2a0]) {
              iVar2 = 0;
              do {
                (**(code **)(piVar1[0x256] + 8))(piVar1[0x256],piVar1[iVar2 + 0x186]);
                piVar1[iVar2 + 0x1c6] = 0;
                iVar2 = iVar2 + 1;
                local_54 = extraout_r1_06;
              } while (iVar2 < piVar1[0x2a0]);
            }
            goto LAB_000c7944;
          }
          local_54 = *(uint *)(iVar14 + 0x20);
          if (local_54 != 0) {
            mm_camera_debug_log(1,1,DAT_000c7af0 + 0xc79d0,0x875,DAT_000c7aec + 0xc79c4,(int)uVar15)
            ;
            local_54 = extraout_r1_04;
          }
        }
        else {
          local_54 = *(uint *)(iVar14 + 0x20);
          if (local_54 != 0) {
            iVar2 = -iVar2;
            pcVar3 = strerror(iVar2);
            uVar9 = 0x86b;
            iVar6 = DAT_000c7ad4 + 0xc792a;
            iVar8 = DAT_000c7ad8 + 0xc7938;
            goto LAB_000c7936;
          }
        }
      }
      else {
        local_54 = *(uint *)(iVar14 + 0x20);
        if (local_54 != 0) {
          iVar2 = -iVar2;
          pcVar3 = strerror(iVar2);
          uVar9 = 0x863;
          iVar6 = DAT_000c7acc + 0xc78ec;
          iVar8 = DAT_000c7ad0 + 0xc78fa;
          goto LAB_000c7936;
        }
      }
    }
    else {
      local_54 = *(uint *)(iVar14 + 0x20);
      if (local_54 != 0) {
        iVar2 = -iVar2;
        pcVar3 = strerror(iVar2);
        uVar9 = 0x85b;
        iVar6 = DAT_000c7ab4 + 0xc7874;
        iVar8 = DAT_000c7ab8 + 0xc7882;
LAB_000c7936:
        mm_camera_debug_log(1,1,iVar8,uVar9,iVar6,pcVar3,iVar2);
        local_54 = extraout_r1_02;
      }
    }
LAB_000c793a:
    uVar9 = 0x80000000;
  }
  *(undefined *)(piVar1 + 0x2a2) = 0;
LAB_000c7944:
  if (*(int *)(iVar14 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000c7ae0 + 0xc795e,0x8f8,DAT_000c7adc + 0xc7956);
    local_54 = extraout_r1_03;
  }
  if (1 < *puVar10) {
    if ((**(byte **)(DAT_000c7ae4 + 0xc796c) & 1) == 0) {
      atrace_setup(0,local_54);
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000c7ae8 + 0xc797c) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  if (*piVar12 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
code_r0x000c7ba6:
  setMetaData(*(undefined4 *)((int)piVar1 + iVar2 + 0x858),0x200,piVar1 + 0x2a1);
  iVar4 = *(int *)((int)piVar1 + iVar2 + 0x858);
  uVar9 = (*(code *)piVar1[0x25e])
                    (*(undefined4 *)(iVar4 + 0xc),*(undefined4 *)(iVar4 + 0x34),1,piVar1[0x25f]);
  *(undefined4 *)((int)piVar1 + iVar2 + 0x980) = uVar9;
  if (*(int *)(iVar14 + 0x28) != 0) {
    iVar4 = *(int *)((int)piVar1 + iVar2 + 0x858);
    mm_camera_debug_log(1,3,DAT_000c7f3c + 0xc7bfa,0x8e8,DAT_000c7f38 + 0xc7be4,local_54,
                        *(undefined4 *)(iVar4 + 0xc),*(undefined4 *)(iVar4 + 0x34),
                        *(undefined4 *)(iVar4 + 0x38));
  }
  local_54 = local_54 + 1;
  piVar1[iVar11 + 2] = *(int *)(*(int *)((int)piVar1 + iVar2 + 0x858) + 0xc);
  iVar4 = *(int *)(*(int *)((int)piVar1 + iVar2 + 0x858) + 0x34);
  piVar1[iVar11 + 4] = local_48;
  piVar1[iVar11 + 5] = iVar4;
  iVar11 = iVar11 + 6;
  iVar2 = iVar2 + 4;
  if (*(byte *)(piVar1 + 0x2a2) <= local_54) goto LAB_000c7c28;
  goto LAB_000c7a4c;
}


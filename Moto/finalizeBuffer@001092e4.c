
/* WARNING: Could not reconcile some variable overlaps */
/* qcamera::MotMakernote::finalizeBuffer(void**, unsigned short*) */

undefined4 __thiscall
qcamera::MotMakernote::finalizeBuffer(MotMakernote *this,void **param_1,ushort *param_2)

{
  byte bVar1;
  ushort uVar2;
  undefined *puVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined *puVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  int *piVar12;
  int local_2c;
  undefined4 local_28;
  
  pthread_mutex_lock((pthread_mutex_t *)this);
  this[0x10] = (MotMakernote)0x1;
  local_28 = (uint)*(ushort *)(this + 4) * 0xc + 0xe;
  uVar2 = (short)local_28 + *(short *)(this + 10);
  *param_2 = uVar2;
  pvVar4 = malloc((uint)uVar2);
  *param_1 = pvVar4;
  if (pvVar4 == (void *)0x0) {
    __android_log_print(6,DAT_00109720 + 0x1096e0,DAT_00109724 + 0x1096e2,DAT_00109728 + 0x1096e4);
    *param_2 = 0;
    uVar10 = 0xfffffff4;
  }
  else {
    __aeabi_memclr8(pvVar4,(uint)*param_2);
    *(undefined4 *)*param_1 = 0x544f4d;
    *(undefined *)((int)*param_1 + 4) = 1;
    *(undefined *)((int)*param_1 + 5) = 1;
    *(undefined *)((int)*param_1 + 6) = 1;
    *(undefined *)((int)*param_1 + 7) = 1;
    *(MotMakernote *)((int)*param_1 + 8) = this[5];
    *(MotMakernote *)((int)*param_1 + 9) = this[4];
    local_2c = 10;
    if (*(short *)(this + 4) != 0) {
      puVar8 = *(undefined **)(this + 6);
      uVar11 = 0;
      iVar7 = DAT_0010971c + 0x109376;
      while( true ) {
        uVar2 = *(ushort *)(puVar8 + 2);
        iVar5 = *(int *)(puVar8 + 4);
        *(undefined *)((int)*param_1 + local_2c) = puVar8[1];
        bVar1 = *(byte *)((uint)uVar2 + iVar7 + -1);
        *(undefined *)((int)*param_1 + local_2c + 1) = *puVar8;
        *(undefined *)((int)*param_1 + local_2c + 2) = puVar8[3];
        *(undefined *)((int)*param_1 + local_2c + 3) = puVar8[2];
        *(undefined *)((int)*param_1 + local_2c + 4) = puVar8[7];
        uVar9 = iVar5 * (uint)bVar1;
        *(undefined *)((int)*param_1 + local_2c + 5) = puVar8[6];
        *(undefined *)((int)*param_1 + local_2c + 6) = puVar8[5];
        *(undefined *)((int)*param_1 + local_2c + 7) = puVar8[4];
        if (4 < uVar9) {
          puVar3 = &stack0xffffffe4;
          *(undefined *)((int)*param_1 + local_2c + 8) = local_28._3_1_;
          *(undefined *)((int)*param_1 + local_2c + 9) = local_28._2_1_;
          *(undefined *)((int)*param_1 + local_2c + 10) = local_28._1_1_;
          *(undefined *)((int)*param_1 + local_2c + 0xb) = (undefined)local_28;
          local_2c = local_2c + 0xc;
        }
        else {
          puVar3 = &stack0xffffffe0;
          local_2c = local_2c + 8;
        }
        piVar12 = (int *)(puVar3 + -0xc);
        switch((uint)*(ushort *)(puVar8 + 2)) {
        case 1:
        case 2:
        case 6:
        case 7:
          __aeabi_memcpy8((void *)(*piVar12 + (int)*param_1),*(void **)(puVar8 + 8),
                          *(int *)(puVar8 + 4) *
                          (uint)*(byte *)((uint)*(ushort *)(puVar8 + 2) + iVar7 + -1));
          *piVar12 = *(int *)(puVar8 + 4) *
                     (uint)*(byte *)((uint)*(ushort *)(puVar8 + 2) + iVar7 + -1) + *piVar12;
          break;
        case 3:
        case 8:
          if (*(int *)(puVar8 + 4) != 0) {
            iVar5 = *piVar12;
            uVar6 = 0;
            do {
              *(undefined *)((int)*param_1 + iVar5) =
                   *(undefined *)(*(int *)(puVar8 + 8) + uVar6 * 2 + 1);
              iVar5 = uVar6 * 2;
              uVar6 = uVar6 + 1;
              *(undefined *)((int)*param_1 + *piVar12 + 1) =
                   *(undefined *)(*(int *)(puVar8 + 8) + iVar5);
              iVar5 = *piVar12 + 2;
              *piVar12 = iVar5;
            } while (uVar6 < *(uint *)(puVar8 + 4));
          }
          break;
        case 4:
        case 9:
        case 0xb:
          if (*(int *)(puVar8 + 4) != 0) {
            iVar5 = *piVar12;
            uVar6 = 0;
            do {
              *(undefined *)((int)*param_1 + iVar5) =
                   *(undefined *)(*(int *)(puVar8 + 8) + uVar6 * 4 + 3);
              *(undefined *)((int)*param_1 + *piVar12 + 1) =
                   *(undefined *)(*(int *)(puVar8 + 8) + uVar6 * 4 + 2);
              *(undefined *)((int)*param_1 + *piVar12 + 2) =
                   *(undefined *)(*(int *)(puVar8 + 8) + uVar6 * 4 + 1);
              iVar5 = uVar6 * 4;
              uVar6 = uVar6 + 1;
              *(undefined *)((int)*param_1 + *piVar12 + 3) =
                   *(undefined *)(*(int *)(puVar8 + 8) + iVar5);
              iVar5 = *piVar12 + 4;
              *piVar12 = iVar5;
            } while (uVar6 < *(uint *)(puVar8 + 4));
          }
          break;
        case 5:
        case 10:
          if ((*(uint *)(puVar8 + 4) & 0x7fffffff) != 0) {
            iVar5 = *piVar12;
            uVar6 = 0;
            do {
              *(undefined *)((int)*param_1 + iVar5) =
                   *(undefined *)(*(int *)(puVar8 + 8) + uVar6 * 4 + 3);
              *(undefined *)((int)*param_1 + *piVar12 + 1) =
                   *(undefined *)(*(int *)(puVar8 + 8) + uVar6 * 4 + 2);
              *(undefined *)((int)*param_1 + *piVar12 + 2) =
                   *(undefined *)(*(int *)(puVar8 + 8) + uVar6 * 4 + 1);
              *(undefined *)((int)*param_1 + *piVar12 + 3) =
                   *(undefined *)(*(int *)(puVar8 + 8) + uVar6 * 4);
              iVar5 = *piVar12;
              *piVar12 = iVar5 + 4;
              *(undefined *)((int)*param_1 + iVar5 + 4) =
                   *(undefined *)(*(int *)(puVar8 + 8) + uVar6 * 4 + 7);
              *(undefined *)((int)*param_1 + *piVar12 + 1) =
                   *(undefined *)(*(int *)(puVar8 + 8) + uVar6 * 4 + 6);
              *(undefined *)((int)*param_1 + *piVar12 + 2) =
                   *(undefined *)(*(int *)(puVar8 + 8) + uVar6 * 4 + 5);
              iVar5 = uVar6 * 4;
              uVar6 = uVar6 + 1;
              *(undefined *)((int)*param_1 + *piVar12 + 3) =
                   *(undefined *)(*(int *)(puVar8 + 8) + iVar5 + 4);
              iVar5 = *piVar12 + 4;
              *piVar12 = iVar5;
            } while (uVar6 < (uint)(*(int *)(puVar8 + 4) << 1));
          }
          break;
        case 0xc:
          if (*(int *)(puVar8 + 4) != 0) {
            iVar5 = *piVar12;
            uVar6 = 0;
            do {
              *(undefined *)((int)*param_1 + iVar5) =
                   *(undefined *)(*(int *)(puVar8 + 8) + uVar6 * 8 + 7);
              *(undefined *)((int)*param_1 + *piVar12 + 1) =
                   *(undefined *)(*(int *)(puVar8 + 8) + uVar6 * 8 + 6);
              *(undefined *)((int)*param_1 + *piVar12 + 2) =
                   *(undefined *)(*(int *)(puVar8 + 8) + uVar6 * 8 + 5);
              *(undefined *)((int)*param_1 + *piVar12 + 3) =
                   *(undefined *)(*(int *)(puVar8 + 8) + uVar6 * 8 + 4);
              *(undefined *)((int)*param_1 + *piVar12 + 4) =
                   *(undefined *)(*(int *)(puVar8 + 8) + uVar6 * 8 + 3);
              *(undefined *)((int)*param_1 + *piVar12 + 5) =
                   *(undefined *)(*(int *)(puVar8 + 8) + uVar6 * 8 + 2);
              *(undefined *)((int)*param_1 + *piVar12 + 6) =
                   *(undefined *)(*(int *)(puVar8 + 8) + uVar6 * 8 + 1);
              iVar5 = uVar6 * 8;
              uVar6 = uVar6 + 1;
              *(undefined *)((int)*param_1 + *piVar12 + 7) =
                   *(undefined *)(*(int *)(puVar8 + 8) + iVar5);
              iVar5 = *piVar12 + 8;
              *piVar12 = iVar5;
            } while (uVar6 < *(uint *)(puVar8 + 4));
          }
          break;
        default:
          __android_log_print(6,DAT_0010972c + 0x1096fa,DAT_00109730 + 0x1096fc,
                              DAT_00109734 + 0x1096fe);
          free(*param_1);
          uVar10 = 0;
          *param_1 = (void *)0x0;
          *param_2 = 0;
          goto LAB_0010970e;
        }
        if ((uVar9 < 4) && (4 >= uVar9)) {
          __aeabi_memclr8((void *)((int)*param_1 + local_2c),4 - uVar9);
          local_2c = local_2c + (4 - uVar9);
        }
        uVar11 = uVar11 + 1;
        if (*(ushort *)(this + 4) <= uVar11) break;
        puVar8 = *(undefined **)(puVar8 + 0xc);
      }
    }
    uVar10 = 0;
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined *)((int)*param_1 + local_2c) = 0;
    *(MotMakernote *)((int)*param_1 + local_2c + 1) = this[0xe];
    *(MotMakernote *)((int)*param_1 + local_2c + 2) = this[0xd];
    *(MotMakernote *)((int)*param_1 + local_2c + 3) = this[0xc];
  }
LAB_0010970e:
  pthread_mutex_unlock((pthread_mutex_t *)this);
  return uVar10;
}


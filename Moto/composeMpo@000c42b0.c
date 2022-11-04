
/* qcamera::QCameraMuxer::composeMpo(qcamera::cam_compose_jpeg_info_t*,
   qcamera::cam_compose_jpeg_info_t*) */

void __thiscall
qcamera::QCameraMuxer::composeMpo
          (QCameraMuxer *this,cam_compose_jpeg_info_t *param_1,cam_compose_jpeg_info_t *param_2)

{
  void **ppvVar1;
  undefined4 *puVar2;
  ssize_t sVar3;
  void **ppvVar4;
  void **ppvVar5;
  int iVar6;
  void *pvVar7;
  int iVar8;
  pthread_mutex_t *__mutex;
  void **ppvVar9;
  void *pvVar10;
  int *piVar11;
  void *pvVar12;
  undefined8 local_d8;
  undefined8 uStack208;
  undefined8 local_c8;
  undefined8 uStack192;
  undefined8 local_b8;
  undefined8 uStack176;
  undefined8 local_a8;
  undefined8 uStack160;
  undefined8 local_98;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 uStack112;
  undefined8 local_68;
  undefined8 uStack96;
  void *local_54 [2];
  void *local_4c;
  void *local_48;
  void **local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  int local_2c;
  int local_28;
  
  piVar11 = *(int **)(DAT_000c45f4 + 0xc42c2);
  local_28 = *piVar11;
  iVar8 = *(int *)(DAT_000c45f8 + 0xc42d0);
  if (*(int *)(iVar8 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000c4600 + 0xc42ec,0x91e,DAT_000c45fc + 0xc42e0,param_1,param_2);
  }
  if (**(int **)(DAT_000c4604 + 0xc42f4) == 0) {
    if (*(int *)(iVar8 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000c46f0 + 0xc4356,0x920,DAT_000c46ec + 0xc434e);
      if (*piVar11 == local_28) {
        return;
      }
      goto LAB_000c46e8;
    }
  }
  else {
    if (param_1 == (cam_compose_jpeg_info_t *)0x0 || param_2 == (cam_compose_jpeg_info_t *)0x0) {
      if (*(int *)(iVar8 + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000c460c + 0xc431a,0x922,DAT_000c4608 + 0xc4312);
      }
      if (*piVar11 == local_28) {
        sendEvtNotify(1,-0x80000000,0);
        return;
      }
      goto LAB_000c46e8;
    }
    __mutex = (pthread_mutex_t *)(this + 200);
    pthread_mutex_lock(__mutex);
    puVar2 = (undefined4 *)
             (**(code **)(this + 0x28))
                       (0xffffffff,
                        *(int *)(*(int *)(param_2 + 4) + 4) + *(int *)(*(int *)(param_1 + 4) + 4),1,
                        *(undefined4 *)(this + 0xcc));
    *(undefined4 **)(this + 0xc4) = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      if (*(int *)(iVar8 + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000c46f8 + 0xc45cc,0x92c,DAT_000c46f4 + 0xc45c4);
      }
      sendEvtNotify(1,-0x80000000,0);
      if (*piVar11 == local_28) {
        pthread_mutex_unlock(__mutex);
        return;
      }
      goto LAB_000c46e8;
    }
    local_3c = 2;
    ppvVar4 = *(void ***)(param_1 + 4);
    pvVar7 = ppvVar4[1];
    pvVar10 = *ppvVar4;
    ppvVar5 = *(void ***)(param_2 + 4);
    ppvVar9 = (void **)ppvVar5[1];
    pvVar12 = *ppvVar5;
    local_38 = *puVar2;
    local_30 = 0;
    iVar6 = (int)ppvVar4[1] + (int)ppvVar5[1];
    local_54[0] = pvVar10;
    local_4c = pvVar7;
    local_48 = pvVar12;
    local_40 = ppvVar9;
    local_2c = iVar6;
    if (*(int *)(iVar8 + 0x2c) != 0) {
      ppvVar1 = ppvVar5 + 1;
      ppvVar5 = (void **)(DAT_000c4700 + 0xc43f6);
      mm_camera_debug_log(1,4,ppvVar5,0x945,DAT_000c46fc + 0xc43e0,puVar2[1],
                          (int)ppvVar4[1] + (int)*ppvVar1,iVar6);
      if (*(int *)(iVar8 + 0x2c) != 0) {
        ppvVar5 = (void **)(DAT_000c4708 + 0xc4412);
        mm_camera_debug_log(1,4,ppvVar5,0x94b,DAT_000c4704 + 0xc4408,pvVar7,pvVar10,iVar6);
        if (*(int *)(iVar8 + 0x2c) != 0) {
          ppvVar5 = (void **)(DAT_000c4710 + 0xc442e);
          mm_camera_debug_log(1,4,ppvVar5,0x951,DAT_000c470c + 0xc4424,ppvVar9,pvVar12,iVar6);
        }
      }
    }
    if (this[0xd4] != (QCameraMuxer)0x0) {
      if (*(int *)(iVar8 + 0x2c) != 0) {
        ppvVar5 = (void **)(DAT_000c4718 + 0xc4456);
        mm_camera_debug_log(1,4,ppvVar5,0x954,DAT_000c4714 + 0xc444e);
      }
      local_98 = 0;
      uStack144 = 0;
      local_78 = 0;
      uStack112 = 0;
      local_68 = 0;
      uStack96 = 0;
      local_88 = 0;
      uStack128 = 0;
      FUN_000c4760(&local_98,&local_68,ppvVar5,DAT_000c471c + 0xc4482);
      pvVar7 = (void *)0x1ff;
      iVar6 = open((char *)&local_98,0x42);
      if (-1 < iVar6) {
        pvVar7 = local_4c;
        sVar3 = write(iVar6,local_54[0],(size_t)local_4c);
        fchmod(iVar6,0x1a4);
        if (*(int *)(iVar8 + 0x2c) != 0) {
          pvVar7 = (void *)(DAT_000c4724 + 0xc44c4);
          mm_camera_debug_log(1,4,pvVar7,0x961,DAT_000c4720 + 0xc44ba,sVar3);
        }
        close(iVar6);
      }
      if (*(int *)(iVar8 + 0x2c) != 0) {
        pvVar7 = (void *)(DAT_000c472c + 0xc44e4);
        mm_camera_debug_log(1,4,pvVar7,0x965,DAT_000c4728 + 0xc44dc);
      }
      local_d8 = 0;
      uStack208 = 0;
      local_b8 = 0;
      uStack176 = 0;
      local_a8 = 0;
      uStack160 = 0;
      local_c8 = 0;
      uStack192 = 0;
      FUN_000c4760(&local_d8,&local_a8,pvVar7,DAT_000c4730 + 0xc4510);
      ppvVar5 = (void **)0x1ff;
      iVar6 = open((char *)&local_d8,0x42);
      if (-1 < iVar6) {
        ppvVar5 = local_40;
        sVar3 = write(iVar6,local_48,(size_t)local_40);
        fchmod(iVar6,0x1a4);
        if (*(int *)(iVar8 + 0x2c) != 0) {
          ppvVar5 = (void **)(DAT_000c4738 + 0xc4552);
          mm_camera_debug_log(1,4,ppvVar5,0x972,DAT_000c4734 + 0xc4548,sVar3);
        }
        close(iVar6);
      }
    }
    iVar6 = (**(code **)(this + 0x1c))(local_54);
    if (*(int *)(iVar8 + 0x2c) != 0) {
      ppvVar5 = (void **)(DAT_000c4740 + 0xc457e);
      mm_camera_debug_log(1,4,ppvVar5,0x978,DAT_000c473c + 0xc4574,iVar6);
    }
    if (iVar6 == 0) {
      if (this[0xd4] != (QCameraMuxer)0x0) {
        local_98 = 0;
        uStack144 = 0;
        local_78 = 0;
        uStack112 = 0;
        local_68 = 0;
        uStack96 = 0;
        local_88 = 0;
        uStack128 = 0;
        FUN_000c4760(&local_98,&local_68,ppvVar5,DAT_000c474c + 0xc4640);
        iVar6 = open((char *)&local_98,0x42,0x1ff);
        if (-1 < iVar6) {
          sVar3 = write(iVar6,**(void ***)(this + 0xc4),(size_t)(*(void ***)(this + 0xc4))[1]);
          fchmod(iVar6,0x1a4);
          if (*(int *)(iVar8 + 0x2c) != 0) {
            mm_camera_debug_log(1,4,DAT_000c4754 + 0xc4688,0x98e,DAT_000c4750 + 0xc467e,sVar3);
          }
          close(iVar6);
        }
      }
      (**(code **)(this + 0x24))
                (*(undefined4 *)param_1,*(undefined4 *)(this + 0xc4),*(undefined4 *)(param_1 + 8),
                 *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(this + 0xcc));
      if (*(int *)(this + 0xc4) != 0) {
        (**(code **)(*(int *)(this + 0xc4) + 0xc))();
        *(undefined4 *)(this + 0xc4) = 0;
      }
      pthread_mutex_unlock(__mutex);
      if (*(int *)(iVar8 + 0x28) != 0) {
        mm_camera_debug_log(1,3,DAT_000c475c + 0xc46d6,0x99f,DAT_000c4758 + 0xc46ce);
      }
    }
    else {
      if (*(int *)(iVar8 + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000c4748 + 0xc459e,0x97b,DAT_000c4744 + 0xc4594,iVar6);
      }
      sendEvtNotify(1,-0x80000000,0);
      pthread_mutex_unlock(__mutex);
    }
  }
  if (*piVar11 == local_28) {
    return;
  }
LAB_000c46e8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


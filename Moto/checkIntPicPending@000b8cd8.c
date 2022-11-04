
/* qcamera::QCamera2HardwareInterface::checkIntPicPending(bool, char*) */

void __thiscall
qcamera::QCamera2HardwareInterface::checkIntPicPending
          (QCamera2HardwareInterface *this,bool param_1,char *param_2)

{
  bool bVar1;
  undefined auVar2 [16];
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  cam_stream_type_t cVar6;
  int *piVar7;
  pthread_mutex_t *__mutex;
  int *piVar8;
  int local_d0 [18];
  timespec local_88;
  timespec local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack112;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack96;
  undefined8 local_58;
  undefined8 uStack80;
  undefined8 local_48;
  undefined8 uStack64;
  undefined8 local_38;
  undefined8 uStack48;
  cam_format_t cStack40;
  int local_24;
  
  piVar8 = *(int **)(DAT_000b8eb4 + 0xb8cea);
  local_24 = *piVar8;
  uVar3 = clock_gettime(1,&local_88);
  if ((0x7fffffff < uVar3) && (*(int *)(*(int *)(DAT_000b8eb8 + 0xb8d06) + 0x20) != 0)) {
    local_d0[0] = DAT_000b8ebc + 0xb8d16;
    mm_camera_debug_log(1,1,DAT_000b8ec0 + 0xb8d1e,0x19ab);
  }
  local_80.tv_sec = local_88.tv_sec + 5;
  local_80.tv_nsec = local_88.tv_nsec;
  if ((this[0x1c22] == (QCamera2HardwareInterface)0x0) &&
     (this[0x1c23] == (QCamera2HardwareInterface)0x0)) goto LAB_000b8e9e;
  __mutex = (pthread_mutex_t *)(this + 0x1c68);
  pthread_mutex_lock(__mutex);
  iVar4 = pthread_cond_timedwait((pthread_cond_t *)(this + 0x1c6c),__mutex,&local_80);
  if ((iVar4 == 0x6e) || (this[0x1c24] == (QCamera2HardwareInterface)0x0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (this[0x1c22] == (QCamera2HardwareInterface)0x0) {
    if (this[0x1c23] != (QCamera2HardwareInterface)0x0) {
      local_78 = 1;
      cVar6 = 8;
      goto LAB_000b8d9a;
    }
  }
  else {
    local_78 = 0;
    cVar6 = 3;
LAB_000b8d9a:
    QCameraParametersIntf::getStreamFormat((QCameraParametersIntf *)(this + 0x4ac),cVar6,&cStack40);
  }
  pthread_mutex_unlock(__mutex);
  if (this[0x1c22] == (QCamera2HardwareInterface)0x0) {
    if (this[0x1c23] != (QCamera2HardwareInterface)0x0) {
      if (*(int **)(this + 0x9c8) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0x9c8) + 0x18))();
        if (*(int **)(this + 0x9c8) != (int *)0x0) {
          (**(code **)(**(int **)(this + 0x9c8) + 4))();
          *(undefined4 *)(this + 0x9c8) = 0;
        }
      }
      property_set(DAT_000b8ec4 + 0xb8e00,param_2);
    }
  }
  else {
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x928));
    if (this[0x54c] != (QCamera2HardwareInterface)0x0) {
      QCameraStateMachine::procAPI((QCameraStateMachine *)(this + 0x4dc),0x24,(void *)0x0);
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x928));
    this[0x81a] = (QCamera2HardwareInterface)param_1;
  }
  if (bVar1) {
    local_74 = *(undefined4 *)(this + 0x848);
    uStack112 = *(undefined4 *)(this + 0x84c);
    auVar2 = *(undefined (*) [16])(this + 0x1c54);
    local_38 = SUB168(auVar2,0);
    uStack48 = SUB168(auVar2 >> 0x40,0);
    local_48 = *(undefined8 *)(this + 0x1c44);
    uStack64 = *(undefined8 *)(this + 0x1c4c);
    local_58 = *(undefined8 *)(this + 0x1c34);
    uStack80 = *(undefined8 *)(this + 0x1c3c);
    local_68 = *(undefined8 *)(this + 0x1c24);
    uStack96 = *(undefined8 *)(this + 0x1c2c);
    *(undefined8 *)(this + 0x1c24) = 0;
    *(undefined8 *)(this + 0x1c2c) = 0;
    *(undefined8 *)(this + 0x1c44) = 0;
    *(undefined8 *)(this + 0x1c4c) = 0;
    *(undefined8 *)(this + 0x1c34) = 0;
    *(undefined8 *)(this + 0x1c3c) = 0;
    *(undefined8 *)*(undefined (*) [16])(this + 0x1c54) = 0;
    *(undefined8 *)(this + 0x1c5c) = 0;
    iVar4 = 0x48;
    local_6c = *(undefined4 *)(this + 0x1c64);
    puVar5 = &local_6c;
    piVar7 = local_d0;
    do {
      iVar4 = iVar4 + -4;
      *piVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar4 != 0);
    QCameraParametersIntf::setIntEvent((cam_int_evt_params_t)(this + 0x4ac));
  }
  clearIntPendingEvents(this);
LAB_000b8e9e:
  if (*piVar8 != local_24) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


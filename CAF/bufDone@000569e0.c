
/* qcamera::QCamera3Channel::bufDone(mm_camera_super_buf_t*) */

undefined4 __thiscall qcamera::QCamera3Channel::bufDone(QCamera3Channel *this,uint param_1)

{
  int **ppiVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  bool bVar7;
  
  if (*(int *)(param_1 + 8) == 0) {
    return 0;
  }
  uVar4 = 0;
  uVar6 = 0;
  do {
    ppiVar1 = (int **)(param_1 + uVar4 * 4 + 0x10);
    piVar3 = *ppiVar1;
    bVar7 = piVar3 != (int *)0x0;
    if (bVar7) {
      piVar3 = *(int **)(this + 0x44);
    }
    if (bVar7 && piVar3 != (int *)0x0) {
      uVar5 = 0;
      do {
        if (*(_Node **)(this + uVar5 * 4 + 0x24) != (_Node *)0x0) {
          iVar2 = android::List<qcamera::ReprocessBuffer>::_Node::getNext
                            (*(_Node **)(this + uVar5 * 4 + 0x24));
          piVar3 = *ppiVar1;
          if (iVar2 == *piVar3) {
            uVar6 = (**(code **)(**(int **)(this + uVar5 * 4 + 0x24) + 0xc))
                              (*(int **)(this + uVar5 * 4 + 0x24),piVar3[3]);
            break;
          }
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(this + 0x44));
    }
    uVar4 = uVar4 + 1;
    if (*(uint *)(param_1 + 8) <= uVar4) {
      return uVar6;
    }
  } while( true );
}


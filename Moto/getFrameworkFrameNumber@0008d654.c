
/* qcamera::FrameNumberRegistry::getFrameworkFrameNumber(unsigned int, unsigned int&) */

undefined4 __thiscall
qcamera::FrameNumberRegistry::getFrameworkFrameNumber
          (FrameNumberRegistry *this,uint param_1,uint *param_2)

{
  FrameNumberRegistry **ppFVar1;
  FrameNumberRegistry **ppFVar2;
  FrameNumberRegistry **ppFVar3;
  FrameNumberRegistry *pFVar4;
  undefined4 uVar5;
  FrameNumberRegistry **ppFVar6;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x10));
  ppFVar1 = (FrameNumberRegistry **)(this + 4);
  ppFVar3 = (FrameNumberRegistry **)*ppFVar1;
  ppFVar6 = ppFVar1;
  if (ppFVar3 != (FrameNumberRegistry **)0x0) {
    do {
      ppFVar2 = ppFVar3;
      if (ppFVar3[4] < param_1) {
        ppFVar3 = ppFVar3 + 1;
        ppFVar2 = ppFVar6;
      }
      ppFVar3 = (FrameNumberRegistry **)*ppFVar3;
      ppFVar6 = ppFVar2;
    } while (ppFVar3 != (FrameNumberRegistry **)0x0);
    if ((ppFVar2 != ppFVar1) && (ppFVar2[4] <= param_1)) {
      *param_2 = (uint)ppFVar2[5];
      while ((ppFVar6 = *(FrameNumberRegistry ***)this, ppFVar1 != ppFVar6 &&
             (ppFVar6[4] < (FrameNumberRegistry *)(*(int *)(this + 0xc) + -0x100)))) {
        ppFVar3 = (FrameNumberRegistry **)ppFVar6[1];
        if ((FrameNumberRegistry **)ppFVar6[1] == (FrameNumberRegistry **)0x0) {
          ppFVar3 = ppFVar6 + 2;
          ppFVar2 = (FrameNumberRegistry **)*ppFVar3;
          if ((FrameNumberRegistry **)*ppFVar2 != ppFVar6) {
            do {
              pFVar4 = *ppFVar3;
              ppFVar3 = (FrameNumberRegistry **)(pFVar4 + 8);
              ppFVar2 = (FrameNumberRegistry **)*ppFVar3;
            } while (*ppFVar2 != pFVar4);
          }
        }
        else {
          do {
            ppFVar2 = ppFVar3;
            ppFVar3 = (FrameNumberRegistry **)*ppFVar2;
          } while ((FrameNumberRegistry **)*ppFVar2 != (FrameNumberRegistry **)0x0);
        }
        *(FrameNumberRegistry ***)this = ppFVar2;
        *(int *)(this + 8) = *(int *)(this + 8) + -1;
        std::__1::__tree_remove_std____1____tree_node_base_void____
                  (*(__tree_node_base **)(this + 4),(__tree_node_base *)ppFVar6);
        operator_delete(ppFVar6);
      }
      uVar5 = 0;
      goto LAB_0008d716;
    }
  }
  if (*(int *)(*(int *)(DAT_0008d724 + 0x8d696) + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_0008d72c + 0x8d6b0,0x1241,DAT_0008d728 + 0x8d6a6,param_1);
  }
  uVar5 = 0xfffffffe;
LAB_0008d716:
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x10));
  return uVar5;
}


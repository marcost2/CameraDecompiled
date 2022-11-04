
/* cam_list_del_node(cam_list*) */

void cam_list_del_node(cam_list *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  *(undefined4 **)(*(int *)param_1 + 4) = puVar1;
  *puVar1 = *(undefined4 *)param_1;
  *(cam_list **)param_1 = param_1;
  *(cam_list **)(param_1 + 4) = param_1;
  return;
}


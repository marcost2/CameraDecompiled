
/* cam_list_add_tail_node(cam_list*, cam_list*) */

void cam_list_add_tail_node(cam_list *param_1,cam_list *param_2)

{
  cam_list **ppcVar1;
  
  ppcVar1 = *(cam_list ***)(param_2 + 4);
  *(cam_list **)(param_2 + 4) = param_1;
  *(cam_list **)param_1 = param_2;
  *(cam_list ***)(param_1 + 4) = ppcVar1;
  *ppcVar1 = param_1;
  return;
}



/* cam_list_init(cam_list*) */

void cam_list_init(cam_list *param_1)

{
  *(cam_list **)param_1 = param_1;
  *(cam_list **)(param_1 + 4) = param_1;
  return;
}


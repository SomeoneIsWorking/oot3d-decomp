// OoT3D decomp @ 00436c98  name=FUN_00436c98  size=128

/* WARNING: Type propagation algorithm not settling */

bool FUN_00436c98(int *param_1,undefined2 *param_2)

{
  int iVar1;
  int local_18 [4];

  local_18[2] = 0xffffffff;
  local_18[3] = 0xffffffff;
  local_18[1] = 0xffffffff;
  FUN_0044b248(*(undefined4 *)(*param_1 + 4),param_2,1,local_18,local_18 + 2,local_18 + 1);
  iVar1 = FUN_002fa404();
  if ((iVar1 != 0) && (iVar1 = FUN_0031006c(), iVar1 == 0)) {
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return 0 < local_18[0];
}

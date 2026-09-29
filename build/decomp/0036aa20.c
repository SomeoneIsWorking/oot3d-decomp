// OoT3D decomp @ 0036aa20  name=FUN_0036aa20  size=108

void FUN_0036aa20(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;

  iVar1 = z_actor_003738d0(param_1,param_3,param_4,param_5,param_6,param_7,param_8,1);
  if (iVar1 != 0) {
    *(int *)(param_2 + 0x128) = iVar1;
    *(int *)(iVar1 + 0x124) = param_2;
    if (-1 < *(char *)(iVar1 + 3)) {
      *(undefined1 *)(iVar1 + 3) = *(undefined1 *)(param_2 + 3);
    }
  }
  return;
}

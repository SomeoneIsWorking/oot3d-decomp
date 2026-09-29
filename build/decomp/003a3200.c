// OoT3D decomp @ 003a3200  name=FUN_003a3200  size=84

void FUN_003a3200(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = 0;
  do {
    FUN_0036932c(*param_1,iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  FUN_0037266c(*param_1,param_2);
  *(undefined2 *)((int)param_1 + 0x36) = 0xff;
  *(undefined1 *)((int)param_1 + 0x3e) = 0xff;
  *(undefined1 *)((int)param_1 + 0x3d) = 0xff;
  *(undefined1 *)(param_1 + 0xf) = 0xff;
  *(undefined1 *)((int)param_1 + 0x43) = 0;
  return;
}

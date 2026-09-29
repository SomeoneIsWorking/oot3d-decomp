// OoT3D decomp @ 0025375c  name=FUN_0025375c  size=108

void FUN_0025375c(int param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = FUN_0036405c(param_2,0x1f);
  if (iVar1 == 0) {
    FUN_003510b0(param_1,DAT_002537c8);
    FUN_00372d4c(DAT_002537d0,DAT_002537cc,param_1 + 0xbc,0);
    *(undefined1 *)(param_1 + 0x19a) = 1;
    FUN_00372f38(param_1,param_2,param_1 + 0x1a4);
    return;
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  return;
}

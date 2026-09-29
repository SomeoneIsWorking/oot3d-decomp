// OoT3D decomp @ 0013f280  name=FUN_0013f280  size=156

void FUN_0013f280(int param_1,undefined4 param_2)

{
  int iVar1;

  FUN_003731e0(param_1 + 0x1a4);
  if (*(int *)(param_1 + 0x98) < DAT_0013f31c) {
    FUN_00374a58(DAT_0013f320,param_1 + 0x1a4,1);
    *(undefined1 *)(param_1 + 0x9e4) = 1;
    *(byte *)(param_1 + 0x9e5) = *(byte *)(param_1 + 0x9e5) & 0x7f;
    *(undefined4 *)(param_1 + 0x9dc) = DAT_0013f324;
    FUN_00371808(param_2,0xc6c,0x9c,param_1,0);
  }
  iVar1 = FUN_003736fc(DAT_0013f32c,DAT_0013f328,param_1 + 0x1a4);
  if (iVar1 != 0) {
    FUN_00375bcc(param_1,DAT_0013f330);
  }
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x92);
  return;
}

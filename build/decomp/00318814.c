// OoT3D decomp @ 00318814  name=FUN_00318814  size=116

void FUN_00318814(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;

  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  *(undefined1 *)(param_1 + 0x1a4) = 0xd;
  *(undefined1 *)(param_1 + 0xe74) = 4;
  *(undefined4 *)(param_1 + 0xe7c) = 0;
  iVar1 = DAT_00318888;
  uVar2 = FUN_0036ae14(param_1 + 0x1c4,
                       *(undefined4 *)
                        (*(int *)(DAT_00318888 + (uint)*(byte *)(param_1 + 0x1b0) * 4) + 0x10));
  uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_00318894,DAT_00318890,uVar2,DAT_0031888c,param_1 + 0x1c4,
               *(undefined4 *)
                (*(int *)(iVar1 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                (uint)*(byte *)(param_1 + 0xe74) * 4),0);
  return;
}

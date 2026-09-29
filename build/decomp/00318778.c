// OoT3D decomp @ 00318778  name=FUN_00318778  size=136

void FUN_00318778(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_fpscr;

  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  *(undefined1 *)(param_1 + 0x1a4) = 8;
  *(undefined4 *)(param_1 + 0xe7c) = 0;
  *(undefined1 *)(param_1 + 0xe74) = 4;
  iVar2 = DAT_00318808;
  uVar1 = DAT_00318800;
  *(undefined2 *)(DAT_00318804 + param_1) = 0;
  uVar3 = FUN_0036ae14(param_1 + 0x1c4,
                       *(undefined4 *)
                        (*(int *)(iVar2 + (uint)*(byte *)(param_1 + 0x1b0) * 4) + 0x10));
  uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_00318810,uVar1,uVar3,DAT_0031880c,param_1 + 0x1c4,
               *(undefined4 *)
                (*(int *)(iVar2 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                (uint)*(byte *)(param_1 + 0xe74) * 4),2);
  return;
}

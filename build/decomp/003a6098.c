// OoT3D decomp @ 003a6098  name=FUN_003a6098  size=220

void FUN_003a6098(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_fpscr;
  undefined4 uVar4;

  uVar1 = DAT_003a6174;
  FUN_003478b0(DAT_003a6174,param_1 + 0x1c4);
  *(undefined1 *)(param_1 + 0x1a4) = 0xf;
  *(undefined1 *)(param_1 + 0xe74) = 0xd;
  iVar2 = DAT_003a6178;
  uVar4 = *(undefined4 *)(param_1 + 0x200);
  uVar3 = FUN_0036ae14(param_1 + 0x1c4,
                       *(undefined4 *)
                        (*(int *)(DAT_003a6178 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                        (uint)*(byte *)(param_1 + 0xe74) * 4));
  uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_003a6180,uVar4,uVar3,DAT_003a617c,param_1 + 0x1c4,
               *(undefined4 *)
                (*(int *)(iVar2 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                (uint)*(byte *)(param_1 + 0xe74) * 4),2);
  uVar3 = DAT_003a6184;
  *(undefined4 *)(param_1 + 0xed8) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0xea8) = 0;
  uVar1 = DAT_003a6188;
  *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) | 8;
  FUN_0037547c(DAT_003a618c,param_1 + 0x28,4,uVar1,uVar1,uVar3);
  return;
}

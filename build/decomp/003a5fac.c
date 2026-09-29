// OoT3D decomp @ 003a5fac  name=FUN_003a5fac  size=208

void FUN_003a5fac(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_fpscr;
  undefined4 uVar4;

  uVar1 = DAT_003a607c;
  FUN_003478b0(DAT_003a607c,param_1 + 0x1c4);
  *(undefined1 *)(param_1 + 0x1a4) = 0xe;
  *(undefined1 *)(param_1 + 0xe74) = 0xc;
  iVar2 = DAT_003a6080;
  uVar4 = *(undefined4 *)(param_1 + 0x200);
  uVar3 = FUN_0036ae14(param_1 + 0x1c4,
                       *(undefined4 *)
                        (*(int *)(DAT_003a6080 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                        (uint)*(byte *)(param_1 + 0xe74) * 4));
  uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_003a6088,uVar4,uVar3,DAT_003a6084,param_1 + 0x1c4,
               *(undefined4 *)
                (*(int *)(iVar2 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                (uint)*(byte *)(param_1 + 0xe74) * 4),2);
  uVar3 = DAT_003a608c;
  *(undefined4 *)(param_1 + 0xed8) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  uVar4 = DAT_003a6090;
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0xea8) = 0;
  FUN_0037547c(DAT_003a6094,param_1 + 0x28,4,uVar4,uVar4,uVar3);
  return;
}

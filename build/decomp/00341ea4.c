// OoT3D decomp @ 00341ea4  name=FUN_00341ea4  size=172

void FUN_00341ea4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  uint in_fpscr;

  *(undefined1 *)(param_1 + 0x1a4) = 0xc;
  uVar1 = DAT_00341f54;
  uVar4 = DAT_00341f50;
  if (*(char *)(param_1 + 0xe74) == '\t') {
    uVar3 = 2;
  }
  else {
    uVar3 = 0xe;
  }
  *(undefined1 *)(param_1 + 0xe74) = uVar3;
  FUN_0037547c(DAT_00341f58,param_1 + 0x28,4,uVar1,uVar1,uVar4);
  iVar2 = DAT_00341f5c;
  uVar4 = FUN_0036ae14(param_1 + 0x1c4,
                       *(undefined4 *)
                        (*(int *)(DAT_00341f5c + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                        (uint)*(byte *)(param_1 + 0xe74) * 4));
  uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_00341f68,DAT_00341f64,uVar4,DAT_00341f60,param_1 + 0x1c4,
               *(undefined4 *)
                (*(int *)(iVar2 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                (uint)*(byte *)(param_1 + 0xe74) * 4),2);
  *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) & 0xfffffffe | 0x400;
  return;
}

// OoT3D decomp @ 003e655c  name=FUN_003e655c  size=348

void FUN_003e655c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint in_fpscr;

  iVar2 = FUN_003731e0(param_1 + 0x1a4);
  if (iVar2 != 0) {
    if ((*(int *)(param_1 + 0x98) < DAT_003e66b8) &&
       (iVar2 = FUN_0036f18c(param_1,0x4000), iVar2 == 0)) {
      *(undefined2 *)(param_1 + 0x7de) = *(undefined2 *)(param_1 + 0x92);
      FUN_00363d50(param_1);
      return;
    }
    uVar4 = DAT_003e66c0;
    if ((*(int *)(param_1 + 0x98) < DAT_003e66bc) &&
       (iVar2 = FUN_0036f18c(param_1,0x2000), iVar2 != 0)) {
      uVar3 = FUN_0036ae14(param_1 + 0x1a4,9);
      uVar1 = DAT_003e66c4;
      uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(DAT_003e66c8,DAT_003e66c4,uVar3,uVar4,param_1 + 0x1a4,9,2);
      *(undefined4 *)(param_1 + 0x6c) = uVar1;
      *(undefined4 *)(param_1 + 0x70) = uVar1;
      *(undefined1 *)(param_1 + 0x7f8) = 0xc;
      *(byte *)(param_1 + 0x7f5) = *(byte *)(param_1 + 0x7f5) | 4;
      *(undefined2 *)(param_1 + 0x7de) = 0x28;
      FUN_0036f00c(DAT_003e66d0,DAT_003e66cc,param_2,param_1,param_1 + 0x28,6,300,100,1);
      FUN_00375bcc(param_1,DAT_003e66d4);
      uVar4 = DAT_003e66d8;
    }
    else {
      FUN_00374a58(uVar4,param_1 + 0x1a4,0xb);
      uVar4 = DAT_003e66dc;
    }
    *(undefined4 *)(param_1 + 0x7d8) = uVar4;
  }
  return;
}

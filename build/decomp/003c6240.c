// OoT3D decomp @ 003c6240  name=FUN_003c6240  size=212

void FUN_003c6240(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint in_fpscr;

  iVar3 = DAT_003c631c;
  uVar2 = DAT_003c6318;
  uVar1 = DAT_003c6314;
  if (*(short *)(param_1 + 0x450) == 0) {
    if (*(int *)(param_1 + 0x1d4) == 3) {
      return;
    }
    puVar5 = (undefined4 *)(DAT_003c631c + 0x40);
    uVar4 = FUN_0036ae14(param_1 + 0x1a4,*(undefined4 *)(DAT_003c631c + 0x40));
    uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(uVar2,uVar1,uVar4,*(undefined4 *)(iVar3 + 0x4c),param_1 + 0x1a4,*puVar5,
                 *(undefined1 *)(iVar3 + 0x48));
  }
  else if (*(int *)(param_1 + 0x1d4) != 0) {
    puVar5 = (undefined4 *)(DAT_003c631c + 0x10);
    uVar4 = FUN_0036ae14(param_1 + 0x1a4,*(undefined4 *)(DAT_003c631c + 0x10));
    uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(uVar2,uVar1,uVar4,*(undefined4 *)(iVar3 + 0x1c),param_1 + 0x1a4,*puVar5,
                 *(undefined1 *)(iVar3 + 0x18));
  }
  if (*(short *)(param_1 + 0x450) == 2) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffeffff;
    *(undefined2 *)(param_1 + 0x450) = 0;
  }
  return;
}

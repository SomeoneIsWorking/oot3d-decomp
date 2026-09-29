// OoT3D decomp @ 0038bdd0  name=FUN_0038bdd0  size=176

void FUN_0038bdd0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint in_fpscr;

  uVar2 = DAT_0038c0f0;
  uVar1 = DAT_0038c0ec;
  iVar3 = DAT_0038c0e8;
  *(int *)(param_1 + 0xf9c) = *(int *)(param_1 + 0xf9c) + 1;
  if ((*(byte *)(iVar3 + 7) & 0x7f) != 0) {
    FUN_00375ed8(param_1,0,0xff,0,0xc);
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  iVar3 = FUN_003731e0(param_1 + 0x1a4);
  if (iVar3 != 0) {
    uVar4 = FUN_0036ae14(param_1 + 0x1a4,6);
    uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(uVar1,uVar2,uVar4,uVar2,param_1 + 0x1a4,6,0);
  }
  FUN_0031cb28(param_1);
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}

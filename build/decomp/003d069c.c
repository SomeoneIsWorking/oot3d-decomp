// OoT3D decomp @ 003d069c  name=FUN_003d069c  size=144

void FUN_003d069c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_fpscr;

  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x1000000;
  FUN_0035fb14(param_1);
  iVar2 = FUN_0035d0bc(param_1,param_2);
  if (iVar2 != 0) {
    uVar3 = FUN_0036ae14(param_1 + 0x1a4,1);
    uVar1 = DAT_003d0730;
    uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_003d0734,DAT_003d0730,uVar3,DAT_003d072c,param_1 + 0x1a4,1);
    uVar3 = DAT_003d0738;
    *(undefined4 *)(param_1 + 100) = uVar1;
    *(undefined4 *)(param_1 + 0x6c) = uVar3;
    uVar1 = DAT_003d0740;
    *(undefined4 *)(param_1 + 0x70) = DAT_003d073c;
    *(undefined4 *)(param_1 + 0x498) = uVar1;
  }
  return;
}

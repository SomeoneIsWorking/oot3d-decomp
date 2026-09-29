// OoT3D decomp @ 001797cc  name=FUN_001797cc  size=296

void FUN_001797cc(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint in_fpscr;

  FUN_003731e0(param_1 + 0x1a4);
  FUN_0036fc20(DAT_001798f8,DAT_001798f4,param_1 + 0x6c);
  if ((DAT_001798fc <= *(int *)(param_1 + 0x1e0)) && (*(int *)(param_1 + 0x1e0) <= DAT_00179900)) {
    uVar1 = FUN_0036e800(param_1,*(undefined4 *)(DAT_00179904 + param_2));
    FUN_00370084(param_1 + 0x36,uVar1,3,DAT_00179908);
  }
  uVar2 = FUN_0036ae14(param_1 + 0x1a4,10);
  uVar1 = DAT_0017990c;
  uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  iVar3 = FUN_003736fc(uVar2,DAT_0017990c,param_1 + 0x1a4);
  if (iVar3 != 0) {
    if (*(int *)(param_1 + 0x98) < DAT_00179910) {
      uVar2 = FUN_0036ae14(param_1 + 0x1a4,4);
      uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(uVar1,DAT_00179918,uVar2,DAT_00179914,param_1 + 0x1a4,4,0);
      *(undefined4 *)(param_1 + 0x1050) = DAT_0017991c;
      *(undefined4 *)(param_1 + 0x1054) = DAT_00179920;
      *(undefined4 *)(param_1 + 0x22c) = DAT_00179924;
      *(undefined2 *)(param_1 + 0x26e) = 0;
    }
    else {
      FUN_0034bec4(param_1);
    }
  }
  *(undefined2 *)(param_1 + 0x250) = 2;
  *(undefined2 *)(param_1 + 0x254) = 0;
  return;
}

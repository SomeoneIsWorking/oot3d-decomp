// OoT3D decomp @ 00299090  name=FUN_00299090  size=104

void FUN_00299090(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;

  iVar1 = FUN_00371e40();
  if (iVar1 == 0) {
    if ((int)(*(uint *)(DAT_002990fc + 0xb8) & *(uint *)(DAT_00299100 + 0x14)) >>
        (uint)*(byte *)(DAT_00299104 + 5) == 2) {
      uVar2 = 0x7b;
    }
    else {
      uVar2 = 0x60;
    }
    FUN_003724dc(DAT_0029910c,DAT_00299108,param_1,param_2,uVar2);
    return;
  }
  *(undefined4 *)(param_1 + 0x1a4) = DAT_002990f8;
  return;
}

// OoT3D decomp @ 003ca54c  name=FUN_003ca54c  size=164

void FUN_003ca54c(int param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;

  uVar2 = DAT_003ca5f8;
  fVar1 = DAT_003ca5f0;
  fVar4 = (float)FUN_0036e168(DAT_003ca5fc,DAT_003ca5f8,DAT_003ca5f4,DAT_003ca5f0,param_1 + 0xc4);
  if ((fVar4 != fVar1) && ((*(uint *)(DAT_003ca600 + param_2) & 3) == 0)) {
    FUN_0033ff3c(param_2,param_1,param_1 + 0x28);
  }
  FUN_0036e168(fVar1,uVar2,DAT_003ca604,fVar1,param_1 + 0xcc);
  iVar3 = FUN_003731e0(param_1 + 0x1a4);
  if (iVar3 != 0) {
    FUN_00374428(param_1);
    return;
  }
  return;
}

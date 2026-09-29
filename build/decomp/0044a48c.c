// OoT3D decomp @ 0044a48c  name=FUN_0044a48c  size=56

void FUN_0044a48c(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;

  uVar2 = FUN_004538b8();
  lVar3 = (uVar2 & 0xffffffff) * (ulonglong)DAT_0044a4c4;
  lVar1 = *DAT_0044a4c8;
  lVar3 = FUN_00332754((int)lVar3,
                       DAT_0044a4c4 * (int)(uVar2 >> 0x20) + (int)((ulonglong)lVar3 >> 0x20),
                       DAT_0044a4c4,0);
  *param_1 = lVar3 + lVar1;
  return;
}

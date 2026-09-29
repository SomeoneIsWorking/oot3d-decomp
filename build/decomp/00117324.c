// OoT3D decomp @ 00117324  name=FUN_00117324  size=104

void FUN_00117324(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;

  iVar1 = FUN_00371e40();
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x124) = 0;
    uVar2 = DAT_00117390;
    if (*(int *)(DAT_0011738c + 4) != 0) {
      uVar2 = DAT_00117394;
    }
    *(undefined4 *)(param_1 + 0x8ac) = uVar2;
    *(ushort *)(DAT_00117398 + 10) = *(ushort *)(DAT_00117398 + 10) | 0x20;
    return;
  }
  FUN_003724dc(DAT_001173a0,DAT_0011739c,param_1,param_2,0x3e);
  return;
}

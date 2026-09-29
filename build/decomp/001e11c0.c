// OoT3D decomp @ 001e11c0  name=FUN_001e11c0  size=84

void FUN_001e11c0(int param_1,int param_2)

{
  int iVar1;

  iVar1 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar1 == 6) && (iVar1 = FUN_00346964(param_2), iVar1 != 0)) {
    FUN_003724dc(DAT_001e1218,DAT_001e1214,param_1,param_2,0xf);
    *(undefined4 *)(param_1 + 0x650) = DAT_001e121c;
  }
  return;
}

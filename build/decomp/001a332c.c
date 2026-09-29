// OoT3D decomp @ 001a332c  name=FUN_001a332c  size=96

void FUN_001a332c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;

  uVar3 = DAT_001a338c;
  if ((*(uint *)(param_2 + 0xf8) & 8) != 0) {
    uVar3 = DAT_001a3390;
  }
  FUN_0036e168(uVar3,DAT_001a339c,DAT_001a3398,DAT_001a3394,param_1 + 100);
  iVar2 = FUN_00369a48(param_1,param_2);
  iVar1 = DAT_001a33a4;
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x978) = DAT_001a33a0;
    *(undefined2 *)(iVar1 + param_1) = 0;
  }
  return;
}

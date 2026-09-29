// OoT3D decomp @ 00296eb4  name=FUN_00296eb4  size=72

undefined4 FUN_00296eb4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;

  uVar2 = 1;
  if ((*(short *)(param_1 + 0x104) == 0x52) &&
     (iVar1 = FUN_0032d870(DAT_00296f10,DAT_00296f0c,DAT_00296f08,DAT_00296f04,DAT_00296f00,
                           DAT_00296efc,param_2 + 0x28), iVar1 != 0)) {
    uVar2 = 0;
  }
  return uVar2;
}

// OoT3D decomp @ 00299110  name=FUN_00299110  size=100

void FUN_00299110(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;

  iVar1 = FUN_00371e40();
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x874);
    if (*(int *)(DAT_00299178 + 4) == 0) {
      if ((*(ushort *)(DAT_0029917c + 0xc) & 0x1000) == 0) {
        uVar2 = 0x1d;
      }
      else {
        uVar2 = 0xe;
      }
    }
    FUN_003724dc(DAT_00299184,DAT_00299180,param_1,param_2,uVar2);
    return;
  }
  *(undefined4 *)(param_1 + 0x840) = DAT_00299174;
  return;
}

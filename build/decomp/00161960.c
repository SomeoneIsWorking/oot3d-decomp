// OoT3D decomp @ 00161960  name=FUN_00161960  size=208

void FUN_00161960(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;

  iVar2 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar2 == 4) && (iVar2 = FUN_00346964(param_2), iVar2 != 0)) {
    iVar2 = FUN_00369f3c(param_2);
    uVar1 = DAT_00161a44;
    if (iVar2 == 0) {
      uVar3 = (**(code **)(*(int *)(param_1 + 0x208) + 8))(param_1);
      switch(uVar3) {
      case 0:
        FUN_0036be34(param_2,DAT_00161a4c);
        *(undefined4 *)(param_1 + 0x1a4) = uVar1;
        return;
      case 1:
        FUN_0036be34(param_2,DAT_00161a50);
        *(undefined4 *)(param_1 + 0x1a4) = uVar1;
        return;
      case 2:
      case 4:
        FUN_0036be34(param_2,DAT_00161a58);
        *(undefined4 *)(param_1 + 0x1a4) = DAT_00161a5c;
        return;
      case 3:
        FUN_0036be34(param_2,DAT_00161a54);
        *(undefined4 *)(param_1 + 0x1a4) = uVar1;
        return;
      default:
        return;
      }
    }
    if (iVar2 == 1) {
      FUN_0036be34(param_2,DAT_00161a48);
      *(undefined4 *)(param_1 + 0x1a4) = uVar1;
    }
  }
  return;
}

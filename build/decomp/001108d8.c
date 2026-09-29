// OoT3D decomp @ 001108d8  name=FUN_001108d8  size=80

void FUN_001108d8(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;

  iVar2 = FUN_00373074(param_2 + 0x3a58,(int)*(char *)(param_1 + 0x1cc));
  uVar1 = DAT_00110930;
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x1c8) < 1) {
      uVar3 = 0x20;
    }
    else {
      uVar3 = 0xa5;
    }
    *(undefined4 *)(param_1 + 0x1c0) = uVar3;
    uVar3 = DAT_00110934;
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
    *(undefined4 *)(param_1 + 0x1bc) = uVar3;
    *(undefined4 *)(param_1 + 0x140) = DAT_00110938;
  }
  return;
}

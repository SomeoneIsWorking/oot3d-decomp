// OoT3D decomp @ 0028b7f0  name=FUN_0028b7f0  size=176

void FUN_0028b7f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;

  if (*(char *)(DAT_0028b8a0 + param_2) != '\x06' && *(char *)(DAT_0028b8a0 + param_2) != '\0') {
    *(undefined4 *)(param_1 + 0x140) = 0;
    *(undefined4 *)(param_1 + 0x13c) = 0;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    return;
  }
  (**(code **)(param_1 + 0x214))(param_1,param_2);
  iVar2 = FUN_0036adf4(param_1);
  iVar3 = *(int *)(param_1 + 0x214);
  iVar1 = DAT_0028b8a4;
  if (iVar3 != DAT_0028b8a4) {
    iVar1 = DAT_0028b8a8;
  }
  if (iVar3 == DAT_0028b8a4 || iVar3 == iVar1) {
    if (iVar2 != 0) {
      uVar4 = *(undefined4 *)(param_2 + 0xa54);
      uVar5 = 0x30;
    }
    else {
      if (*(char *)(param_1 + 0x21c) == '\0') goto LAB_0028b878;
      uVar4 = *(undefined4 *)(param_2 + 0xa54);
      uVar5 = 3;
    }
    FUN_0033885c(uVar4,uVar5);
  }
LAB_0028b878:
  *(bool *)(param_1 + 0x21c) = iVar2 != 0;
  FUN_0037632c(param_1,param_1 + 0x1bc);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x1bc);
  return;
}

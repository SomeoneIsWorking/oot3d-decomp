// OoT3D decomp @ 0025fd54  name=FUN_0025fd54  size=72

void FUN_0025fd54(int param_1,int param_2)

{
  int iVar1;
  int iVar2;

  (**(code **)(param_1 + 0x1bc))();
  iVar2 = *(int *)(param_1 + 0x1bc);
  iVar1 = DAT_0025fd9c;
  if (iVar2 != DAT_0025fd9c) {
    iVar1 = DAT_0025fda0;
  }
  if (iVar2 != DAT_0025fd9c && iVar2 != iVar1) {
    return;
  }
  FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x1c8);
  return;
}

// OoT3D decomp @ 003510b0  name=FUN_003510b0  size=60

void FUN_003510b0(undefined4 param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;

  iVar1 = DAT_003510ec;
  do {
    (**(code **)(iVar1 + (*param_2 & 0x1e) * 2))(param_1,param_2);
    uVar2 = *param_2;
    param_2 = param_2 + 1;
  } while ((uVar2 & 1) != 0);
  return;
}

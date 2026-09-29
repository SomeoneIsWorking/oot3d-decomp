// OoT3D decomp @ 0026bd8c  name=FUN_0026bd8c  size=192

void FUN_0026bd8c(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;

  pcVar1 = *(code **)(*(int *)(DAT_0026be4c + param_2) + 0x1710);
  bVar3 = ((uint)pcVar1 & DAT_0026be50) != 0;
  if (bVar3) {
    pcVar1 = DAT_0026be54;
  }
  if (bVar3 && *(code **)(param_1 + 0x1a4) != pcVar1) {
    return;
  }
  (**(code **)(param_1 + 0x1a4))(param_1,param_2);
  FUN_00376864(param_1);
  FUN_00376340(DAT_0026be5c,*(undefined4 *)(DAT_0026be58 + 0x20),
               *(undefined4 *)(DAT_0026be58 + 0x24),param_2,param_1,5);
  FUN_0037632c(param_1,param_1 + 0x1ac);
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x1000000;
  iVar2 = param_2 + 0x5c78;
  FUN_003761f0(param_2,iVar2,param_1 + 0x1ac);
  FUN_00376168(param_2,iVar2,param_1 + 0x1ac);
  FUN_003762a4(param_2,iVar2,param_1 + 0x1ac);
  return;
}

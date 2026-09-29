// OoT3D decomp @ 00277360  name=FUN_00277360  size=208

void FUN_00277360(int param_1,int param_2)

{
  int iVar1;
  int iVar2;

  if (*(int *)(param_1 + 0x314) != 0) {
    *(int *)(param_1 + 0x314) = *(int *)(param_1 + 0x314) + -1;
  }
  (**(code **)(param_1 + 0x1bc))(param_1);
  if (*(short *)(param_1 + 0x1c) != 4 && *(short *)(param_1 + 0x1c) != 1) {
    *(undefined4 *)(param_1 + 0x220) = *(undefined4 *)(param_1 + 0x2c);
    iVar1 = DAT_00277430;
    iVar2 = param_2 + 0x5c78;
    if (*(short *)(param_1 + 0x1c) == 0 || *(short *)(param_1 + 0x1c) == 5) {
      FUN_00376168(param_2,iVar2,param_1 + 0x1d0);
      FUN_003762a4(param_2,iVar2,param_1 + 0x1d0);
      return;
    }
    if (*(int *)(param_1 + 0x1bc) == DAT_00277430) {
      FUN_00376168(param_2,iVar2,param_1 + 0x228);
    }
    if ((*(int *)(param_1 + 0x1bc) != iVar1) || (*(int *)(param_1 + 0x314) < 1)) {
      FUN_003761f0(param_2,iVar2,param_1 + 0x1d0);
      return;
    }
  }
  return;
}

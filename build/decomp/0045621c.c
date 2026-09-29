// OoT3D decomp @ 0045621c  name=FUN_0045621c  size=80

undefined4 FUN_0045621c(int param_1,short *param_2,undefined4 param_3)

{
  short sVar1;
  bool bVar2;
  bool bVar3;

  *(short **)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  *(short **)(param_1 + 8) = param_2 + 8;
  sVar1 = *param_2;
  bVar2 = sVar1 == 0x4d51;
  if (bVar2) {
    sVar1 = param_2[2];
  }
  bVar3 = bVar2 && sVar1 == 4;
  if (bVar2 && sVar1 == 4) {
    bVar3 = param_2[3] == 0;
  }
  if (bVar3) {
    return 1;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return 0;
}

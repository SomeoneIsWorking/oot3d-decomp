// OoT3D decomp @ 00451990  name=FUN_00451990  size=184

void FUN_00451990(int param_1,byte *param_2)

{
  int iVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;

  param_2[3] = 0;
  param_2[2] = 0;
  param_2[1] = 0;
  iVar8 = 0;
  iVar7 = 0x13;
  *param_2 = 0;
  pbVar5 = param_2 + 4;
  pbVar6 = param_2 + 0xc;
  do {
    iVar1 = iVar8 * 0x80;
    pbVar5[0] = 0;
    pbVar5[1] = 0;
    pbVar6[0] = 0;
    pbVar6[1] = 0;
    pbVar6[2] = 0;
    pbVar6[3] = 0;
    iVar7 = iVar7 + -1;
    iVar8 = iVar8 + 1;
    pbVar2 = param_2 + iVar1 + 8;
    pbVar2[0] = 0;
    pbVar2[1] = 0;
    pbVar2[2] = 0;
    pbVar2[3] = 0;
    pbVar5 = pbVar5 + 0x80;
    pbVar6 = pbVar6 + 0x80;
  } while (iVar7 != 0);
  if ((*(short *)(param_1 + 0x104) == 0x6b) && (*(int *)(DAT_00451a48 + 8) == 0xfff3)) {
    bVar4 = *param_2;
    bVar3 = FUN_0032e21c(param_2,0x1a0,param_1);
    param_2[1] = *param_2;
    param_2[2] = bVar3;
    (param_2 + (uint)bVar4 * 0x80 + 4)[0] = 1;
    (param_2 + (uint)bVar4 * 0x80 + 4)[1] = 0;
    return;
  }
  bVar4 = FUN_0032e21c(param_2,1,param_1);
  param_2[1] = *param_2;
  param_2[2] = bVar4;
  return;
}

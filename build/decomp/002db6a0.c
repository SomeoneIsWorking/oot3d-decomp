// OoT3D decomp @ 002db6a0  name=FUN_002db6a0  size=648

uint * FUN_002db6a0(uint *param_1,uint param_2)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  short *psVar6;
  undefined4 uVar7;
  short sVar8;
  short *psVar9;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  int local_134;
  short *local_130;
  int local_12c;
  undefined4 local_28;
  
  *param_1 = param_2;
  switch(param_2) {
  case 0:
  case 1:
  case 2:
  case 3:
    uVar5 = 2;
    break;
  default:
    uVar5 = 3;
    break;
  case 8:
    uVar5 = 5;
    break;
  case 9:
    uVar5 = 4;
  }
  param_1[1] = uVar5;
  iVar4 = FUN_00313ce0(0x20);
  uVar5 = 0;
  if (iVar4 != 0) {
    uVar5 = FUN_002fc694(uRam002db954,uRam002db950,iVar4,param_1[1]);
  }
  uVar3 = uRam002db958;
  param_1[2] = uVar5;
  local_28 = uVar3;
  uVar5 = param_1[1];
  iVar4 = 0;
  if (0 < (int)uVar5) {
    do {
      FUN_002fcdec(param_1[2],&local_28,1,iVar4);
      uVar5 = param_1[1];
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)uVar5);
  }
  psVar6 = (short *)FUN_0033de14(uVar5 * 0xc);
  uVar5 = param_1[1];
  if (0 < (int)uVar5) {
    sVar8 = 0;
    psVar9 = psVar6;
    do {
      *psVar9 = sVar8 << 2;
      sVar1 = sVar8 * 4 + 2;
      sVar2 = sVar8 * 4 + 1;
      psVar9[1] = sVar1;
      psVar9[2] = sVar2;
      psVar9[3] = sVar2;
      psVar9[4] = sVar1;
      psVar9[5] = sVar8 * 4 + 3;
      uVar5 = uVar5 - 1;
      psVar9 = psVar9 + 6;
      sVar8 = sVar8 + 1;
    } while (uVar5 != 0);
  }
  FUN_00371738(&local_140,uRam002db95c,0x118);
  local_140 = FUN_002fc3fc(param_1[2],0);
  local_13c = FUN_002fc3f0(param_1[2],0);
  local_138 = FUN_002fc3e4(param_1[2],0);
  local_134 = param_1[1] << 2;
  local_12c = param_1[1] * 6;
  local_130 = psVar6;
  iVar4 = (**(code **)(*(int *)*puRam002db960 + 8))((int *)*puRam002db960,0x1b8);
  uVar5 = 0;
  if (iVar4 != 0) {
    uVar5 = FUN_00348f34(iVar4,&local_140);
  }
  param_1[3] = uVar5;
  uVar7 = FUN_002e11d0(9);
  FUN_00348a64(param_1[3],0,uVar7,uRam002db968,uRam002db968,uRam002db964,uRam002db964);
  if (((*puRam002db96c & 1) == 0) && (iVar4 = FUN_003679b4(puRam002db96c), iVar4 != 0)) {
    FUN_0036788c(uRam002db970);
  }
  uVar5 = FUN_0034897c(*(undefined4 *)(iRam002db97c + 0x47c),param_1[3],0);
  param_1[4] = uVar5;
  *(uint *)(uVar5 + 0x178) = *(uint *)(uVar5 + 0x178) | 2;
  if (*param_1 < 2) {
    FUN_002e6dcc(uVar3,uRam002db980,param_1);
  }
  else {
    FUN_002e6dcc(uVar3,uVar3,param_1);
  }
  FUN_0033ddd4(psVar6);
  return param_1;
}


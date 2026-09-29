// OoT3D decomp @ 004152b8  name=FUN_004152b8  size=292

void FUN_004152b8(uint param_1)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  bool bVar8;

  puVar2 = DAT_00415404;
  puVar1 = DAT_00415400;
  iVar7 = *DAT_004153fc;
  uVar5 = *(uint *)(iVar7 + 0x544);
  bVar8 = uVar5 == param_1;
  if (bVar8) {
    uVar5 = (uint)*(byte *)(iVar7 + 0xc);
  }
  if (bVar8 && uVar5 == 0) {
    return;
  }
  uVar5 = *DAT_00415400 & 0xffffff01;
  switch(param_1) {
  case 0x200:
    *DAT_00415400 = uVar5;
    uVar5 = 0;
    goto LAB_00415338;
  case 0x201:
    *DAT_00415400 = uVar5 | 0x40;
    *puVar2 = 0x3000000;
    break;
  case 0x202:
    *DAT_00415400 = uVar5 | 0x20;
    *puVar2 = 0x3000000;
    break;
  case 0x203:
    *DAT_00415400 = uVar5 | 0x50;
    *puVar2 = 0x3000000;
    break;
  case 0x204:
    *DAT_00415400 = uVar5 | 0x60;
    *puVar2 = 0x2000000;
    break;
  case 0x205:
    *DAT_00415400 = uVar5 | 0x30;
    *puVar2 = 0x3000000;
    break;
  case 0x206:
    *DAT_00415400 = uVar5 | 0x70;
    *puVar2 = 0x2000000;
    break;
  case 0x207:
    *DAT_00415400 = uVar5 | 0x10;
    uVar5 = 0x1000000;
LAB_00415338:
    *puVar2 = uVar5;
    break;
  default:
    goto switchD_004152f8_default;
  }
  puVar4 = DAT_0041540c;
  puVar3 = DAT_00415408;
  puVar6 = (uint *)*DAT_00415408;
  if (puVar6 < (uint *)*DAT_0041540c) {
    *puVar6 = *puVar1;
    puVar6[1] = DAT_00415410;
    puVar6 = puVar6 + 2;
    *puVar3 = puVar6;
  }
  if (puVar6 < (uint *)*puVar4) {
    *puVar6 = *puVar2;
    puVar6[1] = DAT_00415414;
    *puVar3 = puVar6 + 2;
  }
  *(uint *)(iVar7 + 0x544) = param_1;
switchD_004152f8_default:
  return;
}

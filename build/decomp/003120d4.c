// OoT3D decomp @ 003120d4  name=FUN_003120d4  size=356

void FUN_003120d4(uint param_1)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  
  iVar2 = DAT_00312238;
  iVar8 = DAT_00312238 + (param_1 & 0x1f) * 4;
  for (puVar5 = *(uint **)(iVar8 + 0x1c); puVar5 != (uint *)0x0; puVar5 = (uint *)puVar5[0xe]) {
    if (*puVar5 == param_1) {
      if (puVar5 != (uint *)0x0) goto LAB_003121d8;
      break;
    }
  }
  if (param_1 != 0) {
    if (*DAT_0031223c == (code *)0x0) {
      puVar5 = (uint *)0x0;
    }
    else {
      puVar5 = (uint *)(**DAT_0031223c)(0x10000,0x100,0,0x3c);
    }
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
    puVar5[0xe] = 0;
    puVar5[0xb] = 0x300;
    *puVar5 = param_1;
    puVar7 = *(uint **)(iVar8 + 0x1c);
    if (puVar7 == (uint *)0x0) {
      *(uint **)(iVar8 + 0x1c) = puVar5;
    }
    else if (param_1 < *puVar7) {
      puVar5[0xe] = (uint)puVar7;
      *(uint **)(iVar8 + 0x1c) = puVar5;
    }
    else {
      for (puVar1 = (uint *)puVar7[0xe]; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[0xe]) {
        if (param_1 < *puVar1) {
          puVar7[0xe] = (uint)puVar5;
          puVar5[0xe] = (uint)puVar1;
          if (puVar1 != (uint *)0x0) goto LAB_003121d8;
          break;
        }
        puVar7 = puVar1;
      }
      puVar7[0xe] = (uint)puVar5;
    }
  }
LAB_003121d8:
  piVar3 = DAT_00312240;
  uVar6 = *(uint *)(iVar2 + 0x9c);
  if (uVar6 != 0) {
    *(int *)(uVar6 + 0xc) = *DAT_00312240 - *(int *)(uVar6 + 4);
  }
  *(uint **)(iVar2 + 0x9c) = puVar5;
  piVar4 = DAT_00312244;
  if (puVar5 != (uint *)0x0) {
    uVar6 = puVar5[1];
  }
  if (puVar5 != (uint *)0x0 && uVar6 != 0) {
    *piVar3 = puVar5[3] + uVar6;
    *piVar4 = puVar5[2] + uVar6;
  }
  else {
    *DAT_00312244 = 0;
    *piVar3 = 0;
  }
  return;
}


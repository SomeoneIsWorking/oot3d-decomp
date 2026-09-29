// OoT3D decomp @ 00312080  name=FUN_00312080  size=84

void FUN_00312080(int *param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  int iVar8;
  undefined4 unaff_lr;

  FUN_003120d4(param_1[1]);
  FUN_00304970(param_2);
  FUN_00304958(param_3);
  FUN_003120d4(param_1[2]);
  FUN_00304970(param_2);
  FUN_00304958(param_3);
  iVar2 = DAT_00312238;
  uVar5 = param_1[*param_1 + 1];
  iVar8 = DAT_00312238 + (uVar5 & 0x1f) * 4;
  for (puVar6 = *(uint **)(iVar8 + 0x1c); puVar6 != (uint *)0x0; puVar6 = (uint *)puVar6[0xe]) {
    if (*puVar6 == uVar5) {
      if (puVar6 != (uint *)0x0) goto LAB_003121d8;
      break;
    }
  }
  if (uVar5 != 0) {
    if ((code *)*DAT_0031223c == (code *)0x0) {
      puVar6 = (uint *)0x0;
    }
    else {
      puVar6 = (uint *)(*(code *)*DAT_0031223c)
                                 (0x10000,0x100,0,0x3c,unaff_r4,unaff_r5,unaff_r6,unaff_lr);
    }
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xb] = 0x300;
    *puVar6 = uVar5;
    puVar7 = *(uint **)(iVar8 + 0x1c);
    if (puVar7 == (uint *)0x0) {
      *(uint **)(iVar8 + 0x1c) = puVar6;
    }
    else if (uVar5 < *puVar7) {
      puVar6[0xe] = (uint)puVar7;
      *(uint **)(iVar8 + 0x1c) = puVar6;
    }
    else {
      for (puVar1 = (uint *)puVar7[0xe]; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[0xe]) {
        if (uVar5 < *puVar1) {
          puVar7[0xe] = (uint)puVar6;
          puVar6[0xe] = (uint)puVar1;
          if (puVar1 != (uint *)0x0) goto LAB_003121d8;
          break;
        }
        puVar7 = puVar1;
      }
      puVar7[0xe] = (uint)puVar6;
    }
  }
LAB_003121d8:
  piVar3 = DAT_00312240;
  uVar5 = *(uint *)(iVar2 + 0x9c);
  if (uVar5 != 0) {
    *(int *)(uVar5 + 0xc) = *DAT_00312240 - *(int *)(uVar5 + 4);
  }
  *(uint **)(iVar2 + 0x9c) = puVar6;
  piVar4 = DAT_00312244;
  if (puVar6 != (uint *)0x0) {
    uVar5 = puVar6[1];
  }
  if (puVar6 != (uint *)0x0 && uVar5 != 0) {
    *piVar3 = puVar6[3] + uVar5;
    *piVar4 = puVar6[2] + uVar5;
  }
  else {
    *DAT_00312244 = 0;
    *piVar3 = 0;
  }
  return;
}

// OoT3D decomp @ 00340824  name=FUN_00340824  size=376

void FUN_00340824(int param_1,undefined4 param_2,int param_3,undefined2 param_4,undefined4 *param_5,
                 undefined4 param_6)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;

  iVar6 = param_3 * 0x80 + 0x7c;
  *(undefined2 *)(*(int *)(param_1 + 0x1c8) + iVar6) = param_4;
  puVar3 = (undefined4 *)(*(int *)(param_1 + 0x1c8) + param_3 * 0x80 + 0x30);
  *puVar3 = *param_5;
  puVar3[1] = param_5[1];
  puVar3[2] = param_5[2];
  puVar3 = (undefined4 *)(*(int *)(param_1 + 0x1c8) + param_3 * 0x80 + 0x3c);
  *puVar3 = *param_5;
  puVar3[1] = param_5[1];
  puVar3[2] = param_5[2];
  puVar3 = (undefined4 *)(*(int *)(param_1 + 0x1c8) + param_3 * 0x80 + 0x48);
  *puVar3 = *param_5;
  puVar3[1] = param_5[1];
  puVar3[2] = param_5[2];
  FUN_0035fb94(*(int *)(param_1 + 0x1c8) + param_3 * 0x80 + 0x54,param_6);
  puVar3 = DAT_003409a0;
  if (((*DAT_0034099c & 1) == 0) &&
     (iVar1 = FUN_003679b4(DAT_0034099c), uVar5 = DAT_003409a8, uVar4 = DAT_003409a4, iVar1 != 0)) {
    *puVar3 = DAT_003409a4;
    puVar3[1] = uVar5;
    puVar3[2] = uVar5;
    puVar3[3] = uVar5;
    puVar3[4] = uVar5;
    puVar3[5] = uVar4;
    puVar3[6] = uVar5;
    puVar3[7] = uVar5;
    puVar3[8] = uVar5;
    puVar3[9] = uVar5;
    puVar3[10] = uVar4;
    puVar3[0xb] = uVar5;
  }
  uVar4 = puVar3[1];
  uVar5 = puVar3[2];
  uVar7 = puVar3[3];
  uVar8 = puVar3[4];
  uVar9 = puVar3[5];
  puVar2 = (undefined4 *)(*(int *)(param_1 + 0x1c8) + param_3 * 0x80);
  *puVar2 = *puVar3;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar7;
  puVar2[4] = uVar8;
  puVar2[5] = uVar9;
  uVar4 = puVar3[7];
  uVar5 = puVar3[8];
  uVar7 = puVar3[9];
  uVar8 = puVar3[10];
  uVar9 = puVar3[0xb];
  puVar2[6] = puVar3[6];
  puVar2[7] = uVar4;
  puVar2[8] = uVar5;
  puVar2[9] = uVar7;
  puVar2[10] = uVar8;
  puVar2[0xb] = uVar9;
  if (*(short *)(*(int *)(param_1 + 0x1c8) + iVar6) == -1) {
    *(undefined2 *)(*(int *)(param_1 + 0x1c8) + param_3 * 0x80 + 0x78) = 5;
  }
  return;
}

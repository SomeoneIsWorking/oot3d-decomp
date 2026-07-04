// OoT3D decomp @ 00313864  name=FUN_00313864  size=612

void FUN_00313864(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  int aiStack_50 [13];
  
  iVar1 = thunk_FUN_002c83fc(*param_1);
  iVar2 = thunk_FUN_002c83fc(param_1[1]);
  FUN_003284a4(0x20000);
  uVar3 = thunk_FUN_002c83fc();
  param_1[0xbe] = iVar1 - uVar3;
  param_1[0x65] = (uVar3 >> 4) << 1;
  param_1[0xbf] = iVar2 - uVar3;
  piVar5 = param_1 + 0x68;
  param_1[0x66] = param_1[8];
  param_1[0x67] = param_1[2] * 0x10000000 + -0x10000000;
  uVar3 = 0;
  if (0 < (int)param_1[3]) {
    do {
      iVar1 = param_1[0xbe];
      iVar2 = param_1[uVar3 * 4 + 6];
      piVar5[1] = uVar3;
      *piVar5 = iVar2 + iVar1;
      piVar5[2] = param_1[uVar3 * 4 + 7] << 0x10 | 0x10000000;
      param_1[0x66] = param_1[0x66] | param_1[uVar3 * 4 + 8] << ((uVar3 & 0x3f) << 2);
      uVar4 = uVar3 + 1;
      aiStack_50[uVar3 + 1] = param_1[uVar3 * 4 + 5];
      uVar3 = uVar4;
      piVar5 = piVar5 + 3;
    } while ((int)uVar4 < (int)param_1[3]);
  }
  if (0 < (int)param_1[4]) {
    piVar5 = param_1 + 0x31;
    piVar7 = aiStack_50 + param_1[2] + 1;
    if ((param_1[4] & 1) != 0) {
      piVar5 = param_1 + 0x35;
      piVar7 = aiStack_50 + param_1[2];
      *piVar7 = *piVar5;
    }
    iVar2 = piVar5[4];
    for (iVar1 = (int)param_1[4] >> 1; iVar1 != 0; iVar1 = iVar1 + -1) {
      iVar12 = piVar5[8];
      piVar7[-1] = iVar2;
      iVar2 = piVar5[0xc];
      piVar7 = piVar7 + -2;
      *piVar7 = iVar12;
      piVar5 = piVar5 + 8;
    }
  }
  uVar3 = param_1[3];
  param_1[0x67] = param_1[0x67] | (0xff << (uVar3 & 0xff) & 0xffU) << 0x10;
  iVar1 = uVar3 * -3 + 0x24;
  if (0 < iVar1) {
    puVar6 = param_1 + uVar3 * 3 + 0x67;
    if ((uVar3 & 1) != 0) {
      puVar6 = param_1 + uVar3 * 3 + 0x68;
      *puVar6 = 0;
    }
    for (iVar1 = iVar1 >> 1; iVar1 != 0; iVar1 = iVar1 + -1) {
      puVar6[1] = 0;
      puVar6 = puVar6 + 2;
      *puVar6 = 0;
    }
  }
  param_1[0x8d] = 0;
  param_1[0x8c] = 0;
  uVar3 = 0;
  if (0 < (int)param_1[2]) {
    do {
      param_1[0x8c] = aiStack_50[uVar3 + 1] << ((uVar3 & 0x3f) << 2) | param_1[0x8c];
      uVar4 = uVar3;
      while( true ) {
        uVar3 = uVar4 + 1;
        if ((int)param_1[2] <= (int)uVar3) goto LAB_00313a54;
        if ((int)uVar3 < 8) break;
        param_1[0x8d] = aiStack_50[uVar4 + 2] << (uVar3 * 4 - 0x20 & 0xff) | param_1[0x8d];
        uVar4 = uVar3;
      }
    } while( true );
  }
LAB_00313a54:
  iVar2 = param_1[4];
  iVar1 = param_1[3];
  if (0 < iVar2) {
    iVar12 = iVar2 + -1;
    piVar5 = param_1 + 0x8e;
    puVar6 = param_1 + iVar12 * 4 + 0x38;
    puVar8 = param_1 + 0x8f;
    puVar9 = param_1 + 0x90;
    puVar10 = param_1 + iVar12 * 4 + 0x36;
    puVar11 = param_1 + 0x91;
    puVar13 = param_1 + iVar12 * 4 + 0x37;
    do {
      *piVar5 = iVar1;
      *puVar8 = *puVar6;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 1;
      *puVar9 = *puVar13;
      *puVar11 = *puVar10;
      piVar5 = piVar5 + 4;
      puVar6 = puVar6 + -4;
      puVar8 = puVar8 + 4;
      puVar9 = puVar9 + 4;
      puVar10 = puVar10 + -4;
      puVar11 = puVar11 + 4;
      puVar13 = puVar13 + -4;
    } while (iVar2 != 0);
  }
  return;
}


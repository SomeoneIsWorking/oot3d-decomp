// OoT3D decomp @ 002c56c4  name=FUN_002c56c4  size=532

void FUN_002c56c4(int param_1,float *param_2,float *param_3,float *param_4,undefined4 param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  uVar1 = (uint)*(ushort *)(param_1 + 0xc);
  if (uVar1 < *(ushort *)(param_1 + 0xe)) {
    iVar6 = *(int *)(*(int *)(param_1 + 0x10) + uVar1 * 4);
    puVar2 = (undefined4 *)FUN_00333270(*(undefined4 *)(*(int *)(param_1 + 0x14) + uVar1 * 4));
    uVar4 = DAT_002c58d8;
    *puVar2 = DAT_002c58d8;
    puVar2[1] = uVar4;
    puVar2[2] = uVar4;
    puVar2[3] = *param_3 - *param_2;
    puVar2[4] = param_3[1] - param_2[1];
    puVar2[5] = param_3[2] - param_2[2];
    puVar2[6] = *param_4 - *param_2;
    puVar2[7] = param_4[1] - param_2[1];
    puVar2[8] = param_4[2] - param_2[2];
    if (((*DAT_002c58dc & 1) == 0) &&
       (iVar3 = FUN_003679b4(DAT_002c58dc), puVar2 = DAT_002c58e4, uVar5 = DAT_002c58e0, iVar3 != 0)
       ) {
      *DAT_002c58e4 = DAT_002c58e0;
      puVar2[1] = uVar4;
      puVar2[2] = uVar4;
      puVar2[3] = uVar4;
      puVar2[4] = uVar4;
      puVar2[5] = uVar5;
      puVar2[6] = uVar4;
      puVar2[7] = uVar4;
      puVar2[8] = uVar4;
      puVar2[9] = uVar4;
      puVar2[10] = uVar5;
      puVar2[0xb] = uVar4;
    }
    FUN_00372224(DAT_002c58e8,DAT_002c58e4);
    puVar2 = DAT_002c58e8;
    DAT_002c58e8[3] = *param_2;
    puVar2[7] = param_2[1];
    puVar2[0xb] = param_2[2];
    *(uint *)(iVar6 + 0x178) = *(uint *)(iVar6 + 0x178) | 2;
    uVar4 = puVar2[1];
    uVar5 = puVar2[2];
    uVar7 = puVar2[3];
    uVar8 = puVar2[4];
    uVar9 = puVar2[5];
    uVar10 = puVar2[6];
    uVar11 = puVar2[7];
    *(undefined4 *)(iVar6 + 0xc) = *puVar2;
    *(undefined4 *)(iVar6 + 0x10) = uVar4;
    *(undefined4 *)(iVar6 + 0x14) = uVar5;
    *(undefined4 *)(iVar6 + 0x18) = uVar7;
    *(undefined4 *)(iVar6 + 0x1c) = uVar8;
    *(undefined4 *)(iVar6 + 0x20) = uVar9;
    *(undefined4 *)(iVar6 + 0x24) = uVar10;
    *(undefined4 *)(iVar6 + 0x28) = uVar11;
    uVar4 = puVar2[9];
    uVar5 = puVar2[10];
    uVar7 = puVar2[0xb];
    *(undefined4 *)(iVar6 + 0x2c) = puVar2[8];
    *(undefined4 *)(iVar6 + 0x30) = uVar4;
    *(undefined4 *)(iVar6 + 0x34) = uVar5;
    *(undefined4 *)(iVar6 + 0x38) = uVar7;
    *(undefined4 *)(iVar6 + 0x170) = 1;
    FUN_0035bae4(iVar6,0,param_5);
    if (((*DAT_002c58ec & 1) == 0) && (iVar3 = FUN_003679b4(DAT_002c58ec), iVar3 != 0)) {
      FUN_0036788c(DAT_002c58f0);
    }
    FUN_00367788(DAT_002c58fc,iVar6,0);
    *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + 1;
  }
  return;
}


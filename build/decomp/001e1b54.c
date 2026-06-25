// OoT3D decomp @ 001e1b54  name=FUN_001e1b54  size=628

void FUN_001e1b54(int param_1,int param_2)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint local_50;
  uint local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  iVar4 = DAT_001e1dc8;
  if (*(short *)(DAT_001e1dc8 + 0x4e) < 0) {
    iVar3 = FUN_00363c10(param_2 + 0x3a58,DAT_001e1dcc);
    pfVar1 = DAT_001e1dd4;
    if (iVar3 < 0) {
      *(undefined2 *)(iVar4 + 0x4e) = 0;
    }
    else {
      if (((*(uint *)(DAT_001e1dd0 + 0x108) & 1) == 0) &&
         (iVar3 = FUN_003679b4(DAT_001e1dd8), fVar7 = DAT_001e1de0, fVar6 = DAT_001e1ddc, iVar3 != 0
         )) {
        *pfVar1 = DAT_001e1ddc;
        pfVar1[1] = fVar6;
        pfVar1[2] = fVar7;
      }
      *(ushort *)(iVar4 + 0x4e) = *(ushort *)(iVar4 + 0x4e) & 0x7fff;
      fVar6 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
      fVar7 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
      pfVar2 = DAT_001e1de4;
      fVar8 = *pfVar1;
      fVar9 = pfVar1[2];
      *DAT_001e1de4 = fVar8 * fVar6 + fVar9 * fVar7 + *(float *)(param_1 + 0x28);
      pfVar2[1] = *(float *)(param_1 + 0x2c) + pfVar1[1];
      pfVar2[2] = (fVar9 * fVar6 - fVar8 * fVar7) + *(float *)(param_1 + 0x30);
      iVar4 = FUN_003738d0(param_2 + 0x208c,param_2,DAT_001e1de8,0,(int)*(short *)(param_1 + 0xbe),0
                           ,(int)(short)(*(ushort *)(iVar4 + 0x4e) | 0x8000),1);
      if (iVar4 != 0) {
        *(undefined *)(iVar4 + 3) = 0;
      }
    }
  }
  if ((*(int *)(param_1 + 0x12b0) != 0) && (*(int *)(*(int *)(param_1 + 0x12b0) + 0x13c) == 0)) {
    *(undefined4 *)(param_1 + 0x12b0) = 0;
  }
  if ((*(int *)(param_1 + 0x1224) != 0) && (*(int *)(*(int *)(param_1 + 0x1224) + 0x13c) == 0)) {
    FUN_0036b02c(param_2,param_1);
  }
  if ((*(uint *)(param_1 + 0x1710) & DAT_001e1dec) == 0) {
    local_50 = *(uint *)(param_2 + 0x14);
    local_4c = *(uint *)(param_2 + 0x18);
    uStack_48 = *(undefined4 *)(param_2 + 0x1c);
    uStack_44 = *(undefined4 *)(param_2 + 0x20);
    uStack_40 = *(undefined4 *)(param_2 + 0x24);
    local_3c = *(undefined4 *)(param_2 + 0x28);
    local_38 = *(undefined4 *)(param_2 + 0x2c);
    uStack_34 = *(undefined4 *)(param_2 + 0x30);
    uStack_30 = *(undefined4 *)(param_2 + 0x34);
    uStack_2c = *(undefined4 *)(param_2 + 0x38);
    local_28 = *(undefined4 *)(param_2 + 0x3c);
    uStack_24 = *(undefined4 *)(param_2 + 0x40);
    if (*(char *)(param_1 + 0x227a) != '\0') {
      uVar5 = *DAT_001e1df4 | *DAT_001e1df0 | 0x2000;
      local_50 = local_50 & ~uVar5;
      local_4c = local_4c & ~uVar5;
    }
  }
  else {
    local_50 = 0;
    local_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    local_3c = 0;
    local_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    local_28 = 0;
    uStack_24 = 0;
  }
  FUN_00250ad0(param_1,param_2,&local_50);
  iVar4 = *DAT_001e1df8;
  *(short *)(iVar4 + 0x43c) = (short)(int)*(float *)(param_1 + 0x28);
  *(short *)(iVar4 + 0x43e) = (short)(int)*(float *)(param_1 + 0x2c);
  *(short *)(iVar4 + 0x440) = (short)(int)*(float *)(param_1 + 0x30);
  *(undefined2 *)(iVar4 + 0x442) = *(undefined2 *)(param_1 + 0x36);
  *(undefined4 *)(param_1 + 0x29e4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x29e8) = 0;
  return;
}


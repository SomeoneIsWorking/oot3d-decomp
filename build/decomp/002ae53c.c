// OoT3D decomp @ 002ae53c  name=FUN_002ae53c  size=632

void FUN_002ae53c(int param_1,int param_2)

{
  uint uVar1;
  ushort uVar2;
  short sVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;

  if ((*(int *)(param_1 + 0x1d0) == 0) || (*(char *)(*(int *)(param_1 + 0x1d0) + 0xa10) != '\x04'))
  {
    iVar7 = FUN_00373bc0(param_2,param_1 + 0x1dc);
    uVar4 = DAT_002ae7b4;
    if ((iVar7 == 0) &&
       ((iVar7 = FUN_00373bc0(param_2,param_1 + 0x234), iVar7 == 0 &&
        (iVar7 = FUN_00373bc0(param_2,param_1 + 0x28c), iVar7 == 0)))) {
      if (*(int *)(param_1 + 0x2e4) == 0) goto LAB_002ae6bc;
      local_34 = *(undefined4 *)(param_1 + 0x2e8);
      local_2c = *(undefined4 *)(param_1 + 0x2f0);
      iVar7 = 0;
      local_30 = uVar4;
      uVar2 = *(ushort *)(param_1 + 0x1c);
      uVar1 = ((uint)uVar2 << 0x15) >> 0x1d;
      if (uVar1 != 0) {
        do {
          FUN_0036df58(param_2,param_1 + 0x28,((uint)uVar2 << 0x10) >> 0x1b);
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)uVar1);
      }
    }
    else {
      iVar7 = 0;
      local_34 = uVar4;
      local_30 = uVar4;
      local_2c = uVar4;
      uVar2 = *(ushort *)(param_1 + 0x1c);
      uVar1 = ((uint)uVar2 << 0x15) >> 0x1d;
      if (uVar1 != 0) {
        do {
          FUN_0036df58(param_2,param_1 + 0x28,((uint)uVar2 << 0x10) >> 0x1b);
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)uVar1);
      }
    }
    local_40 = *(undefined4 *)(param_1 + 0x28);
    local_3c = *(undefined4 *)(param_1 + 0x2c);
    local_38 = *(undefined4 *)(param_1 + 0x30);
    FUN_003216b0(param_1,param_2,&local_40,&local_34);
    FUN_00374428(param_1);
  }
  else {
    FUN_00374428(param_1);
  }
LAB_002ae6bc:
  sVar3 = *(short *)(param_1 + 0x36);
  pfVar8 = (float *)(param_1 + 0x28);
  fVar9 = (float)FUN_00338f60((int)sVar3);
  fVar10 = (float)FUN_002cfca0((int)sVar3);
  fVar5 = DAT_002ae7b8;
  iVar7 = param_2 + 0x5c78;
  *(float *)(param_1 + 0x230) = *(float *)(param_1 + 0x30) - fVar10 * DAT_002ae7b8;
  fVar6 = DAT_002ae7bc;
  *(float *)(param_1 + 0x228) = *pfVar8 + fVar9 * fVar5;
  *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(param_1 + 0x2c);
  *(float *)(param_1 + 0x288) = *(float *)(param_1 + 0x30) - fVar10 * fVar6;
  fVar5 = DAT_002ae7c0;
  *(float *)(param_1 + 0x280) = *pfVar8 + fVar9 * fVar6;
  *(undefined4 *)(param_1 + 0x284) = *(undefined4 *)(param_1 + 0x2c);
  *(float *)(param_1 + 0x2e0) = *(float *)(param_1 + 0x30) - fVar10 * fVar5;
  *(float *)(param_1 + 0x2d8) = *pfVar8 + fVar9 * fVar5;
  *(undefined4 *)(param_1 + 0x2dc) = *(undefined4 *)(param_1 + 0x2c);
  FUN_00376168(param_2,iVar7,param_1 + 0x1dc);
  FUN_00376168(param_2,iVar7,param_1 + 0x234);
  FUN_00376168(param_2,iVar7,param_1 + 0x28c);
  return;
}

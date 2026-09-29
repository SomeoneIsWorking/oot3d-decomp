// OoT3D decomp @ 002ae2a0  name=FUN_002ae2a0  size=648

void FUN_002ae2a0(int param_1,int param_2)

{
  uint uVar1;
  ushort uVar2;
  short sVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;

  if ((*(int *)(param_1 + 0x1d0) == 0) || (*(char *)(*(int *)(param_1 + 0x1d0) + 0xa10) != '\x04'))
  {
    iVar9 = FUN_00373bc0(param_2,param_1 + 0x1dc);
    uVar4 = DAT_002ae528;
    if ((iVar9 == 0) &&
       ((iVar9 = FUN_00373bc0(param_2,param_1 + 0x234), iVar9 == 0 &&
        (iVar9 = FUN_00373bc0(param_2,param_1 + 0x28c), iVar9 == 0)))) {
      if (*(int *)(param_1 + 0x2e4) == 0) goto LAB_002ae420;
      local_34 = *(undefined4 *)(param_1 + 0x2e8);
      local_2c = *(undefined4 *)(param_1 + 0x2f0);
      iVar9 = 0;
      local_30 = uVar4;
      uVar2 = *(ushort *)(param_1 + 0x1c);
      uVar1 = ((uint)uVar2 << 0x15) >> 0x1d;
      if (uVar1 != 0) {
        do {
          FUN_0036df58(param_2,param_1 + 0x28,((uint)uVar2 << 0x10) >> 0x1b);
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)uVar1);
      }
    }
    else {
      iVar9 = 0;
      local_34 = uVar4;
      local_30 = uVar4;
      local_2c = uVar4;
      uVar2 = *(ushort *)(param_1 + 0x1c);
      uVar1 = ((uint)uVar2 << 0x15) >> 0x1d;
      if (uVar1 != 0) {
        do {
          FUN_0036df58(param_2,param_1 + 0x28,((uint)uVar2 << 0x10) >> 0x1b);
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)uVar1);
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
LAB_002ae420:
  sVar3 = *(short *)(param_1 + 0x36);
  pfVar10 = (float *)(param_1 + 0x28);
  fVar11 = (float)FUN_00338f60((int)sVar3);
  fVar12 = (float)FUN_002cfca0((int)sVar3);
  fVar6 = DAT_002ae530;
  fVar5 = DAT_002ae52c;
  iVar9 = param_2 + 0x5c78;
  *(float *)(param_1 + 0x230) =
       (*(float *)(param_1 + 0x30) + fVar11 * DAT_002ae52c) - fVar12 * DAT_002ae530;
  *(float *)(param_1 + 0x228) = fVar12 * fVar5 + fVar11 * fVar6 + *pfVar10;
  *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(param_1 + 0x2c);
  *(float *)(param_1 + 0x288) = (*(float *)(param_1 + 0x30) + fVar11 * fVar6) - fVar12 * fVar5;
  fVar8 = DAT_002ae538;
  fVar7 = DAT_002ae534;
  *(float *)(param_1 + 0x280) = fVar12 * fVar6 + fVar11 * fVar5 + *pfVar10;
  *(undefined4 *)(param_1 + 0x284) = *(undefined4 *)(param_1 + 0x2c);
  *(float *)(param_1 + 0x2e0) = (*(float *)(param_1 + 0x30) + fVar11 * fVar7) - fVar12 * fVar8;
  *(float *)(param_1 + 0x2d8) = fVar12 * fVar7 + fVar11 * fVar8 + *pfVar10;
  *(undefined4 *)(param_1 + 0x2dc) = *(undefined4 *)(param_1 + 0x2c);
  FUN_00376168(param_2,iVar9,param_1 + 0x1dc);
  FUN_00376168(param_2,iVar9,param_1 + 0x234);
  FUN_00376168(param_2,iVar9,param_1 + 0x28c);
  return;
}

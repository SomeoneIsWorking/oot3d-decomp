// OoT3D decomp @ 00359464  name=FUN_00359464  size=516

void FUN_00359464(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float local_30;
  float local_2c;
  float local_28;

  iVar5 = 2;
  puVar3 = (undefined4 *)(param_1 + 0x1f0);
  *puVar3 = 0x32;
  do {
    iVar5 = iVar5 + -1;
    puVar3[1] = 0x32;
    puVar3 = puVar3 + 2;
    *puVar3 = 0x32;
    uVar2 = DAT_00359670;
    fVar9 = DAT_0035966c;
    iVar1 = DAT_00359668;
  } while (iVar5 != 0);
  iVar5 = 0;
  do {
    pfVar4 = (float *)(iVar1 + iVar5 * 0xc);
    iVar6 = param_1 + iVar5 * 4;
    fVar7 = *(float *)(param_1 + 0x54) * *pfVar4 * fVar9;
    fVar10 = *(float *)(param_1 + 0x5c) * pfVar4[2] * fVar9;
    local_30 = fVar10 * *(float *)(param_1 + 0x1c8) + fVar7 * *(float *)(param_1 + 0x1cc) +
               *(float *)(param_1 + 0x28);
    local_2c = *(float *)(param_1 + 0x58) * pfVar4[1] * fVar9 + *(float *)(param_1 + 0x10c);
    local_28 = (fVar10 * *(float *)(param_1 + 0x1cc) - fVar7 * *(float *)(param_1 + 0x1c8)) +
               *(float *)(param_1 + 0x30);
    uVar8 = FUN_0033bebc(uVar2,param_2 + 0xa98,iVar6 + 0x204,iVar6 + 0x1f0,param_1,&local_30);
    iVar5 = iVar5 + 1;
    *(undefined4 *)(iVar6 + 0x218) = uVar8;
  } while (iVar5 < 5);
  iVar5 = 0;
  if ((*(float *)(param_1 + 0x218) < *(float *)(param_1 + 0x21c)) ||
     ((*(int *)(param_1 + 500) == 0x32 &&
      ((uint)(*(float *)(param_1 + 0x21c) - *(float *)(param_1 + 0x218)) < (uint)DAT_00359674)))) {
    iVar5 = 1;
  }
  fVar9 = *(float *)(param_1 + iVar5 * 4 + 0x218);
  if ((fVar9 < *(float *)(param_1 + 0x220)) ||
     ((*(int *)(param_1 + 0x1f8) == 0x32 &&
      ((uint)(*(float *)(param_1 + 0x220) - fVar9) < (uint)DAT_00359674)))) {
    iVar5 = 2;
  }
  fVar9 = *(float *)(param_1 + iVar5 * 4 + 0x218);
  if ((fVar9 < *(float *)(param_1 + 0x224)) ||
     ((*(int *)(param_1 + 0x1fc) == 0x32 &&
      ((uint)(*(float *)(param_1 + 0x224) - fVar9) < (uint)DAT_00359674)))) {
    iVar5 = 3;
  }
  fVar9 = *(float *)(param_1 + iVar5 * 4 + 0x218);
  if ((fVar9 < *(float *)(param_1 + 0x228)) ||
     ((*(int *)(param_1 + 0x200) == 0x32 &&
      ((uint)(*(float *)(param_1 + 0x228) - fVar9) < (uint)DAT_00359674)))) {
    iVar5 = 4;
  }
  *(short *)(param_1 + 0x22c) = (short)iVar5;
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + (short)iVar5 * 4 + 0x218);
  return;
}
